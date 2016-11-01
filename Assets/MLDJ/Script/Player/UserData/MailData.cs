﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;

public class MailData : MonoBehaviour {

    public enum MailState
    {
        UNREAD,
        READ,
        UNGETITEM,
        GETITEM,
    }

    public enum MailUpdateType
    {
        UPDATE,
        ADD,
        DEL,
    }
	public class UserMail
	{
        public GC_MAIL_UPDATE.MailSender senderType;

        public UInt64       key;
        public UInt64       SenderID;
        public string       SenderName;
		public string 	    time;
		public string 	    text;
		public int	  	    itemID;
		public int			itemCount;
        public bool         bReaded = false;
        public bool         bGetItem = false;
        public int          moneyType;
        public int          moneyCount;
		public int		sortTime;
	}

    public const int MailCountMax = 32;

    public static Dictionary<System.UInt64, UserMail> UserMailMap = new Dictionary<System.UInt64, UserMail>();
    private static ulong m_curPlayGuid = 0;


    public delegate void MailDelUpdate(MailUpdateType updateType, System.UInt64 curMailID);
    public static MailDelUpdate delMailUpdate;

    public static void CleanMailData()
    {
        UserMailMap.Clear();
    }

	public static void UpdateMailData(GC_MAIL_UPDATE data)
	{
        MailUpdateType curUpdateType = MailUpdateType.UPDATE;
        if (m_curPlayGuid != PlayerPreferenceData.LastRoleGUID)
        {
            UserMailMap.Clear();
        }

        m_curPlayGuid = PlayerPreferenceData.LastRoleGUID;

        UserMail curMail = null;
        if (UserMailMap.ContainsKey(data.MailGuid))
        {
            curMail = UserMailMap[data.MailGuid];
            curUpdateType = MailUpdateType.UPDATE;
        }
        else
        {
            curMail = new UserMail();
            UserMailMap.Add(data.MailGuid, curMail);
            curUpdateType = MailUpdateType.ADD;
        }

		if (RelationLogic.Instance ())
		{
			RelationLogic.Instance().ShowNewEmailBigRed ();
		}

        if (null == curMail)
            return;

        curMail.key = data.MailGuid;
        curMail.senderType = (GC_MAIL_UPDATE.MailSender)data.SenderType;
        curMail.SenderID = data.SenderGuid;
        if (curMail.senderType == GC_MAIL_UPDATE.MailSender.MAILSENDER_SYS)
        {
            if (data.HasOrigin && data.Origin == GlobeVar.MAIL_GUILDMAIL_ORIGIN)
            {
                curMail.SenderName = Utils.GetDicByID(4017);
            }
            else
            {
                curMail.SenderName = Utils.GetDicByID(1363);
            }
            if (!string.IsNullOrEmpty(data.TextContent))
            {
                char firstChar = data.TextContent[0];
                if (firstChar != '#')
                {
                    curMail.text = data.TextContent;
                }
                else
                {
                    curMail.text = StrDictionary.GetServerDictionaryFormatString(data.TextContent);
                }
            }
            else
            {
                curMail.text = "";
            }
            
        }
        else
        {
            curMail.SenderName = data.SenderName;
            curMail.text = data.TextContent;
        }

        if (!string.IsNullOrEmpty(curMail.text))
        {
            curMail.text = Utils.StrFilter_Mail(curMail.text);
            curMail.text = Utils.StrFilter_Abuse(curMail.text);
        }

        
        DateTime startTime = new DateTime(1970, 1, 1);
        DateTime sendDate = new DateTime((long)data.SendTime*10000000L + startTime.Ticks, DateTimeKind.Unspecified);
        sendDate = sendDate.ToLocalTime();
        curMail.time = sendDate.ToString("yyyy-MM-dd");
        curMail.bReaded = data.ReadTime > 0;
        curMail.itemID = data.HasItemID ? data.ItemID : -1;
		curMail.itemCount = data.HasItemCount ? data.ItemCount : 0;
        curMail.moneyType = data.HasMoneyType ? data.MoneyType : -1;
        curMail.moneyCount = data.HasMoneyCount ? data.MoneyCount : 0;
		curMail.sortTime = data.SendTime;

        if (null != delMailUpdate) delMailUpdate(curUpdateType, data.MailGuid);

	}

    public static void DelMail(System.UInt64 mailID)
    {
        if (UserMailMap.ContainsKey(mailID))
        {
            UserMailMap.Remove(mailID);
        }

        if (null != delMailUpdate) delMailUpdate(MailUpdateType.DEL, mailID);

    }
}
