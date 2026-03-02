// Define the pin for the VCC of the LED module
int ledPowerPin = 7;  // You can connect VCC of HW-481 to pin 7

void setup() {
  pinMode(ledPowerPin, OUTPUT);
  digitalWrite(ledPowerPin, HIGH); // Power ON the LED
}

void loop() {
  // Nothing needed here; the LED cycles colors automatically
}
