#include "gpio.h"
#include "wiringPi.h"

int gpio_init() {
    return wiringPiSetup();
}

void gpio_set_pin_mode_to_output(int pin) {
    pinMode(pin, OUTPUT);
}

void gpio_set_pin_mode_to_input(int pin) {
    pinMode(pin, INPUT);
}

int gpio_get_pin_value(int pin) {
    return digitalRead(pin);
}

void gpio_set_pin_value(int pin, int value) {
    digitalWrite(pin, value);
}

void gpio_delay(unsigned int value) {
    delay(value);
}

