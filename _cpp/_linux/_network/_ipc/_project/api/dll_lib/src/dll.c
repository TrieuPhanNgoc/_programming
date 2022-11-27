#include "../inc/dll.h"

dll_t* initialize() {
    dll_t *dll = calloc(1, sizeof(dll_t));
    dll->head = NULL; // empty list consists of only
    dll->tail = NULL;
    return dll;
}

void append(dll_t* dll, void* data) {
    if (dll == NULL) {
        dll = initialize();
    }
    node_t *node = calloc(1, sizeof(dll_t));
    node->next = NULL;
    node->prev = NULL;
    node->_data = data;

    if (dll->head == NULL) {
        dll->head = node;
        dll->tail = node;
        return;
    }
    else {
        dll->tail->next = node;
        node->prev = dll->tail;
        dll->tail = node;
    }
}

/**
 *             a   ->   b   ->  c -> null
 *     null <- a   <-   b   <-  c 
 * ---------------------------------------------
 *             a   ->   c   ->  null
 *     null <- a   <-   c
 *      
 */
void delete(dll_t* dll, node_t* node) {
    if (node == dll->tail) { // need to update tail node if we're deleting it
        // Change tail equals to prev node;
        dll->tail = node->prev;
        // next_pointer points to null;
        node->prev->next = NULL;
    }
    else {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }
    free(node);
    node = NULL;
}

void reinit_dll(dll_t* dll) {
    node_t *node = dll->tail;
    while (node != dll->head) {
        node_t *prev = node->prev;
        delete(dll, node);
        node = prev;
    }
    free(dll);
    dll = NULL;
}