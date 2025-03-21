#pragma once
#include <Wire.h>

class DriveController {

DriveController();

private:
    const int kLeftPWM = 3;   // Back Left speed
    const int kLeftDir = 12;  // Back Left direction
    const int kLeftBrake = 9;   // Back Left brake

    const int kRightPWM = 11;  // Back Right speed
    const int kRightDir = 13;  // Back Right direction
    const int kRightBrake = 8;   // Back Right brake

    const uint8_t motorSpeed = 200;  // Nominal speed
};