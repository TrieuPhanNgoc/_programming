#ifndef _DB_TABLE_H_
#define _DB_TABLE_H_

#include "../../common/common.h"

#define IP_ADDR_LEN 16
#define OIF_LEN 32

typedef struct dll dll_t;
typedef struct node node_t;

typedef struct db_network_table {
    char destination[IP_ADDR_LEN];
    unsigned short mask;
    char gateway_ip[IP_ADDR_LEN];
    char oif[OIF_LEN];
} db_network_table_t;

void display_table(const dll_t *routing_table);
node_t *find_table_entry(const dll_t *routing_table, const char *dest, const unsigned short mask);
void update(node_t *node, const char *gw, const char *oif);

#endif