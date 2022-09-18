#set(SRC linkedList/linkedlist.hpp)

add_executable(multiThreading main.cpp)

target_compile_options(multiThreading PRIVATE -std=c++11 -Wall)