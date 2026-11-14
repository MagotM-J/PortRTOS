/** @file rtos.c
 *  @brief The RTOS implementation file.
 */

#include <stdio.h>
#include "rtos.h"
#include "list.h"

void rtos_init(void){
	printf("[KERNEL] Scheduler initialized.\n");
}

void rtos_start(void){
	printf("[KERNEL] Starting scheduler loop.\n");
}
