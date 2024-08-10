#include "Sensor.h"
#include "Arduino.h"

Sensor::Sensor(int pin) : pin(pin) {}

void Sensor::init() {
    pinMode(pin, INPUT);
}

int Sensor::read() {
    return analogRead(pin);
}