#include "gpio_driver.h"
#include "pwm_driver.h"
#include "uart_driver.h"
#include <stdio.h>

void Scheduler_Task(void) {
    static int toggle_counter = 0;

    if (GPIO_ReadButton(BUTTON_LEFT)) {
        UART_Log("Left Button Pressed\n");
        PWM_SetState(LED_LEFT, 1);
    }

    if (GPIO_ReadButton(BUTTON_RIGHT)) {
        UART_Log("Right Button Pressed\n");
        PWM_SetState(LED_RIGHT, 1);
    }

    toggle_counter += 100;
    if (toggle_counter >= 300) {
        toggle_counter = 0;
        printf("Toggling LEDs if needed...\n");
    }
}
