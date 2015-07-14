#include "gpio.h"
#include <stdio.h>

#define INPUT_PIN 7
#define OUTPUT_PIN 11

int main(int argc, char *argv[]) {
    int pin_value = 0;
    int init_value = 0;
    int i = i;
    printf("Starting gpio-app\n");

    init_value = gpio_init();
    printf("Initializing gpio (returned %d)\n", init_value); 
    gpio_set_pin_mode_to_output(OUTPUT_PIN);
    gpio_set_pin_mode_to_input(INPUT_PIN);

    gpio_set_pin_value(OUTPUT_PIN, 0);

    for(i = 0; i < 60; i++) {
        pin_value = gpio_get_pin_value(INPUT_PIN);
        printf("INPUT_PIN %d value = %d\n", INPUT_PIN, pin_value);
        gpio_set_pin_value(OUTPUT_PIN, pin_value);
        gpio_delay(1000); 
    }

    return 0;
}

