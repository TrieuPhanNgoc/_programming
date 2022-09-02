#include <iostream>

struct hacker{
    std::string name;
    uint32_t old;
    std::string professional;
};

struct hacker* initialize(hacker* mhacker, std::string name, uint32_t old, std::string professional) {
    if (mhacker == nullptr) {
        mhacker = new hacker();
    }
    
    mhacker->name = name;
    mhacker->old = old;
    mhacker->professional = professional;

    return mhacker;
}

void printHackerInfo(const hacker* mhacker) {
    
    std::cout << "Hacker:\n";
    std::cout << "Name: " << mhacker->name << std::endl;
    std::cout << "Old: " << mhacker->old << std::endl;
    std::cout << "Professional: " << mhacker->professional << std::endl;
}

int main() {
    hacker* firstOne = nullptr;

    firstOne = initialize(firstOne, "John", 23, "Professional");
    printHackerInfo(firstOne);

    if (firstOne) {
        delete firstOne;
        firstOne = nullptr;
    }
}