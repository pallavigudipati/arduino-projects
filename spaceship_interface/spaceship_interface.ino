
int switchState = 0;

void setup() {
  pinMode(2, INPUT);  // Switch
  pinMode(3, OUTPUT);  // Green LED
  pinMode(4, OUTPUT);  // Red LED 1
  pinMode(5, OUTPUT);  // Red LED 2
}

void loop() {
  switchState = digitalRead(2);

  if (switchState == LOW) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  } else {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);

    delay(250);

    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250);
  }
}
