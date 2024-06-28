# Arduino Uno H-Bridge Module Control

#### Project Overview

This project demonstrates how to control two DC motors using an Arduino Uno and an H-Bridge module. The H-Bridge allows bi-directional control of the motors, enabling them to move forward and backward with varying speeds using PWM (Pulse Width Modulation).

#### Components Needed

- **Arduino Uno**
- **H-Bridge Module (L298N or similar)**
- **Two DC Motors**
- **Power Supply (for motors)**
- **Jumper Wires**

#### Block diagram


#### Circuit Setup

1. **Connections to H-Bridge Module:**

   - **Motor A:**
     - **in1Pin (H-Bridge):** Connected to Arduino pin 8
     - **in2Pin (H-Bridge):** Connected to Arduino pin 9
     - **enAPin (H-Bridge):** Connected to Arduino pin 6 (PWM for speed control)

   - **Motor B:**
     - **in3Pin (H-Bridge):** Connected to Arduino pin 10
     - **in4Pin (H-Bridge):** Connected to Arduino pin 11
     - **enBPin (H-Bridge):** Connected to Arduino pin 5 (PWM for speed control)

   - **Power Supply Connections:**
     - Connect the Vcc and GND of the H-Bridge to an external power source suitable for your motors.

#### Instructions

1. **Circuit Setup:**
   - Connect the H-Bridge module and motors to the Arduino Uno as per the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Uno.
   - Open the serial monitor with a baud rate of 9600 to monitor motor operations.
   - The motors will alternate between moving forward, stopping, and moving backward as programmed.

#### Applications

- **Robotics Projects:** Ideal for controlling movement in robotic platforms.
- **Automation:** Use in projects requiring precise motor control for mechanical devices.
- **Educational Purposes:** Learn about H-Bridge operation and motor control principles.

#### Notes

- Ensure all connections are secure and correct to prevent damage to the Arduino or motors.
- Adjust PWM values in the code to control motor speed effectively based on your project requirements.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-uno-h-bridge-module)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted with ❤️ by ProjectsLearner