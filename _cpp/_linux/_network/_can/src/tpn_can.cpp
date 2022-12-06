#include "tpn_can.h"

namespace tpn {

    can_protocol::can_protocol(boost::asio::io_context &ioCtx, const bool& isServer) 
    : m_ioCtx(ioCtx)
    , m_timer(m_ioCtx, boost::asio::chrono::milliseconds(300))
    , m_isServer(isServer)
    {

    }

    void can_protocol::initialize()
    {
        
    }

    void can_protocol::executed()
    {

    }

    void can_protocol::do_repeat()
    {

    }

    boost::signals2::connection can_protocol::connectSignal(const connect_to_server_slot& slot)
    {
        return m_server_connected.connect(slot);
    }
};