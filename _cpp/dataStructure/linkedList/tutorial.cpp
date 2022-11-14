#include "linkedlist.hpp"

int main() {
    linkedlist* head = new linkedlist();

    head->pushNode(1);
    head->pushNode(4);
    head->pushNode(32);
    head->pushNode(14);
    head->pushNode(41);
    
    std::cout << head << std::endl;
    // head->printList();
    return 0;
}