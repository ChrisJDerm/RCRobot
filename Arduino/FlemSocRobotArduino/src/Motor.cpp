#include "Motor.h"

Motor::Motor(bool port){
    if (!port)
    {
        this->invert = 1;
        this->PWM = 3;
        this->dir = 12;
        this->brake = 9;
    } else {
        this->invert = 0;
        this->PWM = 11;
        this->dir = 13;
        this->brake = 8;
    }   
}

void Motor::setMotor(bool forwards, int speed){
    forwards = invert ? !forwards : forwards;
    digitalWrite(brake, LOW);
    digitalWrite(dir, forwards ? LOW : HIGH);
    analogWrite(PWM, speed);
}

void Motor::stopMotor(){
    analogWrite(PWM, 0);
    digitalWrite(brake, HIGH);
}