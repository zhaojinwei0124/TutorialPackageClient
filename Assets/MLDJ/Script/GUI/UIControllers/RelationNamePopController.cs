﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame;
using Module.Log;

public class RelationNamePopController : UIControllerBase<RelationNamePopController> {

    public GameObject ListGrid;

    public delegate void ChooseNameDelegate(ulong curRelationID, string recevierName);
    private ChooseNameDelegate m_delChooseName;
    private bool m_bPopWindow = true;
    private bool m_bRestaurantFriend = false;
    private Transform m_GridTranForm;

    

    void Awake()
    {
        SetInstance(this);
        m_GridTranForm = ListGrid.transform;
    }

	// Use this for initialization
	void Start () 
    {
        ResetItem();
	}

    public void SetIsPopWindow(bool bPop)
    {
        m_bPopWindow = bPop;
    }

    public void SetIsRestaurantFriend(bool bRestaurantFriend)
    {
        m_bRestaurantFriend = bRestaurantFriend;
    }

    public void ResetItem()
    {
      if (m_bRestaurantFriend) {
        UIManager.LoadItem(UIInfo.RelationNameListItem, OnLoadItem);
      } else {
        UIManager.LoadItem(UIInfo.RelationMailNameListItem, OnLoadItem);
      }
    }

    void OnLoadItem(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            LogModule.ErrorLog("load RelationNameListItem fail");
            return;
        }
        Utils.CleanGrid(ListGrid);
        Dictionary<ulong, Relation> relationList = GameManager.gameManager.PlayerDataPool.FriendList.RelationDataList;
        foreach (ulong key in relationList.Keys)
        {
            RelationNameListItem.CreateItem(ListGrid,resItem, key.ToString(), this, relationList[key]);
            if (m_bRestaurantFriend)
            {
                SetRestaurantInfo();
                UpdateRestaurantVisitState();
            }
        }
        ListGrid.GetComponent<UIGrid>().Reposition();
        ListGrid.GetComponent<UITopGrid>().Recenter(true);

    }

    void OnCloseClick()
    {
        m_bRestaurantFriend = false;
        UIManager.CloseUI(UIInfo.RelationNamePopWindow);
    }

    public void SetDelegate(ChooseNameDelegate delFun)
    {
        m_delChooseName = delFun;
    }
    public void OnItemClick(RelationNameListItem curItem)
    {
        if (m_bPopWindow)
        {
            m_bRestaurantFriend = false;
            UIManager.CloseUI(UIInfo.RelationNamePopWindow);
        }

        if (null != m_delChooseName)
        {
            ulong curID = 0;
            if (ulong.TryParse(curItem.gameObject.name, out curID))
            {
                Dictionary<ulong, Relation> relationList = GameManager.gameManager.PlayerDataPool.FriendList.RelationDataList;

                m_delChooseName(curID, relationList[curID].Name);
            }
        }


		hideHightLight ();
    }

    void UpdateRestaurantVisitState()
    {
         for (int i = 0; i < m_GridTranForm.childCount; i++)
        {
            RelationNameListItem item = m_GridTranForm.GetChild(i).GetComponent<RelationNameListItem>();
            if (item != null)
            {
                item.UpdateRestaurantVisitState();
            }
        }
    }

    void SetRestaurantInfo()
    {
        for (int i = 0; i < m_GridTranForm.childCount; i++)
        {
            RelationNameListItem item = m_GridTranForm.GetChild(i).GetComponent<RelationNameListItem>();
            {
                if (item != null)
                {
                    item.SetRestaurantItemInfo();
                }
            }
        }
    }

	void hideHightLight()
	{
		for (int i = 0; i < m_GridTranForm.childCount; i++)
		{
			RelationNameListItem item = m_GridTranForm.GetChild(i).GetComponent<RelationNameListItem>();
			if (item != null)
			{
				item.hideHightLight();
			}
		}
	}
}
