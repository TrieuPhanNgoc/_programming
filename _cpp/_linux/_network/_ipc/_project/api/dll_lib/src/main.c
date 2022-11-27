#include "../inc/dll.h"

node_t *find(dll_t *dll, int data) {
    node_t *node = dll->head->next;
    while (node != dll->head) {
        if (*((int *) node->_data) == data) {
            return node;
        }
        node = node->next;
    }
    return node;
}

// We defines a function for printing value as integer
void print(dll_t *dll) {
    node_t *node = dll->head;
    printf("Forward linked list: ");
    while (node != NULL) {
        printf("%i -> ", *((int *) node->_data));
        node = node->next;
    }
    printf("\n");
}

void reverse_print(dll_t *dll) {
    node_t *node = dll->tail;
    printf("Reverse linked list: ");
    while (node != NULL) {
        printf("%i -> ", *((int *) node->_data));
        node = node->prev;
    }
    printf("\n");
}

int main() {

    dll_t* dll_man;
    dll_man = initialize();
    int i;
    for (i = 0; i < 5; i++) {
        int *n = malloc(sizeof(int));
        *n = i;
        append(dll_man, n);
    }
    
    print(dll_man);
    reverse_print(dll_man);
    return 0;
}