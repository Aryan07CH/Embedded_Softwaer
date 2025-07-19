# Software Document: Indicators Control Over Mobile Phones (BLE Protocol)

## 1. High-Level Architecture and Software Requirement Specification

### 1.1. Overview

This document details the software design for a vehicle indicator control module. The system manages the vehicle's left and right indicators based on user input from physical push buttons and a mobile application connected via Bluetooth Low Energy (BLE)[cite: 39]. [cite_start]The software is architected to be modular and scalable, with a clear separation between the base software (drivers) and the application logic.

### 1.2. High-Level Hardware Architecture

The system is centered around a microcontroller that interfaces with various peripherals:
* **Microcontroller (MCU):** The core of the system.
* **Push Buttons:** Two buttons for left and right indicator control, connected to GPIO pins.
* **LEDs:** Two LEDs for left and right indicators, driven by PWM outputs.
* **BLE Module:** For communication with a mobile app.
* **UART to USB Converter:** For logging debug information.

### 1.3. High-Level Software Architecture

The software is designed in a layered architecture:
* **Base Software (C Language):** Contains drivers for GPIO, PWM, UART, and Timers. This layer is responsible for direct hardware control.
* **Application Layer (MATLAB Simulink):** Contains the core logic for indicator engagement and disengagement.The C code is auto-generated from a Simulink model.
* **Scheduler:** A 100ms scheduler calls tasks from both layers.

### 1.4. Software Requirement Specification (SRS)

#### Functional Requirements

* **FR-01:** A 1-second press of a button is required to change an indicator's state.
* **FR-02:** Pressing the left button turns the left indicator ON/OFF or switches from the right indicator.
* **FR-03:** Pressing the right button turns the right indicator ON/OFF or switches from the left indicator.
* **FR-04:** A simultaneous 1-second press of both buttons activates Hazard mode.A subsequent 1-second press of either button deactivates it.
* **FR-05:** Active indicators must toggle the LED(s) ON-OFF every 300 milliseconds.
* **FR-06:** The system must support indicator control via BLE from a mobile phone.
* **FR-07:** Button press events, LED power status, and indicator status must be published over UART.
* **FR-08:** A button press must generate only a single signal, even if held down.

#### Non-Functional Requirements

* **NFR-01:** Base software must be in C.
* **NFR-02:** Application software must be developed in MATLAB Simulink.
* ite_start]**NFR-03:** A 100ms scheduler shall be used for all tasks[cite: 30].
