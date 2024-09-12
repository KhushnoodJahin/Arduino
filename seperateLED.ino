const int sensor1Pin = 7;  // Pin connected to the OUT of the first IR sensor
const int sensor2Pin = 8;  // Pin connected to the OUT of the second IR sensor
const int sensor3Pin = 9;  // Pin connected to the OUT of the third IR sensor
const int led1Pin = 13;    // Pin connected to the first Indicator LED
const int led2Pin = 12;    // Pin connected to the second Indicator LED
const int led3Pin = 11;    // Pin connected to the third Indicator LED

void setup() {
  pinMode(sensor1Pin, INPUT);
  pinMode(sensor2Pin, INPUT);
  pinMode(sensor3Pin, INPUT);
  pinMode(led1Pin, OUTPUT);  // Set LED 1 pin as OUTPUT
  pinMode(led2Pin, OUTPUT);  // Set LED 2 pin as OUTPUT
  pinMode(led3Pin, OUTPUT);  // Set LED 3 pin as OUTPUT
  Serial.begin(9600);        
}

void loop() {
  int sensor1Value = digitalRead(sensor1Pin);
  int sensor2Value = digitalRead(sensor2Pin);
  int sensor3Value = digitalRead(sensor3Pin);

  // Print sensor values
  Serial.print("Sensor 1: "); Serial.println(sensor1Value);
  Serial.print("Sensor 2: "); Serial.println(sensor2Value);
  Serial.print("Sensor 3: "); Serial.println(sensor3Value);

  // Control LED 1 based on Sensor 1
  if (sensor1Value == HIGH) {  // If Sensor 1 detects an object
    digitalWrite(led1Pin, HIGH); 
  } else {
    digitalWrite(led1Pin, LOW);  // Turn off LED 1
  }

  // Control LED 2 based on Sensor 2
  if (sensor2Value == HIGH) {  // If Sensor 2 detects an object
    digitalWrite(led2Pin, HIGH);  
  } else {
    digitalWrite(led2Pin, LOW);  // Turn off LED 2
  }

  // Control LED 3 based on Sensor 3
  if (sensor3Value == HIGH) {  // If Sensor 3 detects an object
    digitalWrite(led3Pin, HIGH); 
  } else {
    digitalWrite(led3Pin, LOW);  // Turn off LED 3
  }

  delay(500); 
}
