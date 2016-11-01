//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_RET_STORYCOPYSCENE_CHAPTERLEVELAWARDHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_STORYCOPYSCENE_CHAPTERLEVELAWARD packet = (GC_RET_STORYCOPYSCENE_CHAPTERLEVELAWARD)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.HandlePacket(packet);
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
