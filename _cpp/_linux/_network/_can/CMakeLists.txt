find_package(Boost 1.69 REQUIRED COMPONENTS log program_options)

set(CAN_HDR inc/tpn_common.h
            inc/tpn_can.h)
set(CAN_SRC src/tpn_can.cpp)

add_library(can ${CAN_HDR} ${CAN_SRC})

target_link_libraries(boost Boost::log Boost::program_options ${CMAKE_THREAD_LIBS_INIT})

add_subdirectory(example)