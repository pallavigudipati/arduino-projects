// LED outputs
const int redLEDPin = 9;
const int greenLEDPin = 10;
const int blueLEDPin = 11;

// Sensor inputs
const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

// LED output values
int redLEDValue = 0;
int greenLEDValue = 0;
int blueLEDValue = 0;

// Sensor input values
int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

void setup() {
  Serial.begin(9600);

  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
}

void loop() {
  redSensorValue = analogRead(redSensorPin);
  delay(5);
  greenSensorValue = analogRead(greenSensorPin);
  delay(5);
  blueSensorValue = analogRead(blueSensorPin);

  Serial.print("Raw sensor values:\tR: ");
  Serial.print(redSensorValue);
  Serial.print("\tG: ");
  Serial.print(greenSensorValue);
  Serial.print("\tB: ");
  Serial.println(blueSensorValue);

  // Convert the 0-1023 sensor input to 0-255 duty cycle output
  redLEDValue = redSensorValue / 4;
  greenLEDValue = greenSensorValue / 4;
  blueLEDValue = blueSensorValue / 4;
  
  Serial.print("Mapped sensor values:\tR: ");
  Serial.print(redLEDValue);
  Serial.print("\tG: ");
  Serial.print(greenLEDValue);
  Serial.print("\tB: ");
  Serial.println(blueLEDValue);

  analogWrite(redLEDPin, redLEDValue);
  analogWrite(greenLEDPin, greenLEDValue);
  analogWrite(blueLEDPin, blueLEDValue);
}
