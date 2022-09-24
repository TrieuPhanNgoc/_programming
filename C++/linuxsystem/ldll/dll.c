#include "dll.h"
#include <memory.h>
#include <stdlib.h>

dll_t* get_new_dll() {
    dll_t *dll = calloc(1, sizeof(dll_t));
    dll->head = NULL;
    return dll;
}

int add_data_to_dll(dll_t* dll, void *app_data) {
    if (!dll || !app_data) {
        return -1;
    }

    dll_node_t *dll_new_node = calloc(1, sizeof(dll_node_t));
    dll_new_node->left = NULL;
    dll_new_node->right = NULL;
    dll_new_node->data = app_data;

    if (!dll->head) {
        dll->head = dll_new_node;
        return 0;
    }

    dll_node_t* first_node = dll->head;
    dll_new_node->right = first_node;
    first_node->left = dll_new_node;
    dll->head = dll_new_node;
    return 0;
}

int /* Return 0 if successful, -1 if failed*/
remove_data_from_dll_by_data_ptr(dll_t* dll, void* data) {
    return 0;
}

int /*  Return 0 if empty, -1 if not empty */
is_dll_empty(dll_t* dll) {
    return 0;
}

void
drain_dll(dll_t* dll) {
    
}
