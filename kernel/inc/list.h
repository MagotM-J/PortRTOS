/** @file list.h
 *  @brief The RTOS list header file.
 */

#ifndef LIST_H
#define LIST_H

/* Includes */
#include <stdint.h>
#include <stddef.h>

/* Defines */
 struct list_head;  

/* embedded list node */
typedef struct list_node {
    uint32_t data;
    struct list_node *next;
    struct list_node *prev;
} list_node_t;

/* List Anchor */
typedef struct list_head {
    uint32_t count;
    list_node_t *index;
    list_node_t sentinel; 
} list_head_t;

/* functions */
void list_init( list_head_t *list );
void list_insert( list_head_t *list, list_node_t *node );
void list_remove( list_node_t *node, list_head_t *list );

void list_node_init( list_node_t *node );


#endif