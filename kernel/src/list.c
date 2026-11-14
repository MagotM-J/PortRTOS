/** @file list.c
 *  @brief Implementation of the RTOS list functions.
 */

 /* Includes */
 #include "list.h"
 #include <stdint.h>
 #include <stdlib.h>

 
void list_node_init(list_node_t *node) {
    if (node == NULL ) {
        return;
    }
}

void list_init(list_head_t *list) {
    if (list == NULL) {
        return;
    }
}

void list_insert(list_head_t *list, list_node_t *node) {
    if (list == NULL || node == NULL) {
        return;
    }
}

void list_remove(list_node_t *node, list_head_t *list) {
    if (node == NULL || list == NULL) {
        return;
    }
}


