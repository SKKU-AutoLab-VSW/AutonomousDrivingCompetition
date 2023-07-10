#include <Car_Library.h>

int trig = 3;
int echo = 2;

int analogPin = A5;

int motorA1 = 3;
int motorA2 = 4;

int val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 
// 연습 1  
// pinMode(trig, OUTPUT);
// pinMode(echo, INPUT);

// 연습 2
// pinMode(LED_BUILTIN, OUTPUT);

//  연습 3
//  pinMode(motorA1, OUTPUT);
//  pinMode(motorA2, OUTPUT);

//  연습 4
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
/*
  // 초음파 센서 - 연습 1
  long distance;

  distance = ultrasonic_distance(trig, echo);
  Serial.print(distance);
  Serial.println(" mm");

  delay(1000);
*/

/*
  // 가변저항 - 연습 2
  int val;

  val = potentiometer_Read(analogPin);

  Serial.println(val);

  analogWrite(LED_BUILTIN, val);
*/

/*
  // 모터 구동 - 연습 3
  Serial.println("Motor Forward");
  motor_forward(motorA1, motorA2, 75);
  delay(3000);

  Serial.println("Motor Backward");
  motor_backward(motorA1, motorA2, 150);
  delay(3000);

  Serial.println("Motor Forward");
  motor_hold(motorA1, motorA2);
  delay(3000);
*/

/* 시리얼 - 연습 4
  if(Serial.available())
  {
    val = Serial.parseInt();

    if(val >= 0)
    {
      analogWrite(LED_BUILTIN, val);
    }
  }

}
