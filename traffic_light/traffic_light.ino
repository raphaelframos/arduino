const int RED = 21;
const int YELLOW = 18;
const int GREEN = 19;



int changeState(int value){
  int result;
  if(value == 0) {
    result = 1;
  }else {
    result = 0;
  }
  return result;
}

void change(int led){
  digitalWrite(led, changeState(digitalRead(led)));
}

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  change(GREEN);
  delay(2000);
  change(YELLOW);
  change(GREEN);
  delay(2000);
  change(RED);
  change(YELLOW);
  delay(2000);
  change(RED);
}


