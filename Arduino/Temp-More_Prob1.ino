//Temp - More Problem1

#include <Car_Library.h>

int trig = 36;     // trig Pin
int echo = 37;     // echo Pin

int motorA1 = 11;    // 모터 드라이버 IN1
int motorA2 = 10;    // 모터 드라이버 IN2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);       // 시리얼 통신 시작, 통신 속도 설정
  
  //Ultrasonic
  pinMode(trig, OUTPUT);    // trig 핀 모드 설정
  pinMode(echo, INPUT);     // echo 핀 모드 설정

  //Motor
  pinMode(motorA1, OUTPUT); 
  pinMode(motorA2, OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:

  long distance;            // 거리값 저장할 변수 선언

  // 초음파 센서로 거리 값 받아오는 함수 실행
  distance = ultrasonic_distance(trig, echo);


  if(distance <= 50)
  {
    motor_hold(motorA1, motorA2);
  }
  else
  {
    motor_forward(motorA1, motorA2, 75);
  }
    
  // Serial 모니터로 출력
  Serial.print(distance);
  Serial.println(" mm");

  // 1초마다 출력
  delay(1000);
