# 3D Printed Prosthetic Arm Controlled by EMG Signals

This project demonstrates the design and implementation of a 3D-printed prosthetic arm that mimics human arm movements. The system utilizes an **EMG sensor**, **servo motors**, and an **Arduino microcontroller** to translate muscle activity into motion.

## Features

- **Muscle Activity Detection**: An EMG sensor reads the electrical activity of muscles.
- **Smooth Movement**: Servo motors precisely control the prosthetic fingers.
- **Custom Design**: The prosthetic arm is 3D-printed, lightweight, and customizable.
- **Real-Time Feedback**: Visualize the EMG values in the Serial Monitor.

## Components Used

1. **Hardware**:
   - 3D-printed prosthetic arm
   - Arduino board (e.g., Arduino Uno)
   - EMG sensor module
   - 4 x Servo motors
   - Jumper wires
   - Power supply or battery

2. **Software**:
   - Arduino IDE
   - Servo library (pre-installed in the Arduino IDE)

## Circuit Diagram

### Connections
| Arduino Pin | Component          | Description            |
|-------------|--------------------|------------------------|
| A0          | EMG Sensor Signal  | Reads muscle activity  |
| 9           | Servo Motor 1 PWM  | Controls one finger    |
| 8           | Servo Motor 2 PWM  | Controls one finger    |
| 10          | Servo Motor 3 PWM  | Controls one finger    |
| 11          | Servo Motor 4 PWM  | Controls one finger    |

## Installation

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/AkshayAnilkmr/prosthetic-arm.git
   cd prosthetic-arm
