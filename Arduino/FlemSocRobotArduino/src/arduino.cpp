#include <Arduino.h>
#include <Wire.h>

#include "DriveController.h"

#define forwards

#ifdef forwards
    #define SUB_ADDRESS 8
    #define INVERT = 1
#else
    #define SUB_ADDRESS 9
    #define INVERT = -1
#endif

DriveController *test;

void setup(){
    Serial.begin(115200);
    Serial.println("Serial Init");
    test = new DriveController(0);
    test->baseDrive(2, 50);
    delay(1000);
    test->baseDrive(0, 0);
}

void loop(){
}