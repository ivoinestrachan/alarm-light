int bulb = 2;

void setup() {
  pinMode(bulb, OUTPUT);
}

void turnOnAlarmLight() {
  digitalWrite(bulb, HIGH);
}

void turnOffAlarmLight() {
  digitalWrite(bulb, LOW);
}

void loop() {
  turnOnAlarmLight();
  delay(1000);
  turnOffAlarmLight();
  delay(5000);
}

