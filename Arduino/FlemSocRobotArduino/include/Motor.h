#pragma once
#include "Arduino.h"

class Motor {
public:
    Motor();
    Motor(bool port);
    void setMotor(bool forwards, int speed);
    void stopMotor();


private:
    int PWM;
    int dir;
    int brake;
    bool invert;
};
