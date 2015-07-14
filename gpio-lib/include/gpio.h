#ifndef GPIO_H
#define GPIO_H

int gpio_init();
void gpio_set_pin_mode_to_output(int pin);
void gpio_set_pin_mode_to_input(int pin);

int gpio_get_pin_value(int pin);
void gpio_set_pin_value(int pin, int value);

void gpio_delay(unsigned int value);

#endif
