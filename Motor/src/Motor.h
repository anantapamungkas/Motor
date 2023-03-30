#ifndef Motor_h
#define Motor_h

#include <Arduino.h>

class Motor {
  private:
    int _pinA;
    int _pinB;
    int _speed;
  public:
    Motor(int pinA, int pinB);
    void setSpeed(int speed);
    void stop();
    void forward();
    void backward();
};

#endif