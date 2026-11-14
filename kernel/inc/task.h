/** @file task.h
 *  @brief The RTOS task header file.
 */
#ifndef TASK_H
#define TASK_H

/* Includes */
#include <stdint.h>
#include "list.h"

/* Defines */
/* task state enum */
typedef enum {
    TASK_READY,
    TASK_RUNNING,
    TASK_BLOCKED,
    TASK_SUSPENDED
} task_state_t;

/* Task Control Block (TCB) structure */
typedef struct {
    void *stack_ptr;
    void *stack_base;
    uint32_t stack_size;

    uint32_t task_id;
    char task_name[16];


    uint8_t priority;
    uint32_t delay_ticks;

    list_node_t list_node; 
    task_state_t state;
} tcb_t;


#endif