#include <stdio.h>
#include <unistd.h>
#include "gpio_driver.h"
#include "pwm_driver.h"
#include "uart_driver.h"
#include "scheduler.h"

int main() {
    GPIO_Init();
    PWM_Init();
    UART_Init();

    UART_Log("System Initialized\n");

    for (int t = 0; t < 10; ++t) {
        printf("\nTick %d\n", t);

        if (t == 2) left_state = 1;
        if (t == 3) left_state = 0;
        if (t == 5) right_state = 1;
        if (t == 6) right_state = 0;

        Scheduler_Task();
        sleep(1);
    }

    return 0;
}
