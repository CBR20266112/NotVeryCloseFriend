#include <Servo.h>  //헤더파일 서보.h

int SERVO = 10;
Servo servo;  //제어를 위한 객체 변수 선언?

void setup() {
  servo.attach(SERVO);  //servo에 attach함수로 10번핀 연결.
  servo.write(0);  //서보로 쓰기. (0)이 각도를 의미한다고?

  delay(1000);  //회전할 시간을 좀 더 주는 건가?

  for(int angle = 0; angle <= 180; angle++) {  //서보모터는 180도가 최대 회전 각도래.
    servo.write(angle);  //아예 angle 변수 따라가.
    delay(30);  
  }
  servo.detach();  //detach는 떼는 걸 의미하잖아? 끝이라는 거낙?
}

void loop() {

}