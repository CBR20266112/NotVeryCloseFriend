int ledPin = 13;  //변수 선언 후 13번 지정.(책에선 할당이라네?)
int buttonPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);  //함수 호출로 변수에 출력 설정.
  pinMode(buttonPin, INPUT);  //버튼핀은 입력용이라는 것?
}

void loop() {
  int buttonInput = digitalRead(buttonPin);  //함수 호출로 buttonPin값을 buttoninput 변수로 읽어오라?
  digitalWrite(ledPin, buttonInput);  //쓰기함수 호출해서 버튼인풋 변수값을 쓰라고?
}