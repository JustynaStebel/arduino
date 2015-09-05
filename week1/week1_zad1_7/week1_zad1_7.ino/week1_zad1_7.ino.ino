void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  digitalWrite(8, LOW);
}

void morse_letter(int time1, int time2, int port, int amount){
  for(int i=0; i<amount; i++){
  digitalWrite(port, HIGH);
  delay(time1);
  digitalWrite(port, LOW);
  delay(time2);
  }
}

void loop() {
  if (digitalRead(7) == LOW) {
    morse_letter(100, 500, 8, 3);
    morse_letter(500, 500, 8, 3);
    morse_letter(100, 500, 8, 3);
    delay(2000);
  }
  else {
    digitalWrite(8, LOW);
  }
}

