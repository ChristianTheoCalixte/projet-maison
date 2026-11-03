#define LED_PIN 5

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // LED allumée
  delay(500);
  digitalWrite(LED_PIN, LOW);   // LED éteinte
  delay(500);
}
