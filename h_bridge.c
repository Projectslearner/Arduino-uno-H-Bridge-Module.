/*
    Project name : Motor Control Using H-Bridge Module and Potentiometer with Arduino UNO
    Modified Date: 08-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-h-bridge-module
*/

#define enA 9
#define in1 6
#define in2 7
#define button 4

int rotDirection = 0;
bool pressed = false;
unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(button, INPUT_PULLUP);  // Use internal pull-up resistor

  // Set initial rotation direction
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(A0); // Read potentiometer value
  int pwmOutput = map(potValue, 0, 1023, 0 , 255); // Map the potentiometer value from 0 to 255
  analogWrite(enA, pwmOutput); // Send PWM signal to L298N Enable pin

  int buttonState = digitalRead(button);

  if (buttonState == LOW && (millis() - lastDebounceTime) > debounceDelay) {
    lastDebounceTime = millis();  // Reset the debouncing timer

    pressed = !pressed;  // Toggle the pressed state

    if (pressed) {
      // Change rotation direction
      rotDirection = !rotDirection;

      if (rotDirection) {
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
      } else {
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
      }
      
      // Print to serial monitor for debugging
      Serial.print("Rotation direction: ");
      Serial.println(rotDirection ? "Forward" : "Reverse");
    }
  }
}
