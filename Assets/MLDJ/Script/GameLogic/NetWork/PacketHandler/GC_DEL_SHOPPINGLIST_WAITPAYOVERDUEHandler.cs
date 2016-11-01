//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_DEL_SHOPPINGLIST_WAITPAYOVERDUEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_DEL_SHOPPINGLIST_WAITPAYOVERDUE packet = (GC_DEL_SHOPPINGLIST_WAITPAYOVERDUE)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            GameManager.gameManager.PlayerDataPool.WaitPayRecord.DelShoppingList(packet.Guid);

            if (PresentRootLogic.Instance() != null)
            {
                PresentRootLogic.Instance().UpdateTabShow();
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
