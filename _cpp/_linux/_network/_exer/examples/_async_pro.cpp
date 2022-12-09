#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/system_timer.hpp>
#include <iostream>
using namespace boost::asio;

void function_handler(const boost::system::error_code& err)
{
    std::cout << "Function called of function_handler!" << std::endl;
}


void function_another_handler(const boost::system::error_code& err)
{
    if (err)
    {
        return;
    }
    std::cout << "Calling from function_another_handler!" << std::endl;
}

int main()
{
    boost::asio::io_context ioCtx;
    
    boost::asio::deadline_timer m_timer(ioCtx, boost::posix_time::seconds(2));

    boost::asio::ip::tcp::endpoint ep(boost::asio::ip::address::from_string("127.0.0.1"), 8001);

    m_timer.async_wait(boost::bind(function_handler, _1));
    m_timer.async_wait(boost::bind(function_another_handler, _1));

    ioCtx.run();
    return 0;
}