//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
using Games.GlobeDefine;
using Games.LogicObj;
using UnityEngine;
using GCGame.Table;

namespace SPacket.SocketInstance
{
    public class GC_CREATE_NPCHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_CREATE_NPC packet = (GC_CREATE_NPC )ipacket;
            if (null == packet) 
                return (uint)PACKET_EXE.PACKET_EXE_ERROR;

            //�ж�ServerID�Ƿ�Ϸ�
            if (packet.ServerId < 0)
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;               
            }
            //��ȫ��ʩ���������ServerID�Ѿ����ڣ������Ƴ���
            if (Singleton<ObjManager>.GetInstance().IsObjExist(packet.ServerId))
            {
                Singleton<ObjManager>.GetInstance().RemoveObj(packet.ServerId);
            }

			// boss Effect
			if (GameManager.gameManager.ActiveScene.IsStoryCopyScene())
			{
				Tab_RoleBaseAttr tabRoleBaseAttr = TableManager.GetRoleBaseAttrByID(packet.DataId,0);
				if (tabRoleBaseAttr!=null)
				{
					if ( tabRoleBaseAttr.NpcType == (int)GameDefine_Globe.NPC_TYPE.BOSS )
					{
						if (BackCamerControll.Instance() != null)
						{
							BackCamerControll.Instance().PlaySceneEffect(611);
						}
					}
				}
			}

            Obj_Init_Data initData = new Obj_Init_Data();
           // initData.CleanUp();
            initData.m_ServerID = packet.ServerId;
            initData.m_fX = ((float)packet.PosX) / 100;
            initData.m_fZ = ((float)packet.PosZ) / 100;
            initData.m_RoleBaseID = packet.DataId;
            initData.m_Force = packet.Curforce;
            initData.m_StrName = packet.Name;
            initData.m_IsDie = packet.IsDie == 1 ? true : false;
            initData.m_MoveSpeed = ((float)packet.Movespeed) / 100;
            initData.m_fDir = (float)packet.Facedir / 100;
            initData.m_StealthLev = packet.StealthLeve;
            initData.m_bNpcBornCreate = (packet.IsBorn == 1 ? true : false);
            if (packet.HasModelVisualID)
            {
                initData.m_ModelVisualID = packet.ModelVisualID;
            }
            if (packet.HasWeaponDataID)
            {
                initData.m_WeaponDataID = packet.WeaponDataID;
            }
            if (packet.HasProfession)
            {
                initData.m_nProfession = packet.Profession;
            }
            if (packet.HasBindparent)
            {
                initData.m_BindParent = packet.Bindparent;
            }
            initData.m_BindChildren.Clear();
            for (int nindex = 0; nindex < GlobeVar.BIND_CHILDREN_MAX; ++nindex)
            {
                if (nindex < packet.bindchildrenCount)
                {
                    initData.m_BindChildren.Add(packet.GetBindchildren(nindex));
                }
                else
                {
                    initData.m_BindChildren.Add(-1);
                }
            }
            initData.m_SceneNpcId = packet.SceneNpcId;
            Singleton<ObjManager>.GetInstance().NewCharacterObj(Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC, initData);

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
         }
     }
 }