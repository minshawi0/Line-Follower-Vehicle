**Line Follower Vehicle**

A basic autonomous robot designed to follow a predefined path using infrared (IR) sensors and microcontroller-based control. This project demonstrates fundamental concepts of automation, sensor integration, and motor control in robotics.

**Overview**
The system consists of a robotic car capable of detecting and tracking a white line on a dark surface. It continuously reads input from IR sensors and adjusts its movement in real time to remain aligned with the path.

**Components Used**

* Microcontroller: Arduino Uno
* Sensors: IR line tracking sensors
* Motors: DC motors with L298N motor driver
* Power Supply: Power bank
* Chassis: 2WD or 4WD robot chassis kit
* Additional parts: jumper wires, breadboard, wheels

**Working Principle**
IR sensors distinguish between light and dark surfaces. The control logic operates as follows:

* If the left sensor detects white, the vehicle turns left
* If the right sensor detects white, the vehicle turns right
* If both sensors detect black, the vehicle moves forward

The Arduino processes sensor inputs and sends appropriate signals to the motor driver to control the direction and speed of the motors.
