#include "../inc/db_table.h"
#include "../../dll_lib/inc/dll.h"

/**
 * @brief Method for displaying the network database
 * 
 * @param routing_table The table of network database for travelling
 */
void display_table(const dll_t *routing_table)
{
    if (routing_table == NULL)
    {
        return;
    }

    printf("Table of network database:\n");
    node_t *temp = routing_table->head;
    while (temp != NULL)
    {
        db_network_table_t entry = *((db_network_table_t *)temp->_data);
        printf("\tDestination IP: %s - Mask: %u - Gateway IP: %s - OIF: %s\n", entry.destination, entry.mask, entry.gateway_ip, entry.oif);
        temp = temp->next;
    }
}

/**
 * @brief Finding the node bases on destination_ip and mask
 * 
 * @param routing_table The network table for travelling
 * @param dest The destination IP for searching
 * @param mask The mask for searching
 * @return node_t* Node which has destination_ip and mask as the input destination_ip and mask
 */
node_t *find_table_entry(const dll_t *routing_table, const char *dest, const unsigned short mask)
{
    if (routing_table == NULL) 
    {
        return NULL;
    }

    // Initializin local variables for return and travel all nodes
    node_t *result = NULL;
    node_t *temp = routing_table->head;

    while (temp != NULL) {
        db_network_table_t entry = *((db_network_table_t *)temp->_data);
        if (strcmp(entry.destination, dest) && (entry.mask == mask)) 
        {
            result = temp;
            break;
        }
        temp = temp->next;
    }

    return result;
}

/**
 * @brief Updating gateway_ip and oif of node
 * 
 * @param node node for updating
 * @param gw value of gateway_ip
 * @param oif value of oif
 */
void update(node_t *node, const char *gw, const char *oif)
{
    db_network_table_t* entry = (db_network_table_t*)node->_data;
    memset(entry->gateway_ip, 0, IP_ADDR_LEN);
    memset(entry->oif, 0, OIF_LEN);
    memcpy(entry->gateway_ip, gw, strlen(gw));
    memcpy(entry->oif, oif, strlen(oif));
}