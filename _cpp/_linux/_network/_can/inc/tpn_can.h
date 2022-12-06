#ifndef _TPN_CAN_H_
#define _TPN_CAN_H_

#include "tpn_common.h"

namespace tpn
{
    class can_protocol
    {
    public:
        typedef void connect_to_server();

        typedef boost::signals2::signal<connect_to_server> connect_to_server_signal;
        
        typedef connect_to_server_signal::slot_type connect_to_server_slot;

        typedef void close_from_server();

        typedef boost::signals2::signal<close_from_server> close_from_server_signal;

        typedef close_from_server_signal::slot_type close_from_server_slot;
    public:
        /**
         * @brief Construct a new chating object
         *
         * @param ioCtx
         */
        can_protocol(boost::asio::io_context &ioCtx, const bool& isServer);

        /**
         * @brief
         *
         */
        void initialize();

        /**
         * @brief
         *
         */
        void executed();

        /**
         * @brief 
         * 
         */
        void do_repeat();

        /**
         * @brief 
         * 
         * @param slot 
         * @return boost::signals2::connection 
         */
        boost::signals2::connection connectSignal(const connect_to_server_slot& slot);

        /**
         * @brief 
         * 
         * @param slot 
         * @return boost::signals2::connection 
         */
        boost::signals2::connection connectSignal(const close_from_server_slot& slot);

    private:
        /**
         * @brief
         */
        boost::asio::io_context &m_ioCtx;

        /**
         * @brief 
         * 
         */
        boost::asio::steady_timer m_timer;

        /**
         * @brief
         *
         */
        bool m_isServer;

        /**
         * @brief 
         * 
         */
        connect_to_server_signal m_server_connected;
    };

};

#endif // _TPN_CAN_H_
