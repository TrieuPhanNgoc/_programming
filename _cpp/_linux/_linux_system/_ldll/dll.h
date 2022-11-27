
typedef struct dll_node_ {
    void * data;
    struct dll_node_ *left;
    struct dll_node_ *right;
} dll_node_t;

typedef struct ddl_ {
    dll_node_t *head;
} dll_t;


dll_t* get_new_dll();

int add_data_to_dll(dll_t* dll, void* app_data);

int /* Return 0 if successful, -1 if failed*/
remove_data_from_dll_by_data_ptr(dll_t* dll, void* data);

int /*  Return 0 if empty, -1 if not empty */
is_dll_empty(dll_t* dll);

void
drain_dll(dll_t* dll);