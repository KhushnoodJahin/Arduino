const int irSensorPin = 2; // Pin connected to the OUT of the IR sensor
const int ledPin = 13;     // Pin connected to the LED

void setup() {
  pinMode(irSensorPin, INPUT); // Set the IR sensor pin as input
  pinMode(ledPin, OUTPUT);     // Set the LED pin as output
  Serial.begin(9600);          
}

void loop() {
  int sensorValue = digitalRead(irSensorPin); // Read the value from the IR sensor
  Serial.print("Sensor Value: ");            
  Serial.println(sensorValue);
  
  if (sensorValue == LOW) { 
    Serial.println("Object detected - LED ON");
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    Serial.println("No object - LED OFF");
    digitalWrite(ledPin, LOW);  // Turn off LED
  }

  delay(500); 
}
