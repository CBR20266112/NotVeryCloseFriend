#include <TimerOne.h>  //Timer 함수를 사용하기 위해 헤더파일 하나 끌어온 거라고?
//라이브러리를 불러온 거라고 하네.
int BUZZER = 10;

void setup() {  
  Timer1. initialize(); 
  Timer1.pwm(BUZZER, 0);  //또 타이머 펄스위드모듈어쩌구함수 호출. 

  Timer1.setPwmDuty(BUZZER, 512);  //이건 펄스위드모듈 세팅함수. 

  Timer1.setPeriod(1000000/262);  //주기설정, 도 주파수.

  delay(3000);  //3초 대기하고.

  Timer1.setPwmDuty(BUZZER,0);  //버저로 나가는 펄스위드모듈 구간을 0으로, 소리 끄는 거래.
}

void loop() {
  }
}
