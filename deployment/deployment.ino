
/*
 DBF22-1 Deployment Mechanism

 This program drives a stepper motor to deploy a package when it 
 recieves a signal.
 
 The motor is attached to digital pins 8 - 11 of the Arduino.

 Adapted from Stepper Motor Control (Arduino Resource Site)

#include <Stepper.h>

// Change constants later on once we can do testing
const int numSteps = 100;
const int fcPin = 7;
const int stepsPerRevolution = 360;

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
int stepperSpeed = 60;

void setup() {
  myStepper.setSpeed(stepperSpeed);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(fcPin) == LOW) {
    deploy();
    delay(1000);
  }
}

void deploy() {
  // step one revolution in one direction:
  Serial.println("Deploying...");
  myStepper.step(numSteps);
}
 */

#include <Servo.h>


Servo servo;

void setup() {
  servo.attach(7);
  
}
void loop() {
  servo.write(0);
  delay(500);
  delay(10000);
  servo.write(90);
  delay(500);
  delay(10000);
  servo.write(180);
  delay(500);
  delay(10000);
  servo.write(90);
  delay(500);
  delay(10000);
  servo.write(0);
  delay(500);
  delay(10000);
}
