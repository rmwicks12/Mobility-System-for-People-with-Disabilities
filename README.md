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

## 🔋 Circuit Overview
Since this project uses a rechargeable Li-Po battery, the power flow is designed for portability:
- The **TP4056 module** handles safe charging of the Li-Po battery and protects it from over-discharge.
- The **Slide Switch** isolates the battery from the Arduino, allowing you to turn the device off without disconnecting wires.
- The **Transistor** acts as a digital switch. The Arduino cannot power a motor directly; instead, it sends a weak signal to the transistor base, which closes the circuit for the motor to draw power directly from the 3.7/Battery rail.
- The **Diode** (Flyback) protects the circuit from voltage spikes caused when the motor stops spinning.

## ✏️ Code Customization
You can adjust the sensitivity of the sensor by modifying the `loop` section in the code:

```cpp
// Change '30' to your preferred distance in cm
if (distance > 0 && distance <= 30) { 
    digitalWrite(motorPin, HIGH);
}
