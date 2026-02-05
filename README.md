# 🚗 Voice-Controlled Robot Car

An Arduino-based robotic vehicle that uses **Bluetooth communication** to process voice commands from a smartphone. This project demonstrates the integration of mobile-to-hardware interfaces, motor control, and wireless serial communication.

---

## 🏗️ System Architecture
The system works by receiving voice input from an Android app, which is converted to text and sent via Bluetooth to the Arduino. The Arduino then interprets these strings to trigger specific motor sequences.



---

## 🛠️ Hardware Components
* **Microcontroller:** Arduino Uno
* **Bluetooth:** HC-05 / HC-06 Module
* **Motor Driver:** L298N Dual H-Bridge
* **Motors:** 2 x 5V-9V Toy DC Motors
* **Power:** 9V Battery or Li-ion Cell pack
* **Chassis:** 2-Wheel or 4-Wheel Robot Kit

---

## 🔌 Connection Map

### 1. Bluetooth (HC-05) to Arduino
| HC-05 Pin | Arduino Pin | Description |
| :--- | :--- | :--- |
| **TX** | Pin 10 | SoftwareSerial RX |
| **RX** | Pin 11 | SoftwareSerial TX |
| **VCC** | 5V | Power |
| **GND** | GND | Ground |

### 2. Motor Driver (L298N) to Arduino
| L298N Pin | Arduino Pin | Function |
| :--- | :--- | :--- |
| **IN1** | Pin 3 | Motor A Forward |
| **IN2** | Pin 4 | Motor A Backward |
| **IN3** | Pin 5 | Motor B Forward |
| **IN4** | Pin 6 | Motor B Backward |

> **Note:** Ensure a common ground (GND) between the Arduino and the L298N battery source.

---

## 🚀 Getting Started

1.  **Clone the Repo:**
    ```bash
    git clone [https://github.com/your-username/voice-controlled-car.git](https://github.com/your-username/voice-controlled-car.git)
    ```
2.  **Upload the Code:**
    * Open the `.ino` file in the **Arduino IDE**.
    * Select your board (Arduino Uno) and port.
    * Click **Upload**.
3.  **App Setup:**
    * Install a "Bluetooth Voice Control" app on Android.
    * Connect to the HC-05 module (Pairing code: `1234`).
    * Use the commands: `forward`, `back`, `left`, `right`, and `stop`.


