#define ledBlue 2
#define ledRed 3
#define ledGreen 4
#define buzzer 5

void setup() {
  pinMode(ledBlue, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(buzzer, OUTPUT);
  


}

void loop() {
  digitalWrite(ledBlue, HIGH);
  delay(60);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledRed, HIGH);
  delay(60);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, HIGH);
  delay(60);
  digitalWrite(ledGreen, LOW);
  delay(60);

  tone(buzzer, 2000);
  delay(100);

  noTone(buzzer);
  delay(10);

}
