### Prerequisites

The current simulation uses:

- Arduino Nano (ATmega328P)
- MPU6050 accelerometer and gyroscope
- BMP180 barometric pressure sensor
- MicroSD card module

> **Note:** The BMP180 is used as a simulation substitute for the BMP388
> intended for the final Orion Flight Computer, as the BMP388 is not currently
> available as a standard Wokwi component.

### Running the Simulation

1. Open the Orion simulation in Wokwi.
2. Start the simulation using the green play button.
3. Open the Serial Monitor.
4. Orion will initialise each simulated component.
5. Once initialisation is complete, sensor measurements and calculated flight
   data will begin updating.
6. The simulated MicroSD card records the generated data to a CSV file.

A successful startup should produce an output similar to:

================================
   ORION FLIGHT COMPUTER
      WOKWI PROTOTYPE
================================

MPU6050: OK
BMP180:  OK
SD Card: OK

---

# Features

The current Orion firmware prototype supports:

- **Acceleration measurement** using the MPU6050.
- **Gyroscope measurement** for rotational motion sensing.
- **Barometric pressure measurement** using the simulated BMP180.
- **Relative altitude calculation** from changes in atmospheric pressure.
- **MicroSD data logging** for storing flight data in CSV format.
- **Serial monitoring** for live inspection and debugging of sensor data.
- **Reference altitude calibration** during system startup.

The final Orion hardware is intended to replace the simulated BMP180 with the
BMP388 and integrate the sensors, Arduino Nano, MicroSD storage and power
electronics into the dedicated Orion avionics system.

---

# How It Works

1. The Arduino Nano powers on and begins the Orion firmware.
2. Orion initialises the MPU6050 inertial measurement unit.
3. The barometric pressure sensor is initialised and a reference altitude is
   established.
4. The MicroSD card is initialised and a flight-data file is created.
5. Orion repeatedly samples the connected sensors.
6. Pressure measurements are converted into relative altitude measurements.
7. Acceleration, gyroscope and altitude data are processed by the Arduino Nano.
8. The resulting data is written to the MicroSD card as a CSV file.
9. Data is also displayed through the Serial Monitor during simulation for
   testing and debugging.

The basic data flow is:

MPU6050 ────────┐
                │
Barometer ──────┼──> Arduino Nano ───> Flight calculations
                │                         │
                │                         ├──> Serial Monitor
                │                         │
                │                         └──> MicroSD / CSV
                │
Power System ───┘

---

# Simulation and Final Hardware

The Wokwi implementation represents a **software prototype** of Orion rather
than a complete simulation of the final avionics hardware.

Some components of the final system, including the BMP388 barometer and Pololu
power regulation hardware, are not represented directly in the current
simulation. These components will be validated using the physical Orion
hardware once the required components have been procured.

The simulation therefore primarily validates:

- Firmware execution
- Sensor communication
- Data acquisition
- Altitude calculations
- MicroSD data logging
- Overall software architecture

Physical testing will subsequently be used to validate electrical integration,
sensor accuracy, power delivery and operation of the complete avionics system.
