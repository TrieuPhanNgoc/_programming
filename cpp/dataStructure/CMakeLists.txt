set(SRC linkedList/linkedlist.hpp)

add_executable(datastructure linkedList/tutorial.cpp ${SRC})

target_compile_options(datastructure PRIVATE -std=c++11 -Wall)