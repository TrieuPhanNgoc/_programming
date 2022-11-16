#ifndef _DLL_H_
#define _DLL_H_

#include "../../common/common.h"

typedef struct node {
    void* _data;
    struct node* next;
    struct node* prev;
} node_t;

typedef struct dll {
    node_t *head;
    node_t *tail;
} dll_t;

/*
    api for supporting
*/

/**
 * @brief Method for intializing the dll
 * 
 * @return dll_t* 
 */
dll_t* initialize();

/**
 * @brief Method for appending new data;
 * 
 * @param dll 
 * @param data 
 */
void append(dll_t* dll, void* data);

/**
 * @brief Method for removing the node on dll
 * 
 * @param dll 
 * @param node 
 */
void delete(dll_t* dll, node_t* node);

/**
 * @brief Method for reinitializing the dll
 * 
 * @param dll 
 */
void reinit_dll(dll_t* dll);

#endif // _DLL_H_