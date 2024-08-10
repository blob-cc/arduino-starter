#include "config.h"
#include "utils.h"
#include "components/LED.h"
#include "components/Sensor.h"

LED led(LED_PIN);
Sensor sensor(SENSOR_PIN);

void setup() {
    Serial.begin(9600);
    led.init();
    sensor.init();
}

void loop() {
    int sensorValue = sensor.read();
    led.blink(sensorValue > THRESHOLD);
    delay(1000);
}