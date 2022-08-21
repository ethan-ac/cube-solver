#include <AccelStepper.h>
#define dirPinfront 2
#define stepPinfront 3
#define dirPinright 4
#define stepPinright 5
#define dirPinback 6
#define stepPinback 7
#define dirPinleft 8
#define stepPinleft 9
#define dirPinup 10
#define stepPinup 11
#define dirPindown 12
#define stepPindown 13
AccelStepper stepperfront(1, stepPinfront, dirPinfront);
AccelStepper stepperright(1, stepPinright, dirPinright);
AccelStepper stepperback(1, stepPinback, dirPinback);
AccelStepper stepperleft(1, stepPinleft, dirPinleft);
AccelStepper stepperup(1, stepPinup, dirPinup);
AccelStepper stepperdown(1, stepPindown, dirPindown);
void setup() {
  stepperfront.setMaxSpeed(1000);
  stepperright.setMaxSpeed(1000);
  stepperback.setMaxSpeed(1000);
  stepperleft.setMaxSpeed(1000);
  stepperup.setMaxSpeed(1000);
  stepperdown.setMaxSpeed(1000);
  stepperfront.setCurrentPosition(0);
  stepperright.setCurrentPosition(0);
  stepperback.setCurrentPosition(0);
  stepperleft.setCurrentPosition(0);
  stepperup.setCurrentPosition(0);
  stepperdown.setCurrentPosition(0);
  Serial.begin(9600);
}

void loop() {
  delay(2000);

  while (stepperfront.currentPosition() != 50) {
    stepperfront.setSpeed(400);
    stepperfront.runSpeed();
  }
  stepperfront.setCurrentPosition(0);
  delay(200);
  while (stepperright.currentPosition() != 50) {
    stepperright.setSpeed(400);
    stepperright.runSpeed();
  }
  stepperright.setCurrentPosition(0);
  delay(200);
  while (stepperback.currentPosition() != 50) {
    stepperback.setSpeed(400);
    stepperback.runSpeed();
  }
  stepperback.setCurrentPosition(0);
  delay(200);
  while (stepperleft.currentPosition() != 50) {
    stepperleft.setSpeed(400);
    stepperleft.runSpeed();
  }
  stepperleft.setCurrentPosition(0);
  delay(200);
  while (stepperup.currentPosition() != 50) {
    stepperup.setSpeed(400);
    stepperup.runSpeed();
  }
  stepperup.setCurrentPosition(0);
  delay(200);
  while (stepperdown.currentPosition() != 50) {
    stepperdown.setSpeed(400);
    stepperdown.runSpeed();
  }
  stepperdown.setCurrentPosition(0);
  delay(200);
}
