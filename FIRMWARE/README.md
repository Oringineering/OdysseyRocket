# Orion Flight Computer Firmware

This folder contains the firmware developed for the **Orion Flight Computer**, the avionics system used in the Odyssey Rocket project.

The firmware is responsible for collecting flight data from the onboard sensors, calculating useful flight parameters such as altitude, and storing the recorded data on a MicroSD card for later analysis.

The current version has been tested virtually using Wokwi while the physical avionics components are awaiting procurement.

---

## Current Prototype

The current firmware prototype uses:

- **Arduino Nano v3**
  - ATmega328P microcontroller
  - Runs the Orion firmware and manages sensor communication and data logging

- **MPU6050**
  - 3-axis accelerometer
  - 3-axis gyroscope
  - Communicates with the Arduino using I²C

- **BMP180**
  - Barometric pressure and temperature sensor
  - Used only in the Wokwi simulation
  - Provides pressure data used to calculate relative altitude

- **MicroSD Card Module**
  - Stores flight data as a CSV file
  - Communicates with the Arduino using SPI

> **Note:** The BMP180 is only being used as a simulation substitute because the BMP388 is not currently available as a standard Wokwi component.

---

## Final Hardware

The intended Orion Flight Computer hardware uses:

- Arduino Nano v3
- Adafruit MPU6050
- Adafruit BMP388
- Adafruit MicroSD breakout
- Pololu S13V10F5 5 V step-up/step-down voltage regulator

The BMP388 will replace the BMP180 used in the simulation.

The Pololu regulator and other power components are not represented in the Wokwi simulation because the current simulation is intended primarily to validate the firmware and data flow.

---

## Firmware Functions

The current firmware performs the following functions:

- Initialises the MPU6050
- Initialises the barometric pressure sensor
- Initialises the MicroSD card
- Establishes a reference altitude during startup
- Reads acceleration in the X, Y and Z directions
- Reads angular velocity from the gyroscope
- Reads atmospheric pressure
- Reads temperature
- Calculates relative altitude
- Outputs live data through the Serial Monitor
- Records flight data to a CSV file
- Periodically flushes data to the MicroSD card to reduce the risk of data loss

---

## Data Flow

The Orion firmware follows the general data flow shown below:

```text
MPU6050 ─────────────┐
                     │
Barometer ────────────┼──> Arduino Nano
                     │        │
                     │        ├──> Flight calculations
                     │        │
                     │        ├──> Serial Monitor
                     │        │
                     │        └──> MicroSD Card
                     │
Power System ────────┘
