#include "uart_driver.h"
#include <stdio.h>

void UART_Init(void) {
    // Simulated UART init
}

void UART_Log(const char *msg) {
    printf("[UART] %s", msg);
}
