﻿using UnityEngine;
using System.Collections;
using Module.Log;
using GCGame;
using Games.Item;
using System.Collections.Generic;
using GCGame.Table;

public class CangKuLogic : MonoBehaviour {

    const int MAX_ITEM_PAGE = 16;   //每页最大格子数量
    const int MAX_PAGE = 9;         //最大页数

    public GameObject m_CangKuItemGrid;
    public GameObject m_CangKuBackPackItemGrid;
    public UIImageButton m_PageDownBtn;
    public UIImageButton m_PageUpBtn;
    public UILabel m_PageLabel;
    public UILabel m_BackPakcSize;
    public UILabel m_Moneyinfo_CoinLable;
    public UILabel m_Moneyinfo_YuanBaoLable;
    public UILabel m_Moneyinfo_YuanBaoBindLable;

    private CangKuItemLogic[] m_CangKuItems = new CangKuItemLogic[MAX_ITEM_PAGE];
    private List<CangKuBackItemLogic> m_CangKuBackItems = new List<CangKuBackItemLogic>();
    private int m_CurPage = 0;

    private static CangKuLogic m_Instance = null;
    public static CangKuLogic Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        m_Instance = this;
    }

	// Use this for initialization
	void Start () {
        InitCangKu();
        InitBackPack();
        Check_NewPlayerGuide();
	}
	
    /// <summary>
    /// 初始化仓库部分
    /// </summary>
    void InitCangKu()
    {
        UIManager.LoadItem(UIInfo.CangKuItem, OnLoadCangKuItem);
    }

    void OnLoadCangKuItem(GameObject resObj, object param)
    {
        if (null == resObj)
        {
            LogModule.ErrorLog("load cangku item error");
            return;
        }
        for (int nIndex = 0; nIndex < MAX_ITEM_PAGE; ++nIndex)
        {
            GameObject itemobject = Utils.BindObjToParent(resObj, m_CangKuItemGrid, (nIndex + 1000).ToString());
            if (null != itemobject)
            {
                m_CangKuItems[nIndex] = itemobject.GetComponent<CangKuItemLogic>();
                if (null != m_CangKuItems[nIndex])
                    m_CangKuItems[nIndex].UpdateEmpty();
            }
        }

        UIGrid cangKuItemGrid = m_CangKuItemGrid.GetComponent<UIGrid>();
        if (null != cangKuItemGrid)
        {
            cangKuItemGrid.sorted = true;
            cangKuItemGrid.repositionNow = true;
        }

        ReqCangKuPackData();
        UpdateCangKu();
    }

    void ReqCangKuPackData()
    {
        CG_ASK_UPDATE_STORAGEPACK pak = (CG_ASK_UPDATE_STORAGEPACK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_UPDATE_STORAGEPACK);
        pak.SetType(1);
        pak.SendPacket();
    }

    /// <summary>
    /// 刷新仓库部分
    /// </summary>
    public void UpdateCangKu()
    {
        UpdateCangKu_Item();
        UpdateCangKu_Page();
    }

    void UpdateCangKu_Item()
    {
        GameItemContainer itempack = GameManager.gameManager.PlayerDataPool.StoragePack;
        List<GameItem> itemlist = ItemTool.ItemFilter(itempack, 0);
        for (int nIndex = 0; nIndex < MAX_ITEM_PAGE; ++nIndex)
        {
            int itemIndex = m_CurPage * MAX_ITEM_PAGE + nIndex;
            if (itemIndex < itempack.ContainerSize)
            {
                if (itemIndex >= 0 && itemIndex < itemlist.Count)
                {
                    GameItem item = itemlist[itemIndex];
                    if (item != null && item.IsValid())
                    {
                        m_CangKuItems[nIndex].UpdateItem(item);
                    }
                    else
                    {
                        m_CangKuItems[nIndex].UpdateEmpty();
                    }
                }
                else
                {
                    m_CangKuItems[nIndex].UpdateEmpty();
                }
            }
            else
            {
                //UnLock
                m_CangKuItems[nIndex].UpdateLock();
            }
        }
    }

    void UpdateCangKu_Page()
    {
        m_PageUpBtn.enabled = true;
        m_PageDownBtn.enabled = true;
        if (m_CurPage <= 0)
        {
            m_PageUpBtn.enabled = false;
        }
        if (m_CurPage >= MAX_PAGE - 1)
        {
            m_PageDownBtn.enabled = false;
        }
        m_PageLabel.text = (m_CurPage+1).ToString();
    }

    void OnClickPageUp()
    {
        if (m_CurPage > 0)
        {
            m_CurPage--;
            UpdateCangKu();
        }
    }

    void OnClickPageDown()
    {
        if (m_CurPage < (MAX_PAGE-1))
        {
            m_CurPage++;
            UpdateCangKu();
        }
    }

    public void OnClickUnLock()
    {
        GameItemContainer itempack = GameManager.gameManager.PlayerDataPool.StoragePack;
        int page = itempack.ContainerSize / MAX_ITEM_PAGE;
        Tab_CangKuUnlock line = TableManager.GetCangKuUnlockByID(page+1, 0);
        if (line != null)
        {
            string str = "";
            if (line.ConsumeType == 1 && line.ConsumeSubType == 2)
            {
                //元宝
                //str = StrDictionary.GetClientDictionaryString("#{2982}", line.ConsumeNum);
                str = "qian2";
            }
            else if (line.ConsumeType == 2 && line.ConsumeSubType == 1)
            {
                //金币
                //str = StrDictionary.GetClientDictionaryString("#{2981}", line.ConsumeNum);
                str = "qian1";
            }
            //MessageBoxLogic.OpenOKCancelBox(str, "", OnClickUnLock_OK, OnClickUnLock_Cancel);
            MessageBoxLogic.OpenCostBox(
                StrDictionary.GetClientDictionaryString("#{11037}"), null,
                StrDictionary.GetClientDictionaryString("#{11036}"),
                StrDictionary.GetClientDictionaryString("#{11038}"), 
                str, "X" + line.ConsumeNum, OnClickUnLock_OK, OnClickUnLock_Cancel);
        }
        else if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false ,"#{2699}");
        }
    }

    void OnClickUnLock_OK()
    {
        CG_STORAGEPACK_UNLOCK unlock = (CG_STORAGEPACK_UNLOCK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_STORAGEPACK_UNLOCK);
        unlock.SetUnlocknum(1);
        unlock.SendPacket();
    }

    void OnClickUnLock_Cancel()
    {
    }

    /// <summary>
    /// 初始化背包部分
    /// </summary>
    void InitBackPack()
    {
        UIManager.LoadItem(UIInfo.CangKuBackItem, OnLoadBackPackItem);
    }

    void OnLoadBackPackItem(GameObject resObj, object param)
    {
        if (null == resObj)
        {
            LogModule.ErrorLog("load cangku backpack item error");
            return;
        }
        GameItemContainer itempack = GameManager.gameManager.PlayerDataPool.BackPack;
        for (int nIndex = 0; nIndex < itempack.ContainerSize; ++nIndex)
        {
            GameObject itemobject = Utils.BindObjToParent(resObj, m_CangKuBackPackItemGrid, (nIndex + 1000).ToString());
            if (itemobject != null)
            {
                CangKuBackItemLogic itemLogic = itemobject.GetComponent<CangKuBackItemLogic>();
                if (itemLogic != null)
                {
                    m_CangKuBackItems.Add(itemLogic);
                    itemLogic.UpdateEmpty();
                }
            }
        }
        m_CangKuBackPackItemGrid.GetComponent<UIGrid>().sorted = true;
        m_CangKuBackPackItemGrid.GetComponent<UIGrid>().repositionNow = true;

        UpdateBackPack();
    }

    /// <summary>
    /// 刷新背包部分
    /// </summary>
    public void UpdateBackPack()
    {
        UpdateBackPack_Item();
        UpdateBackPack_Money();
        UpdateBackPack_Size();
    }

    void UpdateBackPack_Item()
    {
        GameItemContainer itempack = GameManager.gameManager.PlayerDataPool.BackPack;
        List<GameItem> itemlist = ItemTool.ItemFilter(itempack, 0);
        for (int nIndex = 0; nIndex < itempack.ContainerSize; ++nIndex)
        {
            if (nIndex < itemlist.Count)
            {
                GameItem item = itemlist[nIndex];
                if (item != null && item.IsValid())
                {
                    m_CangKuBackItems[nIndex].UpdateItem(item);
                }
                else
                {
                    m_CangKuBackItems[nIndex].UpdateEmpty();
                }
            }
            else
            {
                m_CangKuBackItems[nIndex].UpdateEmpty();
            }
        }
    }

    public void UpdateBackPack_Money()
    {
        m_Moneyinfo_CoinLable.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());
        m_Moneyinfo_YuanBaoLable.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao().ToString();
        m_Moneyinfo_YuanBaoBindLable.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind().ToString();
    }

    void UpdateBackPack_Size()
    {
        // 更新背包大小
        GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        m_BackPakcSize.text = string.Format("{0}/{1}", BackPack.GetItemCount(), BackPack.ContainerSize);
    }

    void OnClickClose()
    {
        UIManager.CloseUI(UIInfo.CangKu);
    }

    public static bool isNewPlayerGuide = false;
    private int m_NewPlayerGuideFlag_Step = -1;
    public int NewPlayerGuideFlag_Step
    {
        get { return m_NewPlayerGuideFlag_Step; }
        set { m_NewPlayerGuideFlag_Step = value; }
    }

    void Check_NewPlayerGuide()
    {
        if (isNewPlayerGuide)
        {
            NewPlayerGuide(0);
            isNewPlayerGuide = false;
        }
    }

    public void NewPlayerGuide(int index)
    {
        if (index < 0)
        {
            return;
        }
        m_NewPlayerGuideFlag_Step = index;
        switch (index)
        {
            case 0:
                NewPlayerGuidLogic.OpenWindow(transform.Find("CangKuOffset/CangKu/EnlargeButton").gameObject, 100, 100,
                   GCGame.Utils.GetDicByID(11545), "top", -1, true, true, false, null, null, 0, 0, true, false, () =>
                   {
                       NewPlayerGuide(1);
                   });
                   //CG_COMPLETEMISSION gemPacket = (CG_COMPLETEMISSION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_COMPLETEMISSION);
                   //gemPacket.SetMissionID(80);
                   //gemPacket.SendPacket();
                break;
            case 1:
                NewPlayerGuidLogic.OpenWindow(this.gameObject, 900, 600,
                    GCGame.Utils.GetDicByID(11546), "center", -1, true, true, false, null, null, 0.2f, 0, true, false, () =>
                    {
                        NewPlayerGuide(2);
                    });
                break;
            case 2:
                m_NewPlayerGuideFlag_Step = -1;
                NewPlayerGuidLogic.CloseWindow();
                break;
            default:
                break;
        }
    }
}