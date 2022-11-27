<<<<<<< HEAD
#ifndef _TPN_CAN_H_
#define _TPN_CAN_H_

#include "tpn_common.h"

namespace tpn
{

    class chating
    {
    public:
        typedef void connectToServer();

        typedef boost::signals2::signal<connectToServer> connectToServerSignal;

    public:
        /**
         * @brief Construct a new chating object
         *
         * @param ioCtx
         */
        chating(boost::asio::io_context &ioCtx);

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

    private:
        /**
         * @brief
         */
        boost::asio::io_context &m_ioCtx;

        /**
         * @brief
         *
         */
        bool m_isServer;
    };

};

#endif // _TPN_CAN_H_
=======
#ifndef _TPN_CAN_H_
#define _TPN_CAN_H_

#include "tpn_common.h"

namespace tpn
{

    class chating
    {
    public:
        typedef void connectToServer();

        typedef boost::signals2::signal<connectToServer> connectToServerSignal;
        
        typedef connectToServerSignal::slot_type connectToServerSlot;
    public:
        /**
         * @brief Construct a new chating object
         *
         * @param ioCtx
         */
        chating(boost::asio::io_context &ioCtx);

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

        void connectSignal(const connectToServerSlot& slot);

    private:
        /**
         * @brief
         */
        boost::asio::io_context &m_ioCtx;

        /**
         * @brief
         *
         */
        bool m_isServer;
    };

};

#endif // _TPN_CAN_H_
>>>>>>> 8666e273e2e5f06c2c90943a0b677c2153baa9a8