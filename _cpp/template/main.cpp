#include "mycode.hpp"
#include <iostream>

int main() {
    std::cout << "max value: " << tpn_lib::maxValue<int>(3,5) << std::endl;
    std::cout << "min value: " << tpn_lib::minValue<int>(3,5) << std::endl;
    std::cout << "distance between 3.5 and 5.21 is: " << tpn_lib::distance<double>(3.5,5.21) << std::endl;
    return 0;
}