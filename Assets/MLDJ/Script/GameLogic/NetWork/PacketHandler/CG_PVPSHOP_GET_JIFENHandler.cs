//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_PVPSHOP_GET_JIFENHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_PVPSHOP_GET_JIFEN packet = (CG_PVPSHOP_GET_JIFEN )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
