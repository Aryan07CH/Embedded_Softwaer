#ifndef GPIO_DRIVER_H
#define GPIO_DRIVER_H

#include <stdint.h>

typedef enum {
    BUTTON_LEFT,
    BUTTON_RIGHT
} ButtonId;

extern uint8_t left_state;
extern uint8_t right_state;

void GPIO_Init(void);
uint8_t GPIO_ReadButton(ButtonId button);

#endif
