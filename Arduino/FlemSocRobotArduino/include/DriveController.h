#pragma once
#include <Arduino.h>
#include <Wire.h>

#include "Motor.h"

class DriveController {
public:
DriveController(bool isRearWheels);

void stop();
void baseDrive(int command, int speed);
void holonomicDrive();

private:
    int invert;

    Motor leftMotor;
    Motor rightMotor;

    const uint8_t kMotorSpeed = 200;  // Nominal speed
};