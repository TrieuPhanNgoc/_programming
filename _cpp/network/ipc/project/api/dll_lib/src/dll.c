#include "../inc/dll.h"

dll_t* initialize() {
    node_t *node = calloc(1, sizeof(dll_t));
    node->next = node;
    node->prev = node;

    dll_t *dll = calloc(1, sizeof(dll_t));
    dll->head = node; // empty list consists of only
    dll->tail = node;
    return dll;
}

void append(dll_t* dll, void* data) {
    node_t *head = dll->head; 
    node_t *node = calloc(1, sizeof(node_t));
    node->_data = data;
    node->next = dll->head;
    node->prev = dll->tail;
    dll->head->prev = node;
    dll->tail->next = node;
    dll->tail = node;
    if (dll->head != head) {
        printf("Something's wrong...\n");
    }
}

void rm(dll_t* dll, node_t* node) {
    node->prev->next = node->next;
    node->next->prev = node->prev;
    if (node == dll->tail) { // need to update tail node if we're deleting it
        dll->tail = node->prev;
    }
    free(node);
}

void reinit_dll(dll_t* dll) {
    node_t *node = dll->head->next;
    while (node != dll->head) {
        node_t *next = node->next;
        rm(dll, node);
        node = next;
    }
    free(dll);
}