//********************************************************************
// 文件名: EquipStrengthenItemLogic.cs
// 描述: 装备强化界面物品格UI逻辑
// 作者: TangYi
// 创建时间: 2013-12-25
//
// 修改历史:
//********************************************************************
using UnityEngine;
using System.Collections;
using Games.Item;
using GCGame.Table;
using Games.GlobeDefine;

public class EquipStrengthenItemLogic : MonoBehaviour {

    public UISprite m_itemSprite;
    public UISprite m_itemChooseSprite;
    public UISprite m_itemQualitySprite;
    public UILabel m_itemStackCount;
    public UISprite m_ArrowUpSprite;
    public UISprite m_ArrowDownSprite;
    public UISprite m_DisableSprite;
    public UILabel m_StarLvlLabel;
    public UILabel m_EnchanceLvlLabel;

    public GameItem m_item;

    public Type m_type;
    public enum Type
    {
        TYPE_ENC_EQUIP_BACKPACK = 0,    //强化-装备-背包
        TYPE_ENC_EQUIP_EQUIPPACK = 1,   //强化-装备-身上
        TYPE_ENC_METARIAL_BACKPACK = 2, //强化-材料-背包
        TYPE_STA_EQUIP_BACKPACK = 3,    //打星-装备-背包
        TYPE_STA_EQUIP_EQUIPPACK = 4,   //打星-装备-身上
    }

    public Status m_Status = Status.STATUS_ENABLE;
    public enum Status
    {
        STATUS_ENABLE = 0,  //未选择
        STATUS_CHOOSED,     //选择
        STATUS_DISABLE,     //不可点击
    }

    // 新手指引
    private int m_NewPlayerGuideFlag_Step = -1;
	private int selectedCount = 0;

	// Use this for initialization
	void Start () {
        Check_NewPlayerguide();
	}

    public void UpdateItemInfo(GameItem item, Type type)
    {
        if (item != null)
        {
            m_item = item;
            m_type = type;
            SetSprite();
            SetStackCount(item);
            SetArrow(item);
            SetDisable(item);
            SetStarLevel(item);
            SetEnchanceLevel(item);
        }
    }

    private void SetSprite()
    {
        Tab_CommonItem line = TableManager.GetCommonItemByID(m_item.DataID, 0);
        if (line != null)
        {
            m_itemSprite.spriteName = line.Icon;
            m_itemSprite.MakePixelPerfect();

            m_itemQualitySprite.spriteName = GlobeVar.QualityColorGrid[line.Quality - 1];
        }
    }

    void SetStackCount(GameItem item)
    {
        if (item.StackCount > 1)
        {
            m_itemStackCount.gameObject.SetActive(true);
            m_itemStackCount.text = item.StackCount.ToString();
        }
        else
        {
            m_itemStackCount.gameObject.SetActive(false);
        }
    }

    void SetStarLevel(GameItem item)
    {
        if (item.IsValid())
        {
            if (item.StarLevel > 0)
            {
                m_StarLvlLabel.text = item.GetStarColor() + "+" + ((item.StarLevel - 1) % 12 + 1).ToString();
            }
            else
            {
                m_StarLvlLabel.text = "";
            }
        }
    }

    void SetEnchanceLevel(GameItem item)
    {
        if (item.IsValid())
        {
            if (item.EnchanceLevel > 0)
            {
                m_EnchanceLvlLabel.text = "+" + item.EnchanceLevel.ToString();
            }
            else
            {
                m_EnchanceLvlLabel.text = "";
            }
        }
    }

    public void SetArrow(GameItem item)
    {
        m_ArrowUpSprite.gameObject.SetActive(false);
        m_ArrowDownSprite.gameObject.SetActive(false);
        if (item.IsEquipMent())
        {
            if (item.GetProfessionRequire() == GlobeVar.INVALID_ID || item.GetProfessionRequire() == Singleton<ObjManager>.Instance.MainPlayer.Profession)
            {
                //获得身上对应槽位的装备
                int slotindex = item.GetEquipSlotIndex();
                GameItem compareEquip = GameManager.gameManager.PlayerDataPool.EquipPack.GetItem(slotindex);
                if (compareEquip != null)
                {
                    if (compareEquip.IsValid())
                    {
                        if (compareEquip.GetCombatValue_NoStarEnchance() > item.GetCombatValue_NoStarEnchance())
                        {
                            m_ArrowDownSprite.gameObject.SetActive(true);
                            m_ArrowUpSprite.gameObject.SetActive(false);
                            return;
                        }
                        else if (compareEquip.GetCombatValue_NoStarEnchance() == item.GetCombatValue_NoStarEnchance())
                        {
                            m_ArrowDownSprite.gameObject.SetActive(false);
                            m_ArrowUpSprite.gameObject.SetActive(false);
                            return;
                        }
                    }
                }
                m_ArrowDownSprite.gameObject.SetActive(false);
                m_ArrowUpSprite.gameObject.SetActive(true);
            }
        }
    }

    void SetDisable(GameItem item)
    {
        if (item.IsEquipMent())
        {
            if (item.IsFitForPlayer())
            {
                m_DisableSprite.gameObject.SetActive(false);
            }
            else
            {
                m_DisableSprite.gameObject.SetActive(true);
            }
        }
    }

    //点击显示装备TIPS
    public void OnClickShowItem()
    {
        if (m_item.IsEquipMent())
        {
            EquipTooltipsLogic.ShowEquipTooltip(m_item, EquipTooltipsLogic.ShowType.Info);
        }
        else
        {

            ItemTooltipsLogic.ShowItemTooltip(m_item, ItemTooltipsLogic.ShowType.Info);
        }
    }

    //点击选择装备
    public void OnClickChooseItem()
    {
        if (m_item == null)
        {
            return;
        }
        if (EquipStrengthenLogic.Instance() == null)
        {
            return;
        }

        if (EquipStrengthenLogic.Instance() != null)
        {
            GameItem curEquip = EquipStrengthenLogic.Instance().GetCurSelectEquip();
            if (curEquip != null)
            {
                if (curEquip.EnchanceLevel >= GlobeVar.EQUIP_ENCHANCE_MAX_LEVEL)
                {
                    //装备强化满级时 不可选择玄铁
                    if (m_item.IsEnchanceExpItem())
                    {
                        GUIData.AddNotifyData2Client(false, "#{4667}");
                        return;
                    }
                }
            }
        }
        if (m_Status == Status.STATUS_DISABLE)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1271}");
        }

        //改变点击状态
        ChangeClickStatus();

        if (m_Status == Status.STATUS_CHOOSED)
        {
            if (EquipStrengthenLogic.Instance().Get_m_bSetItemCount())
            {
                SetSelectedCount(1);
            }
            else
            {
                EquipStrengthenLogic.Instance().ShowItemInfoObj(this);
                //EquipStrengthenLogic.Instance().ItemAfterChoose_Enchance_Metarial(m_item);
            }
            
        }
        else if (m_Status == Status.STATUS_ENABLE)
        {
            SetStackCount(m_item);
            EquipStrengthenLogic.Instance().CloseItemInfoObj();
            EquipStrengthenLogic.Instance().ItemAfterCancel_Enchance_Metarial(m_item);
        }

        // 新手指引
        else if (m_NewPlayerGuideFlag_Step == 0)
        {
            EquipStrengthenLogic.Instance().NewPlayerGuide(2);
            m_NewPlayerGuideFlag_Step = -1;
        }

        if (m_item.IsEnchanceExpItem())
        {
            if (EquipStrengthenLogic.Instance())
            {
                EquipStrengthenLogic.Instance().m_AutoChooseEnchanceStone = true;
            }
        }
    }

    public void ChangeClickStatus()
    {
        if (m_Status == Status.STATUS_ENABLE)
        {
            m_Status = Status.STATUS_CHOOSED;
            m_itemChooseSprite.gameObject.SetActive(true);
        }
        else if (m_Status == Status.STATUS_CHOOSED)
        {
            m_Status = Status.STATUS_ENABLE;
            m_itemChooseSprite.gameObject.SetActive(false);
        }
        else if (m_Status == Status.STATUS_DISABLE)
        {
            //donothing
        }
    }

    //按钮变得不可点击
    public void Disable()
    {
        m_Status = Status.STATUS_DISABLE;
        m_itemChooseSprite.gameObject.SetActive(false);
    }

    public void OnDisable()
    {
        //在隐藏的时候把item变为可点击状态，即不选中了
        if (m_item != null)
        {
            Enable();
            SetStackCount(m_item);//然后设置个数
            EquipStrengthenLogic.Instance().ItemAfterCancel_Enchance_Metarial(m_item);//执行不选中item的操作
        }
    }
    //按钮恢复可以点击
    public void Enable()
    {
        m_Status = Status.STATUS_ENABLE;
        m_itemChooseSprite.gameObject.SetActive(false);
    }

    // 新手指引
    void Check_NewPlayerguide()
    {
        if (gameObject.name != "1000")
        {
            return;
        }

        if (EquipStrengthenLogic.Instance() == null)
        {
            return;
        }
        int nIndex = EquipStrengthenLogic.Instance().NewPlayerGuideFlag_Step;
        if (nIndex == 1)
        {
            NewPlayerGuide(0);
            EquipStrengthenLogic.Instance().NewPlayerGuideFlag_Step = -1;
        }
    }

    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuideFlag_Step = nIndex;
        if (nIndex == 0)
        {
            NewPlayerGuidLogic.OpenWindow(m_itemSprite.gameObject, 80, 80, "", "right", 0, true, true);
        }
    }

	public void SetSelectedCount(int count)
	{
		selectedCount = count;
        m_itemStackCount.text = selectedCount + "/" + m_item.StackCount;
		EquipStrengthenLogic.Instance().ItemAfterChoose_Enchance_Metarial(m_item);
	}

	public int GetSelectedCount()
	{
		return selectedCount;
	}

	public Type GetMType()
	{
			return m_type;
	}

	public GameItem getGameItem()
	{
			return this.m_item;
	}

    public void ClearSTATUS()
	{
	        m_Status = Status.STATUS_ENABLE;
            SetStackCount(m_item);
            EquipStrengthenLogic.Instance().CloseItemInfoObj();
            EquipStrengthenLogic.Instance().ItemAfterCancel_Enchance_Metarial(m_item);
	}
       
}