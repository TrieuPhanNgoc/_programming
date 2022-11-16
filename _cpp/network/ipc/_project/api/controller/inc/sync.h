#ifndef _SYNC_H_
#define _SYNC_H_

#include "../../database/inc/db_table.h"

#define SOCKET_NAME "NetworkAdminSocket"
#define WAIT    0
#define RT      1
#define ML      2

typedef struct dll dll_t;

typedef enum {
    CREATE,
    REMOVE,
    UPDATE,
    NONE
} OPCODE;

typedef struct sync_msg {
    OPCODE opcode;
    db_network_table_t msg_body;
} sync_msg_t;

void process_sync_message(dll_t* dll, sync_msg_t *sync_msg);

// extern int get_IP(const char* mac, char* ip);

#endif