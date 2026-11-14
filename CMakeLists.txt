cmake_minimum_required(VERSION 3.15)
project(PortRTOS C ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Enable compiler warnings
add_compile_options(-Wall -Wextra)

# Include paths for kernel headers and port configurations
include_directories(
    kernel/inc
    port
)

# Source files mapped to the streamlined structure
set(KERNEL_SOURCES
	kernel/src/scheduler.c
	kernel/src/sync.c
    kernel/src/list.c
    kernel/src/task.c
)

set(PORT_SOURCES
	port/port.c
)

set(APP_SOURCES
    app/main.c
)

# Build target executable
add_executable(PortRTOS 
    ${KERNEL_SOURCES}
    ${PORT_SOURCES}
    ${APP_SOURCES}
)
