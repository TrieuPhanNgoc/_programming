#ifndef __TPN_IPC_H__
#define __TPN_IPC_H__

#include "tpn_common.h"

namespace tpn
{
    class ipc_socket
    {
        public:
            ipc_socket(boost::asio::io_context ioCtx) : m_IOCtx(ioCtx),
                                                        m_timer(ioCtx)
            {

            }

            ~ipc_socket()
            {

            }

            typedef void saying_hello();

            typedef boost::function<saying_hello> say_hello_func;

            void connectFunction(say_hello_func&& function)
            {
                m_timer.expires_from_now(boost::asio::chrono::milliseconds(300));
                m_timer.async_wait(boost::bind(function));
            }

            void start()
            {
                m_IOCtx.run();
            }

            void initializing(const std::string& configFile)
            {
                // Reading from config file

                // Parse to the variables

                // Setup time
                
            }


        private:
            boost::asio::io_context m_IOCtx;
            boost::asio::steady_timer m_timer;
    };
};

#endif