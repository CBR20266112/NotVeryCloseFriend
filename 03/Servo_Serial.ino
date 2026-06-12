#include <Servo.h>  //헤더파일 서보.h

int SERVO = 10;
Servo servo;  //제어를 위한 객체 변수 선언?

void setup() {
  Serial.begin(9600);
  servo.attach(SERVO);  //servo에 attach 함수로 10번 핀 연결.
  servo.write(0);  //servo로 입력, 각도 0.
  delay(1000);
}

void loop() {
  if(Serial.available()) {  //만약 주파수가 맞다면?
    char userInput = Serial.read();  //문자형 변수는 입력값 받아서.
    switch(userInput) {  //유저인풋에 따라서? 아마도 위 입력값.
      case '1':  //1이면
        servo.write(30);  //30도~
        delay(1000);
        break;  //탈출
      case '2':
        servo.write(90);
        delay(1000);
        break;  //탈출2
      case '3':
        servo.write(150);
        delay(1000);
        break;  //탈출3
      case '4':
        servo.write(180);  //~180도까지
        delay(500);
        break;  //탈출4
      default:  //디폴트인데도 탈출?? 해당 케이스가 없으면 기냥 탈출하고 끝이라는 건가?
        Serial.println("너 잘못 입력한 듯.");
        break;
    }
  }
}