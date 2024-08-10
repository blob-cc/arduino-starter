#ifndef LED_H
#define LED_H

class LED {
private:
    int pin;
public:
    LED(int pin);
    void init();
    void on();
    void off();
    void blink(bool state);
};

#endif