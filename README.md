# Odyssey Rocket


The Odyssey Rocket is a model rocket designed around accessibility, experimentation, and hands-on engineering! Built using household materials, commercially available components, and custom-made parts, it is the perfect project for aspiring engineers without the need for highly specialised equipment. 

The possibilities are endless! This model can be constructed as a relatively low-cost rocket, with the option to incorporate the Orion Flight Computer module capable of recording flight data such as atmospheric pressure and altitude. This modular approach allows the rocket to remain accessible to beginners, whilst giving them the opportunity to develop advanced skills valuable to the workplace that are FREE for students such as SolidWorks*, KiCad, and OpenRocket.


<img width="1810" height="407" alt="image" src="https://github.com/user-attachments/assets/7189b1b5-2779-4cb1-8c89-bebe811244ef" />

---

## Table of Contents

- [Features](#features)
- [System Architecture](#system-architecture)
- [Components](#components)
- [Quickstart](#quickstart)
- [PCB Design](#pcb-design)
- [Firmware](#firmware)
- [Bill of Materials](#bill-of-materials)
- [Project Status](#project-status)
- [Credits](#credits)

---


## Features

- The Orion Flight Computer, a custom PCB that will log acceleration (IMU) and altitude (barometer) data to an onboard SD card.
- 3D-printed PLA von Karman ogive nosecone, custom-fit to a 660x60mm AusPost postal tube body (2mm wall), friction fitted via a 50x55mm shoulder insert.
- Can safely be launched in a park without breaking Western Australian laws: it must not weigh more than 500g, carry no more than 25g of propellant, be within 5km of an aerodrome, nor exceed an apogee of 400 feet (121.92m).

## System Architecture

The Odyssey Rocket consists of several major subsystems:

```text
ODYSSEY ROCKET

├── Airframe
│   ├── Body tube
│   ├── Nose cone
│   └── Fins
│
├── Recovery System
│   ├── Parachute
│   ├── Shock cord
│   └── Nose-cone attachment
│
├── Propulsion
│   └── Commercial model rocket motor

└── Orion Flight Computer
    ├── Arduino Nano
    ├── MPU6050
    ├── BMP388
    ├── MicroSD storage
    └── Power regulation

```

## Components

### Airframe
- AusPost 660 × 60 mm postal tube
- 3D-printed PLA von Kármán nose cone
- Plywood fins

### Recovery System
- Parachute
- Shock cord
- Nose-cone recovery attachment

### Propulsion
- Commercial model rocket motor

### Orion Flight Computer
- Arduino Nano v3
- Adafruit MPU6050
- Adafruit BMP388
- Adafruit MicroSD breakout
- Pololu S13V10F5 5 V step-up/step-down voltage regulator
- Custom Orion Flight Computer PCB

### Firmware
- Sensor acquisition
- Relative altitude calculation
- Accelerometer and gyroscope logging
- MicroSD CSV logging
- Serial monitoring

## Quickstart

### Orion Flight Computer Simulation

The Orion Flight Computer can currently be tested through a Wokwi simulation.

The simulation is intended to validate the firmware architecture, sensor communication, altitude calculations, and MicroSD data logging before the physical avionics hardware is assembled.

#### Running the Simulation

1. Go to [Wokwi](https://wokwi.com/).
2. Open the Orion Flight Computer simulation (this can be found at [Sketch.ino](FIRMWARE/sketch.ino))
3. Start the simulation using the green play button.
4. Open the Serial Monitor.
5. Orion will initialise the simulated sensors and MicroSD card.
6. Sensor measurements and calculated flight data will begin updating.
7. Flight data is recorded to a CSV file on the simulated MicroSD card.

A successful startup should produce output similar to:

```text
================================
   ORION FLIGHT COMPUTER
      WOKWI PROTOTYPE
================================

MPU6050: OK
BMP180:  OK
SD Card: OK

Orion ready.
```


## PCB Design
See the [PCB](PCB/Documentation/PCB_OFC_2026-08-23.pdf) and the [Documentation](PCB/Documentation) folder for relevant information.

## Bill of Materials (BOM)
See [BOM](BOM/) for more information.

## Project Status
SHIPPED - AWAITING FUNDING

## Credits
- Niles55 (Reddit) for his tool on modelling Nose Cones. This served as inspiration for me to pursue the Von Karman Ogive after discerning its properties.
- HTM Workshop (YouTube) for his "KiCad Tutorial | Beginning to End" series that gave me a comprehensive understanding on how to make schematics and PCBs. 
- Amazing Automation (YouTube) for his guide on how to place a logo/decal on a PCB.
- LiterallySaltwater (Discord) for providing assistance with coding
- My Dad for his endless knowledge and support :)
