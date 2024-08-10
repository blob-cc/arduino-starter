#ifndef SENSOR_H
#define SENSOR_H

class Sensor {
private:
    int pin;
public:
    Sensor(int pin);
    void init();
    int read();
};

#endif