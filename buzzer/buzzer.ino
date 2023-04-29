const int RED = 21;
const int YELLOW = 18;
const int GREEN = 19;
const int BUTTON = 5;
const int BUZZER = 23;

bool changeState(int value){
  return !value;
}

void cleanLights(){
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
}

void change(int led){
  cleanLights();
  digitalWrite(led, changeState(digitalRead(led)));
  delay(1000);
}

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BUTTON, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  
  boolean stage = digitalRead(BUTTON);
  if(stage){
    digitalWrite(BUZZER, HIGH);  
    change(GREEN);
    delay(500);
    digitalWrite(BUZZER, LOW);
    digitalWrite(GREEN, LOW);
  }
}


