# Automated Roller Blinds with Arduino

This project is an automated roller blind system built using an Arduino Uno, a NEMA 17 stepper motor, and a DS3231 RTC module. The system offers both manual control through buttons and time-based automation, allowing the blinds to raise and lower at predefined times. This project is designed with modularity and scalability in mind to enable additional features in the future.

**Note: This project is currently in development. Some features may be incomplete or subject to change.**

## Features

- **Manual Control**: Two buttons allow manual raising and lowering of the blinds.
- **Time-Based Automation**: The blinds automatically lower at 00:00 and raise at 08:00.
- **Non-Blocking Code**: Uses `millis()` and `micros()` for smooth, non-blocking motor control, ensuring the system remains responsive to button presses and time checks.
- **Modularity**: Code is separated into header, source, and main files for better structure, making it easier to maintain and expand.
- **Future-Ready**: The code structure allows easy addition of features, such as light-based automation or mobile app integration.

## Hardware Requirements

- Arduino Uno
- NEMA 17 Stepper Motor
- A4988 Motor Driver
- DS3231 Real-Time Clock (RTC) Module
- 2 Push Buttons
- External 12V Power Supply for the Stepper Motor
