//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_FELLOW_BREEDING_LOCKHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_FELLOW_BREEDING_LOCK packet = (CG_FELLOW_BREEDING_LOCK )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
