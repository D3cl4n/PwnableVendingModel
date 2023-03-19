#include <Arduino.h>
#include <TMC2209.h>

// Instantiate TMC2209
TMC2209 stepper_driver;

void setup()
{
  Serial.begin(9600);
  pinMode(22, OUTPUT);

  stepper_driver.setup(Serial2,115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.printf("%d\n", stepper_driver.isCommunicating());

  digitalWrite(22, HIGH);
  usleep(500);
  digitalWrite(22, LOW);
  usleep(500);
}