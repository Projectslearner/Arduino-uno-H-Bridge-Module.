/*
    Project name : Arduino Uno H-Bridge Module Control
    Modified Date: 28-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-h-bridge-module
*/

// Define pins connected to the H-Bridge module for motor A
const int in1Pin = 8;
const int in2Pin = 9;
const int enAPin = 6;  // Enable pin for motor A

// Define pins connected to the H-Bridge module for motor B
const int in3Pin = 10;
const int in4Pin = 11;
const int enBPin = 5;  // Enable pin for motor B

void setup() {
  // Set all control pins as outputs
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(enAPin, OUTPUT);
  pinMode(in3Pin, OUTPUT);
  pinMode(in4Pin, OUTPUT);
  pinMode(enBPin, OUTPUT);

  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Move motor A forward
  digitalWrite(in1Pin, HIGH);
  digitalWrite(in2Pin, LOW);
  analogWrite(enAPin, 200);  // Adjust PWM speed here (0-255 range)

  Serial.println("Motor A forward");

  // Move motor B forward
  digitalWrite(in3Pin, HIGH);
  digitalWrite(in4Pin, LOW);
  analogWrite(enBPin, 150);  // Adjust PWM speed here (0-255 range)

  Serial.println("Motor B forward");

  delay(2000);  // Run motors forward for 2 seconds

  // Stop motor A
  digitalWrite(in1Pin, LOW);
  digitalWrite(in2Pin, LOW);
  analogWrite(enAPin, 0);

  Serial.println("Motor A stopped");

  // Stop motor B
  digitalWrite(in3Pin, LOW);
  digitalWrite(in4Pin, LOW);
  analogWrite(enBPin, 0);

  Serial.println("Motor B stopped");

  delay(1000);  // Pause for 1 second

  // Move motor A backward
  digitalWrite(in1Pin, LOW);
  digitalWrite(in2Pin, HIGH);
  analogWrite(enAPin, 180);  // Adjust PWM speed here (0-255 range)

  Serial.println("Motor A backward");

  // Move motor B backward
  digitalWrite(in3Pin, LOW);
  digitalWrite(in4Pin, HIGH);
  analogWrite(enBPin, 120);  // Adjust PWM speed here (0-255 range)

  Serial.println("Motor B backward");

  delay(2000);  // Run motors backward for 2 seconds

  // Stop motor A
  digitalWrite(in1Pin, LOW);
  digitalWrite(in2Pin, LOW);
  analogWrite(enAPin, 0);

  Serial.println("Motor A stopped");

  // Stop motor B
  digitalWrite(in3Pin, LOW);
  digitalWrite(in4Pin, LOW);
  analogWrite(enBPin, 0);

  Serial.println("Motor B stopped");

  delay(1000);  // Pause for 1 second
}
