//Includes the Arduino Stepper Library
#include <Stepper.h>

// Defines the number of steps per rotation for this motor 2038, SRP, stepsPerRevolution
const int SRP = 2038;

// Creates an instance of stepper class
Stepper myStepper = Stepper(SRP, 11, 10, 9, 6);

void setup() {
    // Nothing to do (Stepper Library sets pins as outputs)
}

void loop() {
  // Rotate CW slowly at 5 RPM
  myStepper.setSpeed(5);
  myStepper.step(SRP);
  delay(1000);
  
  // Rotate CCW quickly at 10 RPM
  myStepper.setSpeed(10);
  myStepper.step(-SRP);
  delay(1000);
}
