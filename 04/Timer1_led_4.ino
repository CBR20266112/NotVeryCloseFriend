#include <TimerOne.h>  //Timer 함수를 사용하기 위해 헤더파일 하나 끌어온 거라고?
//라이브러리를 불러온 거라고 하네.
int LED = 10;

void setup() {  
  Timer1. initialize(); 
  Timer1.pwm(LED, 0);

  Timer1.setPeriod(1000);  //1000hz라고 하네.
}

void loop() {
  for(int i = 0; i < 1024; i++) {  //fpr문으로 불 점점 올리기.
    Timer1.setPwmDuty(LED, i);  //함수 호출해서 늘어나는 값을 먹이는 거라고.
    delay(1);
  }
}
