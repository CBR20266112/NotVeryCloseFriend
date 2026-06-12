#include <Servo.h>  //헤더파일 서보.h

int SERVO = 10;
Servo servo;  //제어를 위한 객체 변수 선언?

void setup() {
  servo.attach(SERVO);  //servo에 attach함수로 10번핀 연결.
  servo.write(0);  //서보로 쓰기. (0)이 각도를 의미한다고?

  delay(100);

  for(int cnt = 0; cnt < 3; cnt++) {
    servo.write(0);  //0도로 맞춰라.
    delay(1000);  //기다렸다가,
    servo.write(100);  //100도로 맞춰라.
    delay(1000);  //또 기다려.
  }
  servo.detach();  //detach는 떼는 걸 의미하잖아? 끝이라는 거낙?
}

void loop() {

}