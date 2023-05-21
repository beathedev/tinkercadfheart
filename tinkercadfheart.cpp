int timer = 100;

void setup() {
  Serial.begin(9600);
  for (int thisPin = 2; thisPin < 13; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  const int pins[13] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 2, 3};
  char x = Serial.read();
  
  while(x == 'f') {
    for (int i = 2; i < 13; ++i) {
      digitalWrite(pins[i], HIGH);
      digitalWrite(pins[i] + 1, HIGH);
      delay(timer);
      digitalWrite(pins[i], LOW);
      digitalWrite(pins[i] - 1, LOW);

    }
  }
 delay(500);
}


