#include "LED.h"
#include "Arduino.h"

LED::LED(int pin) : pin(pin) {}

void LED::init() {
    pinMode(pin, OUTPUT);
}

void LED::on() {
    digitalWrite(pin, HIGH);
}

void LED::off() {
    digitalWrite(pin, LOW);
}

void LED::blink(bool state) {
    if (state) {
        on();
    } else {
        off();
    }
}