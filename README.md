# Motor Control Using H-Bridge Module and Potentiometer with Arduino UNO

#### Project Overview

This project demonstrates how to control the speed and direction of a DC motor using an H-Bridge module, a potentiometer, and a button with an Arduino UNO. The motor's speed is adjusted using the potentiometer, and the rotation direction is toggled using the button.

#### Components Needed

1. **Arduino UNO Board**
2. **H-Bridge Motor Driver Module (such as L298N)**
3. **DC Motor**
4. **Potentiometer**
5. **Button**
6. **Breadboard**
7. **Jumper Wires**

#### Block Diagram

![H-Bridge Motor Control Diagram](h_bridge_motor_control_diagram.png)

#### Circuit Wiring

1. **H-Bridge Motor Driver:**
   - Connect pin `enA` to digital pin 9 on the Arduino (PWM pin).
   - Connect pin `in1` to digital pin 6 on the Arduino.
   - Connect pin `in2` to digital pin 7 on the Arduino.
   - Connect the motor terminals to the motor output pins of the H-Bridge module.
   - Connect the H-Bridge module’s VCC and GND to an appropriate power source.

2. **Potentiometer:**
   - Connect the middle pin of the potentiometer to the analog pin A0 on the Arduino.
   - Connect the other two pins of the potentiometer to 5V and GND on the Arduino.

3. **Button:**
   - Connect one pin of the button to digital pin 4 on the Arduino.
   - Connect the other pin of the button to GND.

#### Instructions

1. **Set Up the Circuit:**
   - Assemble the circuit according to the wiring instructions.
   - Ensure all connections are secure and components are correctly placed on the breadboard.

2. **Upload the Code:**
   - Copy and paste the provided code into the Arduino IDE.
   - Verify and upload the code to your Arduino board.

3. **Observe the Motor Control:**
   - Turn the potentiometer to adjust the motor speed.
   - Press the button to toggle the rotation direction of the motor.

- **Pin Definitions:**
  - `enA`, `in1`, and `in2` are defined for motor control.
  - `button` is defined for the input button.

- **Setup Function:**
  - Initializes the motor control pins as outputs and the button pin as an input with an internal pull-up resistor.
  - Sets the initial motor rotation direction.
  - Begins serial communication at a baud rate of 9600.

- **Loop Function:**
  - Reads the potentiometer value and maps it to a PWM range of 0 to 255.
  - Sends the PWM signal to control the motor speed via the H-Bridge's enable pin.
  - Reads the button state to check for a press.
  - Implements debouncing to avoid false triggers.
  - Toggles the motor rotation direction and prints the current direction to the Serial Monitor for debugging.

#### Applications

- **Robotics:** Use this setup to control the speed and direction of motors in robotic applications.
- **Automation Systems:** Implement in automated systems where variable motor control is required.
- **Prototyping:** Useful for prototyping projects that require precise motor control.

---

## Made for you with ❣️ from ProjectsLearner

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)### Motor Control Using H-Bridge Module and Potentiometer with Arduino UNO

#### Project Overview

This project demonstrates how to control the speed and direction of a DC motor using an H-Bridge module, a potentiometer, and a button with an Arduino UNO. The motor's speed is adjusted using the potentiometer, and the rotation direction is toggled using the button.

#### Components Needed

1. **Arduino UNO Board**
2. **H-Bridge Motor Driver Module (such as L298N)**
3. **DC Motor**
4. **Potentiometer**
5. **Button**
6. **Breadboard**
7. **Jumper Wires**

#### Block Diagram

![H-Bridge Motor Control Diagram](h_bridge_motor_control_diagram.png)

#### Circuit Wiring

1. **H-Bridge Motor Driver:**
   - Connect pin `enA` to digital pin 9 on the Arduino (PWM pin).
   - Connect pin `in1` to digital pin 6 on the Arduino.
   - Connect pin `in2` to digital pin 7 on the Arduino.
   - Connect the motor terminals to the motor output pins of the H-Bridge module.
   - Connect the H-Bridge module’s VCC and GND to an appropriate power source.

2. **Potentiometer:**
   - Connect the middle pin of the potentiometer to the analog pin A0 on the Arduino.
   - Connect the other two pins of the potentiometer to 5V and GND on the Arduino.

3. **Button:**
   - Connect one pin of the button to digital pin 4 on the Arduino.
   - Connect the other pin of the button to GND.

#### Instructions

1. **Set Up the Circuit:**
   - Assemble the circuit according to the wiring instructions.
   - Ensure all connections are secure and components are correctly placed on the breadboard.

2. **Upload the Code:**
   - Copy and paste the provided code into the Arduino IDE.
   - Verify and upload the code to your Arduino board.

3. **Observe the Motor Control:**
   - Turn the potentiometer to adjust the motor speed.
   - Press the button to toggle the rotation direction of the motor.


- **Pin Definitions:**
  - `enA`, `in1`, and `in2` are defined for motor control.
  - `button` is defined for the input button.

- **Setup Function:**
  - Initializes the motor control pins as outputs and the button pin as an input with an internal pull-up resistor.
  - Sets the initial motor rotation direction.
  - Begins serial communication at a baud rate of 9600.

- **Loop Function:**
  - Reads the potentiometer value and maps it to a PWM range of 0 to 255.
  - Sends the PWM signal to control the motor speed via the H-Bridge's enable pin.
  - Reads the button state to check for a press.
  - Implements debouncing to avoid false triggers.
  - Toggles the motor rotation direction and prints the current direction to the Serial Monitor for debugging.

#### Applications

- **Robotics:** Use this setup to control the speed and direction of motors in robotic applications.
- **Automation Systems:** Implement in automated systems where variable motor control is required.
- **Prototyping:** Useful for prototyping projects that require precise motor control.

---

## Made for you with ❣️ from ProjectsLearner

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)
