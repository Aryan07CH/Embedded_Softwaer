#include "gpio_driver.h"

uint8_t left_state = 0;
uint8_t right_state = 0;

void GPIO_Init(void) {
    // Simulated init
}

uint8_t GPIO_ReadButton(ButtonId button) {
    if (button == BUTTON_LEFT) return left_state;
    if (button == BUTTON_RIGHT) return right_state;
    return 0;
}
