#ifndef PWM_DRIVER_H
#define PWM_DRIVER_H

typedef enum {
    LED_LEFT,
    LED_RIGHT
} LedId;

void PWM_Init(void);
void PWM_SetState(LedId led, int on_off);

#endif
