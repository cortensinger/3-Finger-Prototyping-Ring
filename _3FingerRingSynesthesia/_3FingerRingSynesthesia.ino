int light;

void setup() {
  pinMode(A3, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  light = analogRead(A3);
  light = map(light, 100, 1000, 0, 255);
  Serial.print(light);
  Serial.print('\n');
  if (light < 50) {
    digitalWrite(9, LOW);
  } else if (light < 150) {
    digitalWrite(9, HIGH);
    delay(3);
    digitalWrite(9, LOW);
    delay(5);
  } else if (light < 225) {
    digitalWrite(9, HIGH);
    delay(10);
    digitalWrite(9, LOW);
    delay(5);
  } else {
    digitalWrite(9, HIGH);
  }
}
