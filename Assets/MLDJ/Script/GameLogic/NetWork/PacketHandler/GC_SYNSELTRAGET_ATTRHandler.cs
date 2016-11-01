//This code create by CodeEngine

using System;
using Games.GlobeDefine;
using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.LogicObj;
using UnityEngine;
namespace SPacket.SocketInstance
 {
    public class GC_SYNSELTRAGET_ATTRHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SYNSELTRAGET_ATTR packet = (GC_SYNSELTRAGET_ATTR )ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic


            Obj_MainPlayer MainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (MainPlayer == null)
            {
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            }
            if (MainPlayer.SelectTarget == null)
            {
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            }
          
            //血量
            if (packet.HasCurHp)
            {
                MainPlayer.SelectTarget.BaseAttr.HP = packet.CurHp;
            }
            if (packet.HasMaxHP)
            {
                MainPlayer.SelectTarget.BaseAttr.MaxHP = packet.MaxHP;
            }
            //只显示玩家的蓝
            if (MainPlayer.SelectTarget.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER ||
                MainPlayer.SelectTarget.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER ||
                MainPlayer.SelectTarget.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER)
            {
                //法力
                if (packet.HasCurMp)
                {
                    MainPlayer.SelectTarget.BaseAttr.MP = packet.CurMp;
                }
                if (packet.HasMaxMP)
                {
                    MainPlayer.SelectTarget.BaseAttr.MaxMP = packet.MaxMP;
                }
            }
           
            //等级
            if (packet.HasCurLev)
            {
                MainPlayer.SelectTarget.BaseAttr.Level = packet.CurLev;
            }
            //名字
            if (packet.HasName)
            {
                MainPlayer.SelectTarget.BaseAttr.RoleName = packet.Name;
            }

            // 当前归属
            if (MainPlayer.SelectTarget.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC)
            {
                Obj_NPC targetNPC = MainPlayer.SelectTarget as Obj_NPC;
                if (packet.HasBelongTeamID)
                {
                    targetNPC.BelongTeamID = packet.BelongTeamID;
                }
                if (packet.HasBelongObjID)
                {
                    targetNPC.BelongObjID = packet.BelongObjID;
                }                
            }

            //更新头像信息
            if (TargetFrameLogic.Instance()!=null)
            {
                TargetFrameLogic.Instance().ChangeTarget(MainPlayer.SelectTarget);
                TargetFrameLogic.Instance().ShowTargetDebuffLogo(packet.DeBuffIDList);
            }
          
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
 }
