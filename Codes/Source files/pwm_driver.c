#include "pwm_driver.h"
#include <stdio.h>

void PWM_Init(void) {
    // Simulated init
}

void PWM_SetState(LedId led, int on_off) {
    const char *ledName = (led == LED_LEFT) ? "Left" : "Right";
    const char *state = on_off ? "ON" : "OFF";
    printf("LED %s: %s\n", ledName, state);
}
