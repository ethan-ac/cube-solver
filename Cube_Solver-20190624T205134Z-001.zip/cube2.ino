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
  stepperfront.setAcceleration(400);
  stepperright.setAcceleration(400);
  stepperback.setAcceleration(400);
  stepperleft.setAcceleration(400);
  stepperup.setAcceleration(400);
  stepperdown.setAcceleration(400);
  stepperfront.setCurrentPosition(0);
  stepperright.setCurrentPosition(0);
  stepperback.setCurrentPosition(0);
  stepperleft.setCurrentPosition(0);
  stepperup.setCurrentPosition(0);
  stepperdown.setCurrentPosition(0);
  Serial.begin(9600);
}

void loop() {
  char cubei;
  String cubef[19];
  int a = 0;
  while (Serial.available()) {
    cubei = Serial.read();
    if (isAlphaNumeric(cubei)) {
      cubef[a] += cubei;
    }
    else if (isSpace(cubei)) {
      a++;
    }
    else {
      break;
    }
  }
  //int len = (String(cubei[cubei.length() - 4]) + String(cubei[cubei.length() - 3])).toInt();
  delay(10);
  for (int i = 0; i < 19; i++) {
    switch (cubef[i][0]) {
      case 'F':
        /*Serial.print("front");
          Serial.println(cubef[i][1] - 48);
          for (int j = 0; j < (cubef[i][1] - 48); j++) {
          digitalWrite(ledPin, HIGH);
          delay(200);
          digitalWrite(ledPin, LOW);
          delay(200);
          }*/
        //rotate front side
        stepperfront.runToNewPosition((cubef[i][1] - 48) * 50);
        stepperfront.setCurrentPosition(0);
        delay(100);
        break;
      case 'R':
        /*Serial.print("right ");
          Serial.println(cubef[i][1] - 48);
          for (int j = 0; j < (cubef[i][1] - 48); j++) {
          digitalWrite(ledPin, HIGH);
          delay(200);
          digitalWrite(ledPin, LOW);
          delay(200);
          }*/
        //rotate right side
        stepperright.runToNewPosition((cubef[i][1] - 48) * 50);
        stepperright.setCurrentPosition(0);
        delay(100);
        break;
      case 'B':
        /*Serial.print("back ");
          Serial.println(cubef[i][1] - 48);
          for (int j = 0; j < (cubef[i][1] - 48); j++) {
          digitalWrite(ledPin, HIGH);
          delay(200);
          digitalWrite(ledPin, LOW);
          delay(200);
          }*/
        //rotate back side
        stepperback.runToNewPosition((cubef[i][1] - 48) * 50);
        stepperback.setCurrentPosition(0);
        delay(100);
        break;
      case 'L':
        /*Serial.print("left ");
          Serial.println(cubef[i][1] - 48);
          for (int j = 0; j < (cubef[i][1] - 48); j++) {
          digitalWrite(ledPin, HIGH);
          delay(200);
          digitalWrite(ledPin, LOW);
          delay(200);
          }*/
        //rotate left side
        stepperleft.runToNewPosition((cubef[i][1] - 48) * 50);
        stepperleft.setCurrentPosition(0);
        delay(100);
        break;
      case 'U':
        /*Serial.print("up ");
          Serial.println(cubef[i][1] - 48);
          for (int j = 0; j < (cubef[i][1] - 48); j++) {
          digitalWrite(ledPin, HIGH);
          delay(200);
          digitalWrite(ledPin, LOW);
          delay(200);
          }*/
        //rotate up side
        stepperup.runToNewPosition((cubef[i][1] - 48) * 50);
        stepperup.setCurrentPosition(0);
        delay(100);
        break;
      case 'D':
        /*Serial.print("down ");
          Serial.println(cubef[i][1] - 48);
          for (int j = 0; j < (cubef[i][1] - 48); j++) {
          digitalWrite(ledPin, HIGH);
          delay(200);
          digitalWrite(ledPin, LOW);
          delay(200);
          }*/
        //rotate down side
        stepperdown.runToNewPosition((cubef[i][1] - 48) * 50);
        stepperdown.setCurrentPosition(0);
        delay(100);
        break;
    }
  }
}
