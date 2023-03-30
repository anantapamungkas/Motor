#include "Motor.h"

Motor::Motor(int pinA, int pinB) {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  _pinA = pinA;
  _pinB = pinB;
}

void Motor::setSpeed(int speed) {
  _speed = speed;
  if (speed >= 0) {
    analogWrite(_pinA, speed);
    digitalWrite(_pinB, LOW);
  } else {
    analogWrite(_pinB, -speed);
    digitalWrite(_pinA, LOW);
  }
}

void Motor::stop() {
  digitalWrite(_pinA, LOW);
  digitalWrite(_pinB, LOW);
}

void Motor::forward() {
  setSpeed(_speed);
}

void Motor::backward() {
  setSpeed(-_speed);
}
