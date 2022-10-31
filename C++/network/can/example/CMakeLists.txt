find_package(Boost 1.69 REQUIRED COMPONENTS log program_options)
add_executable(boost main.cpp)
target_compile_options(boost PRIVATE -std=c++11 -Wall)
target_link_libraries(boost Boost::log Boost::program_options ${CMAKE_THREAD_LIBS_INIT})