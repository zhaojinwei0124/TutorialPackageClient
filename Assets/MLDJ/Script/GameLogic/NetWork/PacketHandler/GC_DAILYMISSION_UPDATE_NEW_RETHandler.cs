//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_DAILYMISSION_UPDATE_NEW_RETHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_DAILYMISSION_UPDATE_NEW_RET packet = (GC_DAILYMISSION_UPDATE_NEW_RET )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
