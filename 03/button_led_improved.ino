const int LED = 13;
const int BUTTON = 2;

int val = 0;
int old_val = 0;  //이전 버튼값 저장
int state = 0;  //led 끈 상태로 저장용 변수?

void setup() {
  pinMode(LED, OUTPUT);  //13번 엘이디 출력설정 함수?
  pinMode(BUTTON, INPUT);  //버튼핀 2번으로 입력값 받기 설정인 건가?
}

void loop() {
  val = digitalRead(BUTTON);  //밸류값에 지금 입력된 버튼값을 읽어와서 저장해라?
  //버튼 입력값 확인하고 현재 상태값을 바꾸는 조건절
  if ((val == HIGH) && (old_val == LOW)) {  //이건.. and 아니었나? 그니까 지금은 눌려있고 기존은 안눌려있으면 만족?
    state = 1 - state;  //일단 반대로 스위칭
  }
  old_val = val;  //밸류값을 저장해두기?
  if (state == 1) {  //지금 상태값이 1이면?? 뭔 소리여 이건 또
  digitalWrite(LED, HIGH);  //켜기
  }
  else {  //1이 아닐 경우?
  digitalWrite(LED, LOW);  //꺼
  }
}
