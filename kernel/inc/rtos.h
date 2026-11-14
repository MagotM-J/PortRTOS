/** @file rtos.h
 *  @brief The RTOS header file.
 */

#ifndef RTOS_H
#define RTOS_H

/* Includes */
#include <stdint.h>
#include "list.h"
#include "task.h"

/* Defines */

void rtos_init(void);
void rtos_start(void);


#endif
