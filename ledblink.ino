#define LED_PIN 5

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(100);   // allumée 100 ms
  digitalWrite(LED_PIN, LOW); 
  delay(100);   // éteinte 100 ms
}
