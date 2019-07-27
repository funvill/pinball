#include <Arduino.h>
// Bounce.pde
// -*- mode: C++ -*-
//
// Make a single stepper bounce from one limit to another
//
// Copyright (C) 2012 Mike McCauley
// $Id: Random.pde,v 1.1 2011/01/05 01:51:01 mikem Exp mikem $

#include <AccelStepper.h>

// Define a stepper and the pins it will use
AccelStepper stepper(AccelStepper::DRIVER, 8, 9);

int speed;

void setup()
{
  Serial.begin(115200);
  Serial.println("version 3");

  // Change these to suit your stepper if you want
  // stepper.setMaxSpeed(20000);
  // stepper.setAcceleration(20000);
  // stepper.moveTo(2000);

  speed = 15 * 1000;

  stepper.setMaxSpeed(speed);
  stepper.setAcceleration(speed);
  stepper.setSpeed(speed);
  stepper.moveTo(speed);
}

void loop()
{
  // If at the end of travel go to the other end
  if (stepper.distanceToGo() == 0)
  {
    stepper.moveTo(-stepper.currentPosition());
  }

  static unsigned long timerNextPrint = 0;
  if (timerNextPrint < millis())
  {
    timerNextPrint = millis() + 1000 * 1;

    static unsigned long lastPos = 0;
    unsigned long currentPos = abs(stepper.currentPosition());
    Serial.print("diff pos: ");
    Serial.print(abs(currentPos - lastPos));
    Serial.print(", Pos: ");
    Serial.print(currentPos);
    Serial.print(", Speed: ");
    Serial.println(stepper.speed());

    lastPos = currentPos;
  }

  // stepper.runSpeed();
  stepper.setSpeed(speed);
  stepper.run();
}
