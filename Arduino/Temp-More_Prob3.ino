#include <Car_Library.h>

int analogPin = A5;

int motorA1 = 11;
int motorA2 = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;

  val = potentiometer_Read(analogPin);

  val = (val / 25.5) - 5;

  if(val > 0)
  {
    motor_forward(motorA1, motorA2, ((val+5)*25.5));
  }
  else if(val < 0)
  {
    val = abs(val);
    motor_backward(motorA1, motorA2, ((val+5)*25.5));
  }
  else
  {
    motor_hold(motorA1, motorA2);
  }
}