/*
    Project name : Arduino Nano LM35 Temperature Sensor
    Modified Date: 27-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-lm35-temperature-sensor
*/

const int sensorPin = A0; // Analog pin connected to LM35 output

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog input from LM35
  int sensorValue = analogRead(sensorPin);

  // Convert the analog reading to temperature in Celsius
  float temperatureC = (sensorValue / 1023.0) * 500.0;

  // Print temperature to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000); // Delay for 1 second
}
