#include "../inc/sync.h"
#include "../../dll_lib/inc/dll.h"

void process_sync_message(dll_t *dll, sync_msg_t *sync_msg)
{
    node_t *node = find_table_entry(dll, sync_msg->msg_body.destination, sync_msg->msg_body.mask);
    switch (sync_msg->opcode)
    {
        // Create an network on network data base
        case CREATE:
        {
            if (node == NULL)
            { // Assurance that the msg does not exist in table before
                append(dll, &sync_msg->msg_body);

                node = find_table_entry(dll, sync_msg->msg_body.destination, sync_msg->msg_body.mask);
                if (node != NULL)
                {
                    db_network_table_t entry = *((db_network_table_t *)node->_data);
                    printf("Added Destination IP: %s mask: %u Gateway IP: %s OIF: %s\n", entry.destination, entry.mask, entry.gateway_ip, entry.oif);
                }
            }
            break;
        }

        // Updating gateway_ip and mask of an internet on network table
        case UPDATE: 
        {
            if (node != NULL)
            {
                update(node, sync_msg->msg_body.gateway_ip, sync_msg->msg_body.oif);
                node = find_table_entry(dll, sync_msg->msg_body.destination, sync_msg->msg_body.mask);
                if (node != NULL)
                {
                    db_network_table_t entry = *((db_network_table_t *)node->_data);
                    printf("Updated Destination IP: %s mask: %u Gateway IP: %s OIF: %s\n", entry.destination, entry.mask, entry.gateway_ip, entry.oif);
                }
            }
            break;
        }

        // Removing a node from the network table
        case REMOVE:
        {
            if (node != NULL)
            {
                delete(dll, node);
                node = find_table_entry(dll, sync_msg->msg_body.destination, sync_msg->msg_body.mask);
                if (node == NULL)
                {
                    printf("Deleted Destination IP: %s mask: %u\n", sync_msg->msg_body.destination, sync_msg->msg_body.mask);
                }
            }
        }

        default: {
            break;
        }
    }
}