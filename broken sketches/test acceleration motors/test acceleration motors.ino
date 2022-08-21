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
  stepperfront.setMaxSpeed(2000);
  stepperright.setMaxSpeed(2000);
  stepperback.setMaxSpeed(2000);
  stepperleft.setMaxSpeed(2000);
  stepperup.setMaxSpeed(2000);
  stepperdown.setMaxSpeed(2000);
  stepperfront.setAcceleration(1200);
  stepperright.setAcceleration(1200);
  stepperback.setAcceleration(1200);
  stepperleft.setAcceleration(1200);
  stepperup.setAcceleration(1200);
  stepperdown.setAcceleration(1200);
  stepperfront.setCurrentPosition(0);
  stepperright.setCurrentPosition(0);
  stepperback.setCurrentPosition(0);
  stepperleft.setCurrentPosition(0);
  stepperup.setCurrentPosition(0);
  stepperdown.setCurrentPosition(0);

}

void loop() {
  delay(3000);
  stepperfront.runToNewPosition(51);
  stepperfront.setCurrentPosition(0);
  delay(100);
  stepperright.runToNewPosition(51);
  stepperright.setCurrentPosition(0);
  delay(100);
  stepperback.runToNewPosition(51);
  stepperback.setCurrentPosition(0);
  delay(100);
  stepperleft.runToNewPosition(51);
  stepperleft.setCurrentPosition(0);
  delay(100);
  stepperup.runToNewPosition(51);
  stepperup.setCurrentPosition(0);
  delay(100);
  stepperdown.runToNewPosition(51);
  stepperdown.setCurrentPosition(0);
  delay(100);
  stepperfront.runToNewPosition(101);
  stepperfront.setCurrentPosition(0);
  delay(100);
  stepperright.runToNewPosition(101);
  stepperright.setCurrentPosition(0);
  delay(100);
  stepperback.runToNewPosition(101);
  stepperback.setCurrentPosition(0);
  delay(100);
  stepperleft.runToNewPosition(101);
  stepperleft.setCurrentPosition(0);
  delay(100);
  stepperup.runToNewPosition(101);
  stepperup.setCurrentPosition(0);
  delay(100);
  stepperdown.runToNewPosition(101);
  stepperdown.setCurrentPosition(0);
  delay(100);
  stepperfront.runToNewPosition(151);
  stepperfront.setCurrentPosition(0);
  delay(100);
  stepperright.runToNewPosition(151);
  stepperright.setCurrentPosition(0);
  delay(100);
  stepperback.runToNewPosition(151);
  stepperback.setCurrentPosition(0);
  delay(100);
  stepperleft.runToNewPosition(151);
  stepperleft.setCurrentPosition(0);
  delay(100);
  stepperup.runToNewPosition(151);
  stepperup.setCurrentPosition(0);
  delay(100);
  stepperdown.runToNewPosition(151);
  stepperdown.setCurrentPosition(0);
  delay(100);
}
