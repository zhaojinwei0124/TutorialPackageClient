﻿/********************************************************************************
 *	文件名：ActiveAwardWindow.cs
 *	全路径：	\Script\GUI\UIWindows\ActiveAwardWindow.cs
 *	创建人：	贺文鹏
 *	创建时间：2014-02-24
 *
 *	功能说明： 活跃度奖励界面
 *	       
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame;
using GCGame.Table;
using Games.AwardActivity;
using Module.Log;
public class ActiveAwardWindow : MonoBehaviour
{
    // 奖励提醒
    public GameObject m_AwardTip;
    public UILabel m_AwardTipText;

    public UIGrid m_ItemGrid;

    private int m_nActiveness;
    public int Activeness
    {
        get { return m_nActiveness; }
        set { m_nActiveness = value; }
    }
    public GameObject m_AwardItem;

    // Use this for initialization
//     void Start()
//     {
//         ButtonDayAward();
//     }
    
    void OnEnable()
    {
        ButtonDayAward();
    }

    // 初始化数据
    void init()
    {
        Activeness = GameManager.gameManager.PlayerDataPool.AwardActivityData.Activeness;
    }

    void CleanUp()
    {
        if (m_AwardTip && m_AwardTipText)
        {
            m_AwardTipText.text = "";
            m_AwardTip.SetActive(false);
        }

        Utils.CleanGrid(m_ItemGrid.gameObject);
        m_ItemGrid.repositionNow = true;
        m_ItemGrid.sorted = true;
    }

    // 在线奖励按钮
    public void ButtonDayAward()
    {
        CleanUp();
        init();
        CreateAwardItemList();
        UpdateTips();

#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.ACT_RICHANG_SUBSTATE = UIRootJoyControllerHelper.ActRichangSubState.ACT_RICHANG_HUOYUE;
        UIRootJoyControllerHelper.Instance.ACT_SUBSTAT = UIRootJoyControllerHelper.ActivitySubState.ACT_UI_RICHANG;
#endif

    }

    // 创建奖励list
    void CreateAwardItemList()
    {
       // UIManager.LoadItem(UIInfo.ActivenessAwardItem, OnLoadAwardItem);
        OnLoadAwardItem(m_AwardItem);
    }

    void OnLoadAwardItem(GameObject gAwardItem)
    {
        if (null == gAwardItem)
        {
            LogModule.ErrorLog("can not load award activeItem");
            return;
        }
        int nMaxRecordCount = TableManager.GetActivenessAward().Count;
        for (int i = 0; i < nMaxRecordCount; i++)
        {
            Tab_ActivenessAward pAward = TableManager.GetActivenessAwardByID(i, 0);
            if (pAward == null)
            {
                LogModule.DebugLog("ActivenessAward: ActivenessAward.txt can't find line " + i);
                continue;
            }

            string strName = i.ToString();
            AwardState awardState = AwardState.AWARD_CANNNTHAVE;
            bool bFlag = GameManager.gameManager.PlayerDataPool.AwardActivityData.GetActivenessAwardFlag(i);
            if (bFlag == false && Activeness >= pAward.MiniActiveness)
            {
                awardState = AwardState.AWARD_CANHAVE;
            }
            else if (bFlag == false && Activeness < pAward.MiniActiveness)
            {
                awardState = AwardState.AWARD_NOTHAVEDONE;
            }
            else if (bFlag == true)
            {
                awardState = AwardState.AWARD_HAVEDONE;
            }
            else
            {
                awardState = AwardState.AWARD_CANNNTHAVE;
            }

            ActivenessAwardItem AwardItem = ActivenessAwardItem.CreateAwardItem(strName, m_ItemGrid.gameObject, gAwardItem);
            if (AwardItem)
            {
                AwardItem.AddAwardUI(pAward.Exp, pAward.Money, pAward.BindYuanbao,pAward.AwardSkillExp, pAward.AwardReputation);
                AwardItem.AddItemUI(pAward.ItemDataID, pAward.ItemCount);
                AwardItem.AddAwardUIRepution( pAward.AwardReputation);
                AwardItem.AwardInfoText = StrDictionary.GetClientDictionaryString("#{1634}", pAward.MiniActiveness);
                AwardItem.AwardButtonState = awardState;
                AwardItem.TurnID = pAward.Id;
            }
        }// end for

        m_ItemGrid.repositionNow = true;
        m_ItemGrid.sorted = true;
    }

    public void UpdateAwardItemState(int nTurnID)
    {
        ActivenessAwardItem[] Item = m_ItemGrid.GetComponentsInChildren<ActivenessAwardItem>();
        for (int i = 0; i < Item.Length; ++i)
        {
            if (Item[i].TurnID == nTurnID)
            {
                Tab_ActivenessAward pAward = TableManager.GetActivenessAwardByID(nTurnID, 0);
                if (pAward == null)
                {
                    LogModule.DebugLog("ActivenessAward: ActivenessAward.txt can't find line " + nTurnID);
                    return;
                }
                AwardState awardState = AwardState.AWARD_CANNNTHAVE;
                bool bFlag = GameManager.gameManager.PlayerDataPool.AwardActivityData.GetActivenessAwardFlag(nTurnID);
                if (bFlag == false && Activeness > pAward.MiniActiveness)
                {
                    awardState = AwardState.AWARD_CANHAVE;
                }
                else if (bFlag == true)
                {
                    awardState = AwardState.AWARD_HAVEDONE;
                }
                else
                {
                    awardState = AwardState.AWARD_CANNNTHAVE;
                }
                Item[i].AwardButtonState = awardState;
                return;
            }
        }
    }

    // 按钮上的提示信息
    void UpdateTips()
    {
        if (m_AwardTip == null || m_AwardTipText == null)
        {
            LogModule.DebugLog("ActiveAwardWindow: m_AwardTip or m_AwardTipText is null");
            return;
        }
//         if (m_WeekDay >= 0 && m_DayAwardFlag == false)
//         {
//             m_AwardTip.SetActive(true);
//             m_AwardTipText.text = "1";
//         }
//         else
//         {
//             m_AwardTipText.text = "";
//             m_AwardTip.SetActive(false);
//         }
    }
}
