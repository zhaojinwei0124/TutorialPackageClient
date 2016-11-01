﻿/********************************************************************
	created:	2013/12/16
	created:	16:12:2013   10:22
	filename: 	PlayerPreferenceData.cs
	file path:	MLDJ\Script\LogicCore
	file ext:	cs
	author:		王迪
	
	purpose:	保存玩家持久化数据
*********************************************************************/


using UnityEngine;
using System.Collections;
using Module.Log;
using Games.GlobeDefine;
using GCGame;
using GCGame.Table;
public class PlayerPreferenceData 
{
    public static int DefalutInt = -1;

    private static string keyAccount = "UserAccount";           // 上次登录的用户名,两个作用，测试登陆，记住上次账号，正常登陆，记录上次的UID  
    private static string keyPsw = "UserPsw";                   // 上次登录的密码
    private static string keyLastServerID = "LastServerID";     // 上次登录的服务器
    private static string keyLastRoleID = "LastRoleID";         // 上次登录玩家的GUID
    private static string keyLeftTabChoose = "LeftTabChoose";   // 玩家左侧标签选择
    private static string keyLeftTabControl = "LeftTabControl"; // 任务追踪折叠标记
	private static string keyRadarControl = "RadarControl"; // 小地图折叠标记
    private static string keyDailyMissionGuideFlag = "DailyMissionGuideFlag";   // 日常任务教学标记
    private static string keySystemNameBoard = "SystemNameBoard";               // 是否显示名字板
    private static string keySystemMusic = "SystemMusic";                       // 是否开启音乐
	private static string keySystemMusicVoice = "SystemMusicVoice";                       

    private static string keySystemSoundEffect = "SystemSoundEffect";           // 是否开启音效
	private static string keySystemSoundEffectVoice = "SystemSoundEffectVoice";           // 是否开启音效

    private static string keySystemTableau = "SystemTableau";                               // 图像品质
    private static string keySystemFloodlight = "SystemFloodlight";                            // 全拼泛光
    private static string keySystemScreenMove = "SystemScreenMovet";                            // 全拼泛光
    private static string keySystemWallVision = "SystemWallVision";                 // 遮挡可见
    private static string keySystemSkillEffect = "SystemSkillEffect";                 // 技能特效
    private static string keySystemDamageBoard = "SystemDamageBoard";                 // 伤害板
    private static string keyAutoDownloadVoiceChat_Friend = "AutoDownloadVoiceChat_Friend";
    private static string keyAutoDownloadVoiceChat_Team = "AutoDownloadVoiceChat_Team";
    private static string keyAutoDownloadVoiceChat_Guild = "AutoDownloadVoiceChat_Guild";
    private static string keyAutoDownloadVoiceChat_Master = "AutoDownloadVoiceChat_Master";
    private static string keyChannelConfig_World = "keyChannelConfig_World";
    private static string keyChannelConfig_Tell = "keyChannelConfig_Tell";
    private static string keyChannelConfig_Normal = "keyChannelConfig_Normal";
    private static string keyChannelConfig_Team = "keyChannelConfig_Team";
    private static string keyChannelConfig_Guild = "keyChannelConfig_Guild";
    private static string keyChannelConfig_Master = "keyChannelConfig_Master";
    private static string keyChannelConfig_Friend = "keyChannelConfig_Friend";
    private static string keyChannelConfig_System = "keyChannelConfig_System";
    private static string keyChannelConfig_Various = "keyChannelConfig_Various";
    private static string keyChannelConfig_CloseFriendMenu = "keyChannelConfig_CloseFriendMenu";
    private static string keyAppFirstRun = "AppFirstRun";
    private static string keySystemHideOtherPlayer = "SystemHideOtherPlayer";
	private static string keyUserID = "userid";
    private static string keyCMBIUserID = "CYMG_KEY_userid";
    private static string keyShowFashion = "ShowFashion";
    private static string keyBelleActiveTip = "keyBelleActiveTip";
    private static string keyNewPlayerGuideClose = "keyNewPlayerGuideClose";
    private static string keyDeathPushSetting = "keyDeathPushSetting";
    private static string keyKillNpcExpSetting = "keyKillNpcExpSetting";
    private static string keyRefuseAllAddFriend = "keyRefuseAllAddFriend";
    private static string keyXPNewPlayerGuide = "keyXPNewPlayerGuide";    //Xp新手指引标记
    private static string keySystemIsPushRestaurant = "SystemIsPushRestaurant";                 // 遮挡可见
    private static string keyBelleMatrixTipLevel = "BelleMatrixTipLevel";       // 美人阵法激活提示
    private static string keyLastTime = "keyLastTime"; //上次登录时间
    private static string keyHongBaoType = "HongBaoType";       // 红包 玩家上次选择类型
    private static string keyHongBaoChannel = "HongBaoChannel";       // 红包 玩家上次选择频道

    private static string keyClientLoginCount = "keyClientLoginCount";//客户端登陆次数     add by zhangdongai 2014-12-15
    private static string keyReviewRefuseType = "keyReviewRefuseType";//客户端拒绝评论的理由  add by zhangdongai 2014-12-15
    private static string keyClientClickReview = "keyClientClickReview";//客户端是否查看过评价界面  add by zhangdongai 

	private static string keyPickupItemTypeWhite = "PickupItemTypeWhite";
	private static string keyPickupItemTypeGreen = "PickupItemTypeGreen";
	private static string keyPickupItemTypeBlue = "PickupItemTypeBlue";
	private static string keyPickupItemTypePurple = "PickupItemTypePurple";
	private static string keyPickupItemTypeGrey = "PickupItemTypeGrey";

	private static string keyDuelSetting = "keyDuelSetting";
	private static string keyIsFirstOpenVioceGame = "keyIsFirstOpenVioceGame" ;
	private static string keyIsFirstOpenMusicGame = "keyIsFirstOpenMusicGame" ;
	/*private static string keySkill0Setting = "keyDuelSetting";
	private static string keySkill0Setting = "keyDuelSetting";
	private static string keyDuelSetting = "keyDuelSetting";
	private static string keyDuelSetting = "keyDuelSetting";
	private static string keyDuelSetting = "keyDuelSetting";
	private static string keyDuelSetting = "keyDuelSetting";
	private static string keyDuelSetting = "keyDuelSetting";
	private static string keyDuelSetting = "keyDuelSetting";
	private static string keyDuelSetting = "keyDuelSetting";  */
    private static string keyBelleMatrixFlag = "keyBelleMatrixFlag";

    private static string keyPVESkillIdUsing = "keyPVESkillIdUsing";
    private static string keyPVPSkillIdUsing = "keyPVPSkillIdUsing";

    public static string LastAccount
    {
        set
        {
            if (PlayerPrefs.GetString(keyAccount, null) != value)
            {
                PlayerPrefs.SetInt(keyClientLoginCount, 0);
                PlayerPrefs.SetInt(keyReviewRefuseType, 0);
            }
            PlayerPrefs.SetString(keyAccount, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetString(keyAccount, null);
        }
    }

    public static string LastPsw
    {
        set
        {
             PlayerPrefs.SetString(keyPsw, value);
             PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetString(keyPsw, null);
        }
    }

    public static int LastServer //当前玩家服务器worldID
    {
        set
        {
            PlayerPrefs.SetInt(keyLastServerID, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyLastServerID, -1);
        }
    }

    public static ulong LastRoleGUID
    {
        set
        {
            PlayerPrefs.SetString(keyLastRoleID, value.ToString());
            PlayerPrefs.Save();
        }
        get
        {
            string retStr = PlayerPrefs.GetString(keyLastRoleID, null);
            if (null == retStr) return 0;
            ulong retValue;
            if (ulong.TryParse(retStr, out retValue))
            {
                return retValue;
            }
            return 0;
        }
    }

    public static int LeftTabChoose
    {
        set
        {
            PlayerPrefs.SetInt(keyLeftTabChoose, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyLeftTabChoose, 0);
        }
    }
	
	public static int LeftTabControl
	{
		set
		{
			PlayerPrefs.SetInt(keyLeftTabControl, value);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyLeftTabControl, 0);
		}
	}

	public static int RadarControl
	{
		set
		{
			PlayerPrefs.SetInt(keyRadarControl, value);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyRadarControl, 0);
		}
	}

    public static int DailyMissionGuideFlag
    {
        set
        {
            PlayerPrefs.SetInt(keyDailyMissionGuideFlag, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyDailyMissionGuideFlag, 0);
        }
    }
    public static int SystemNameBoard
    {
        set
        {
            PlayerPrefs.SetInt(keySystemNameBoard, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keySystemNameBoard, 1);
        }
    }
    public static int SystemMusic
    {
        set
        {
            PlayerPrefs.SetInt(keySystemMusic, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keySystemMusic, 1);
        }
    }

	public static int SystemMusicVoice
	{
		set
		{
			PlayerPrefs.SetInt(keySystemMusicVoice, value);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keySystemMusicVoice, 99);
		}
	}
    public static int SystemSoundEffect
    {
        set
        {
            PlayerPrefs.SetInt(keySystemSoundEffect, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keySystemSoundEffect, 1);
        }
    }
	public static int SystemSoundEffectVoice
	{
		set
		{
			PlayerPrefs.SetInt(keySystemSoundEffectVoice, value);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keySystemSoundEffectVoice, 99);
		}
	}
    public static int SystemTableau
    {
        set
        {
            PlayerPrefs.SetInt(keySystemTableau, value);
            PlayerPrefs.Save();
        }
        get
        {
            //做ios和android处理
//             #if !UNITY_EDITOR && UNITY_IPHONE   
//                 return PlayerPrefs.GetInt(keySystemTableau, 1);
//             #else
                return PlayerPrefs.GetInt(keySystemTableau, 0); //做特殊处理
//            #endif
        }
    }
    public static int SystemFloodlight
    {
        set
        {
            PlayerPrefs.SetInt(keySystemFloodlight, value);
            PlayerPrefs.Save();
        }
        get
        {
            // 10为开,11为关
            int nFloodlight = PlayerPrefs.GetInt(keySystemFloodlight, 1);
//             if (nFloodlight == 0)
//             {
// #if !UNITY_EDITOR && UNITY_IPHONE 
//                if (
//                 iPhoneGeneration.iPhone3GS == iPhone.generation
//                 || iPhoneGeneration.iPhone3G == iPhone.generation
//                 || iPhoneGeneration.iPhone4 == iPhone.generation
//                 || iPhoneGeneration.iPhone4S == iPhone.generation
//                 )
//                 {
//                     nFloodlight = 11;
//                 }
//                 else
//                 {
//                     nFloodlight = 10;
//                 }
// #else
//                 nFloodlight = 10;
// #endif
//             }

            return nFloodlight;
        }
    }
    public static int SystemScreenMove
    {
        set
        {
            PlayerPrefs.SetInt(keySystemScreenMove, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keySystemScreenMove, 1);
        }
    }

    public static int SystemShowOtherPlayerCount
    {
        set
        {
            PlayerPrefs.SetInt(keySystemHideOtherPlayer, value);
            PlayerPrefs.Save();
        }
        get
        {
            if (MobileHardwareInfo.Instance.HardwareLevel == Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_LOW)
            {
                return PlayerPrefs.GetInt(keySystemHideOtherPlayer, 4);
            }
            else
            {
                return PlayerPrefs.GetInt(keySystemHideOtherPlayer, 15);
            }
        }
    }

    public static bool SystemWallVisionEnable
    {
        set
        {
            PlayerPrefs.SetInt(keySystemWallVision, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keySystemWallVision, 1) > 0;
        }
    }

    public static bool SystemSkillEffectEnable
    {
        set
        {
            PlayerPrefs.SetInt(keySystemSkillEffect, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keySystemSkillEffect, 1) > 0;
        }
    }

    public static bool SystemDamageBoardEnable
    {
        set
        {
            PlayerPrefs.SetInt(keySystemDamageBoard, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keySystemDamageBoard, 1) > 0;
        }
    }

    public static bool AutoDownloadVoiceChat_Friend
    {
        set
        {
            PlayerPrefs.SetInt(keyAutoDownloadVoiceChat_Friend, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyAutoDownloadVoiceChat_Friend, 1) > 0;
        }
    }

    public static bool AutoDownloadVoiceChat_Team
    {
        set
        {
            PlayerPrefs.SetInt(keyAutoDownloadVoiceChat_Team, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyAutoDownloadVoiceChat_Team, 1) > 0;
        }
    }

    public static bool AutoDownloadVoiceChat_Guild
    {
        set
        {
            PlayerPrefs.SetInt(keyAutoDownloadVoiceChat_Guild, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyAutoDownloadVoiceChat_Guild, 1) > 0;
        }
    }

    public static bool AutoDownloadVoiceChat_Master
    {
        set
        {
            PlayerPrefs.SetInt(keyAutoDownloadVoiceChat_Master, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyAutoDownloadVoiceChat_Master, 1) > 0;
        }
    }

    public static int ChannelConfig_World
    {
        set
        {
            PlayerPrefs.SetInt(keyChannelConfig_World, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyChannelConfig_World, 11000011);
        }
    }

    public static int ChannelConfig_Tell
    {
        set
        {
            PlayerPrefs.SetInt(keyChannelConfig_Tell, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyChannelConfig_Tell, 10);
        }
    }

    public static int ChannelConfig_Normal
    {
        set
        {
            PlayerPrefs.SetInt(keyChannelConfig_Normal, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyChannelConfig_Normal, 110);
        }
    }

    public static int ChannelConfig_Team
    {
        set
        {
            PlayerPrefs.SetInt(keyChannelConfig_Team, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyChannelConfig_Team, 1010);
        }
    }

    public static int ChannelConfig_Guild
    {
        set
        {
            PlayerPrefs.SetInt(keyChannelConfig_Guild, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyChannelConfig_Guild, 10010);
        }
    }

    public static int ChannelConfig_Master
    {
        set
        {
            PlayerPrefs.SetInt(keyChannelConfig_Master, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyChannelConfig_Master, 100010);
        }
    }

    public static int ChannelConfig_Friend
    {
        set
        {
            PlayerPrefs.SetInt(keyChannelConfig_Friend, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyChannelConfig_Friend, 1000000);
        }
    }

    public static int ChannelConfig_System
    {
        set
        {
            PlayerPrefs.SetInt(keyChannelConfig_System, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyChannelConfig_System, 10000010);
        }
    }

    public static int ChannelConfig_Various
    {
        set
        {
            LogModule.DebugLog("valeu ===== " + value);
            PlayerPrefs.SetInt(keyChannelConfig_Various,value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyChannelConfig_Various, 111111111);
        }
    }
    public static int ChannelConfig_CloseFriendMenu
    {
        set
        {
            PlayerPrefs.SetInt(keyChannelConfig_CloseFriendMenu, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyChannelConfig_CloseFriendMenu, 1);
        }
    }

    public static bool IsAppFirstRun
    {
        set
        {
            PlayerPrefs.SetInt(keyAppFirstRun, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyAppFirstRun, 1) > 0;
        }
    }

	public static string UserID
	{
		set
		{
			PlayerPrefs.SetString(keyUserID, value);
            PlayerPrefs.SetString(keyCMBIUserID, value);
			PlayerPrefs.Save();
		}
	}

    public static bool ShowFashion
    {
        set
        {
            PlayerPrefs.SetInt(keyShowFashion, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyShowFashion, 0) > 0;
        }
    }

    public static int BelleActiveTipCount
    {
        set
        {
            PlayerPrefs.SetInt(keyBelleActiveTip, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyBelleActiveTip, 0);
        }
    }

    public static bool NewPlayerGuideClose
    {
        set
        {
            PlayerPrefs.SetInt(keyNewPlayerGuideClose, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
			return false ;
            //return PlayerPrefs.GetInt(keyNewPlayerGuideClose, 0) > 0;
        }
    }

    public static bool DeathPushDisable
    {
        set
        {
            PlayerPrefs.SetInt(keyDeathPushSetting, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyDeathPushSetting, 1) > 0;
        }
    }

    public static bool RefuseAllAddFriend
    {
        set
        {
            PlayerPrefs.SetInt(keyRefuseAllAddFriend, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyRefuseAllAddFriend, 0) > 0;
        }
    }

    public static bool KillNpcExp
    {
        set
        {
            PlayerPrefs.SetInt(keyKillNpcExpSetting, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyKillNpcExpSetting, 1) > 0;
        }
    }
    //public static int RestaurantTipCount
    //{
    //    set
    //    {
    //        PlayerPrefs.SetInt(keyRestaurantTip, value);
    //        PlayerPrefs.Save();
    //    }
    //    get
    //    {
    //        return PlayerPrefs.GetInt(keyRestaurantTip, 0);
    //    }
    //}

    //public static void SetRestaurantFilterLv(int nFilterLevel, bool bFilter)
    //{
    //    string keystr = string.Format(keyRestaurantFilterLv, nFilterLevel);
    //    PlayerPrefs.SetInt(keystr, bFilter ? 1 : 0);
    //    PlayerPrefs.Save();
    //}

    //public static bool GetRestaurantFilterLv(int nFilterLevel)
    //{
    //    string keystr = string.Format(keyRestaurantFilterLv, nFilterLevel);
    //    return PlayerPrefs.GetInt(keystr, 1) > 0;
    //}

    //public static bool RestaurantFilterExp
    //{
    //    set
    //    {
    //        PlayerPrefs.SetInt(keyRestaurantFilterExp, value ? 1 : 0);
    //        PlayerPrefs.Save();
    //    }
    //    get
    //    {
    //        return PlayerPrefs.GetInt(keyRestaurantFilterExp, 1) > 0;
    //    }
    //}
    //public static bool RestaurantFilterCoin
    //{
    //    set
    //    {
    //        PlayerPrefs.SetInt(keyRestaurantFilterCoin, value ? 1 : 0);
    //        PlayerPrefs.Save();
    //    }
    //    get
    //    {
    //        return PlayerPrefs.GetInt(keyRestaurantFilterCoin, 1) > 0;
    //    }
    //}
    //public static bool RestaurantFilterMeterial
    //{
    //    set
    //    {
    //        PlayerPrefs.SetInt(keyRestaurantFilterMeterial, value ? 1 : 0);
    //        PlayerPrefs.Save();
    //    }
    //    get
    //    {
    //        return PlayerPrefs.GetInt(keyRestaurantFilterMeterial, 1) > 0;
    //    }
    //}

    public static bool XPNewPlayerGuideFlag
    {
        set
        {
            PlayerPrefs.SetInt(keyXPNewPlayerGuide, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyXPNewPlayerGuide, 0) > 0;
        }
    }
    public static bool SystemIsPushRestaurant
    {
        set
        {
            PlayerPrefs.SetInt(keySystemIsPushRestaurant, value ? 1 : 0);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keySystemIsPushRestaurant, 1) > 0;
        }
    }

    public static int BelleMatrixTipLevel
    {
        set
        {
            PlayerPrefs.SetInt(keyBelleMatrixTipLevel, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyBelleMatrixTipLevel, 1);
        }
    }

    public static string BelleMatrixFlag
    {
        set
        {
            PlayerPrefs.SetString(keyBelleMatrixFlag,value);
            PlayerPrefs.Save();
        }

        get
        {
            string matrixFalg = PlayerPrefs.GetString(keyBelleMatrixFlag,null);
            //Debug.Log("matrixFlag  =====                                                                 " + matrixFalg);
            if (null == matrixFalg)
            {
                matrixFalg = "";
                for (int i = 0; i < TableManager.GetBelleMatrix().Count; i++)
                {
                    Tab_BelleMatrix curBelleMatrix = TableManager.GetBelleMatrixByID(i, 0);
                    if (null == curBelleMatrix)
                    {
                        continue;
                    }

                    matrixFalg += "0";
                }
            }

            //Debug.Log("cur MatrixFlag =========                                             " + matrixFalg);
            return matrixFalg;
        }
    }
    public static string LastTime
    {
        set
        {
            PlayerPrefs.SetString(keyLastTime, value);
            PlayerPrefs.Save();
        }

        get
        {
            return PlayerPrefs.GetString(keyLastTime, null);
            
        }
    }

    public static int ClientLoginCount
    {
        set
        {
            PlayerPrefs.SetInt(keyClientLoginCount, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyClientLoginCount, 0);
        }
    }

    public static int ReviewRefuseType
    {
        set
        {
            PlayerPrefs.SetInt(keyReviewRefuseType, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyReviewRefuseType, 0);
        }
    }

    public static int ClientClickReview
    {
        set
        {
            PlayerPrefs.SetInt(keyClientClickReview, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyClientClickReview, 0);
        }
    }

    public static int HongBaoType
    {
        set
        {
            PlayerPrefs.SetInt(keyHongBaoType, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyHongBaoType, 1);
        }
    }
    public static int HongBaoChannel
    {
        set
        {
            PlayerPrefs.SetInt(keyHongBaoChannel, value);
            PlayerPrefs.Save();
        }
        get
        {
            return PlayerPrefs.GetInt(keyHongBaoChannel, 1);
        }
    }

	public static int PickUpItemWhite
	{
		set
		{
			PlayerPrefs.SetInt(keyPickupItemTypeWhite, value);
			PlayerPrefs.Save();
		}
		get
		{
			return (PlayerPrefs.GetInt(keyPickupItemTypeWhite, 1));
		}
	}
	public static int PickUpItemGreen
	{
		set
		{
			PlayerPrefs.SetInt(keyPickupItemTypeGreen, value);
			PlayerPrefs.Save();
		}
		get
		{
			return (PlayerPrefs.GetInt(keyPickupItemTypeGreen, 1));
		}
	}
	public static int PickUpItemBlue
	{
		set
		{
			PlayerPrefs.SetInt(keyPickupItemTypeBlue, value);
			PlayerPrefs.Save();
		}
		get
		{
			return (PlayerPrefs.GetInt(keyPickupItemTypeBlue, 1));
		}
	}
	public static int PickUpItemPurple
	{
		set
		{
			PlayerPrefs.SetInt(keyPickupItemTypePurple, value);
			PlayerPrefs.Save();
		}
		get
		{
			return (PlayerPrefs.GetInt(keyPickupItemTypePurple, 1));
		}
	}
	public static int PickUpItemGrey
	{
		set
		{
			PlayerPrefs.SetInt(keyPickupItemTypeGrey, value);
			PlayerPrefs.Save();
		}
		get
		{
			return (PlayerPrefs.GetInt(keyPickupItemTypeGrey, 1));
		}
	}
	public static bool DuelDisable
	{
		set
		{
			PlayerPrefs.SetInt(keyDuelSetting,value ?1 :0);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyDuelSetting,1) > 0;
		}
	}
	public static bool IsFirstOpenVioceGame
	{
		set
		{
			PlayerPrefs.SetInt(keyIsFirstOpenVioceGame, value ? 1 : 0);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyIsFirstOpenVioceGame,1) > 0;
		}
	}
	public static bool IsFirstOpenMusicGame
	{
		set
		{
            PlayerPrefs.SetInt(keyIsFirstOpenMusicGame, value ? 1 : 0);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyIsFirstOpenMusicGame,1) > 0;
		}
	}
    public static int PVESkillIdCurUsing
    {
        set
        {
            string playerguid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID.ToString();
            PlayerPrefs.SetInt(keyPVESkillIdUsing + playerguid ,value);
            PlayerPrefs.Save();
        }
        get
        {
            string playerguid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID.ToString();
            return PlayerPrefs.GetInt(keyPVESkillIdUsing + playerguid, -1);
        }
    }

    public static int PVPSkillIdCurUsing
    {
        set
        {
            string playerguid = "";
            if (Singleton<ObjManager>.GetInstance().MainPlayer)
            {
                playerguid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID.ToString();
            }
            PlayerPrefs.SetInt(keyPVPSkillIdUsing + playerguid, value);
            PlayerPrefs.Save();
        }
        get
        {
            string playerguid = "";
            if (Singleton<ObjManager>.GetInstance().MainPlayer)
            {
                playerguid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID.ToString();
            }
            return PlayerPrefs.GetInt(keyPVPSkillIdUsing + playerguid, -1);
        }
    }
	//=========
	/*public static bool SkillId0
	{
		set
		{
			PlayerPrefs.SetInt(keyDuelSetting,value ?1 :0);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyDuelSetting,1) > 0;
		}
	}
	public static bool DuelDisable
	{
		set
		{
			PlayerPrefs.SetInt(keyDuelSetting,value ?1 :0);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyDuelSetting,1) > 0;
		}
	}
	public static bool DuelDisable
	{
		set
		{
			PlayerPrefs.SetInt(keyDuelSetting,value ?1 :0);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyDuelSetting,1) > 0;
		}
	}
	public static bool DuelDisable
	{
		set
		{
			PlayerPrefs.SetInt(keyDuelSetting,value ?1 :0);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyDuelSetting,1) > 0;
		}
	}
	public static bool DuelDisable
	{
		set
		{
			PlayerPrefs.SetInt(keyDuelSetting,value ?1 :0);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyDuelSetting,1) > 0;
		}
	}
	public static bool DuelDisable
	{
		set
		{
			PlayerPrefs.SetInt(keyDuelSetting,value ?1 :0);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyDuelSetting,1) > 0;
		}
	}
	public static bool DuelDisable
	{
		set
		{
			PlayerPrefs.SetInt(keyDuelSetting,value ?1 :0);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyDuelSetting,1) > 0;
		}
	}
	public static bool DuelDisable
	{
		set
		{
			PlayerPrefs.SetInt(keyDuelSetting,value ?1 :0);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyDuelSetting,1) > 0;
		}
	}
	public static bool DuelDisable
	{
		set
		{
			PlayerPrefs.SetInt(keyDuelSetting,value ?1 :0);
			PlayerPrefs.Save();
		}
		get
		{
			return PlayerPrefs.GetInt(keyDuelSetting,1) > 0;
		}
	} */


}

