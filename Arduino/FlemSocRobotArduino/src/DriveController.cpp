#include <DriveController.h>

DriveController::DriveController(bool isRearWheels) :
    invert(isRearWheels),
    leftMotor(0),
    rightMotor(1)
{}

void DriveController::baseDrive(int command, int speed){
    switch (command) {
        case 1: // Forward
            Serial.println("Front Wheels: Forward");
            leftMotor.setMotor(true, speed);
            rightMotor.setMotor(true, speed);
            break;
        case 2: // Backward
            Serial.println("Front Wheels: Backward");
            leftMotor.setMotor(false, 255);
            rightMotor.setMotor(false, 255);
            break;
        // case 3: // Left (strafe left)
        //     // For left: both wheels receive logical false.
        //     Serial.println("Front Wheels: Left");
        //     leftMotor.setMotor(invert, 255);
        //     rightMotor.setMotor(invert, 255);
        //     break;
        // case 4: // Right (strafe right)
        //     // For right: both wheels receive logical true.
        //     Serial.println("Front Wheels: Right");
        //     leftMotor.setMotor(invert, 255);
        //     rightMotor.setMotor(invert, 255);
        //     break;
        // case 5: // Diagonal Forward Left
        //     Serial.println("Front Wheels: Diagonal Forward Left");
        //     leftMotor.setMotor(invert, 255);
        //     rightMotor.setMotor(!invert, 255);
        //     break;
        // case 6: // Diagonal Forward Right
        //     leftMotor.setMotor(invert, 255);
        //     rightMotor.setMotor(!invert, 255);
        //     break;
        // case 7: // Diagonal Backward Left
        //     Serial.println("Front Wheels: Diagonal Backward Left");
        //     leftMotor.setMotor(invert, 255);
        //     rightMotor.setMotor(!invert, 255);
        //     break;
        // case 8: // Diagonal Backward Right
        //     Serial.println("Front Wheels: Diagonal Backward Right");
        //     leftMotor.setMotor(invert, 255);
        //     rightMotor.setMotor(!invert, 255);
        //     break;
        // case 0:
        default:
            Serial.println("Front Wheels: Stop");
            break;
      }
}

void DriveController::holonomicDrive(){

}