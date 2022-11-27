#define ASIO_STANDALONE // define trước khi include asio header hoặc thêm switch -D cho g++
#include <boost/asio.hpp>
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

void print(const std::string& s) {
    while (true) {
        std::cout << s << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }   
}
 
void run(boost::asio::io_context* service) {
    service->run();
}
 
int main() {
    boost::asio::io_context service;
 
    // post your work to an io_service object
    service.post(std::bind(&print, "I'm thread A"));
    service.post(std::bind(&print, "I'm thread B"));
 
    std::thread t1(std::bind(&run, &service));
    std::thread t2(std::bind(&run, &service));
 
    t1.join();
    t2.join();
    return 0;
}