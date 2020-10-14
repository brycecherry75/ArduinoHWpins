#RapidFireIO Library#

ArduinoHWpins, a hardware label to Arduino label pin mapping utility by Bryce Cherry which is useful for non-Arduino boards

v1.0 First release

FEATURES:
Converts hardware pin labels to Arduino pin labels which is useful for non-Arduino boards
Boards and derivatives supported: Uno inclduing ATmega8, Mega, Leonardo, Zero, Due, Gemma and others based on the ATtiny25/45/85

To use a pin (e.g. PC4), the constant to use is PC_4 since "PC4" is treated like a number unless an underscore separator is used between the non-numberic (PC) and numeric (4) values.

On the ATtiny25/45/85, PB5 can be programmed by fuses to be a GPIO pin instead of a Reset pin.