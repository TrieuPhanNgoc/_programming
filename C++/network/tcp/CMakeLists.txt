#find_package(Boost log)

add_executable(tcp_server tcp_server.cpp)
add_executable(tcp_client tcp_client.cpp)

target_compile_options(tcp_server PRIVATE -std=c++11 -Wall)
target_compile_options(tcp_client PRIVATE -std=c++11 -Wall)