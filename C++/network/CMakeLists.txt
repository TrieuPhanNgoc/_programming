#find_package(Boost log)

add_executable(server server.cpp)
add_executable(client client.cpp)

target_compile_options(server PRIVATE -std=c++11 -Wall)
target_compile_options(client PRIVATE -std=c++11 -Wall)