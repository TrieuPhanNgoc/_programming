#set(SRC linkedList/linkedlist.hpp)

add_executable(multiThreading joinable.cpp)

target_compile_options(multiThreading PRIVATE -std=c++11 -Wall)