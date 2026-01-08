# Arduino Haptic Obstacle Detector

This repository contains an Arduino sketch for a proximity detection system. It uses an ultrasonic sensor to measure distance and activates a haptic feedback mechanism (vibration motor) when an obstacle is within a specific range.

This logic is commonly used in assistive technology projects (like a "Smart Stick" for the visually impaired) or simple robot collision avoidance.

## ⚙️ Features
- **Real-time Distance Monitoring:** Continually measures distance in centimeters.
- **Haptic Alert:** Activates a vibration motor when an object is detected within **30 cm**.
- **Serial Debugging:** Outputs distance readings to the Serial Monitor (9600 baud) for easy testing.

## 🛠️ Components List

1. **Arduino Nano (or Uno)** – Microcontroller
   * *Recommended: Arduino Nano*
2. **HC-SR04 Ultrasonic Sensor** – Distance Measuring Sensor
3. **Mini Vibration Motor** – Tactile Feedback
   * *ERM vibration motor (coin or cylindrical type)*
4. **Transistor (e.g., 2N2222 or BC547)** – Motor Control
5. **1KΩ Resistor + Diode (e.g., 1N4007)** – Safety Components
6. **TP4056 Charging Module (with protection)** – Battery Charging Circuit
7. **3.7V Li-Po Battery (Rechargeable)** – Power Supply
8. **Slide Switch** – Power Control
9. **Hook-up Wires** (Male–Female + Male–Male)
10. **Breadboard or Perfboard** – Testing/Prototyping
