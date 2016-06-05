#ifndef _PINS_ARDUINO_H
#define _PINS_ARDUINO_H

#include <wiring_pins.h>

extern struct _pin _pins_gpio[];

#define __SERIAL_0 "/dev/ttyO0"
#define __SERIAL_1 "/dev/ttyO1"
#define __SERIAL_2 "/dev/ttyO2"
#define __SERIAL_3 "/dev/ttyO4"
#define __SERIAL_4 "/dev/ttyO5"

#define NUM_GPIO 93

#define USE_BOARD_ANALOG_READ 1

extern int __board_analog_read(uint8_t pin);

#endif
