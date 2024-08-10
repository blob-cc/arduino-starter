#include "Arduino.h"
#include "utils.h"

void setupPins() {
    // Setup pin modes
    pinMode(LED_BUILTIN, OUTPUT);
}

void initializeComponents() {
    // Initialize any components like sensors, displays, etc.
}

void doSomethingCreative() {
    // Example: Blink LED
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
}