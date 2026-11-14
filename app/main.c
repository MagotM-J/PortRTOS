#include <stdio.h>
#include "rtos.h"
#include "port.h"

int main(void) {
    printf("=== Booting PortRTOS ===\n");
    
    port_init();
    rtos_init();
    rtos_start();

    return 0;
}
