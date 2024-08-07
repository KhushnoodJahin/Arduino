
const int irSensorPin = 9; // Pin connected to the OUT of the IR sensor
const int ledPin = 13;     // Pin connected to the Indicator LED

void setup() {
  pinMode(irSensorPin, INPUT); // Set the IR sensor pin as input
  pinMode(ledPin, OUTPUT);     // Set the Indicator LED pin as output
  Serial.begin(9600);          // Begin serial communication for debugging
}

void loop() {
  int sensorValue = digitalRead(irSensorPin); // Read the value from the IR sensor
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  if (sensorValue == LOW) { // Assuming LOW means object detected
    Serial.println("Object detected - LED ON");
    digitalWrite(ledPin, HIGH); // Turn on Indicator LED
  } else {
    Serial.println("No object - LED OFF");
    digitalWrite(ledPin, LOW);  // Turn off Indicator LED
  }

  delay(500); // Small delay for stability
}
