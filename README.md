# Odyssey Rocket


The Odyssey Rocket is a model rocket designed around accessibility, experimentation, and hands-on engineering! Built using household materials, commercially available components, and custom-made parts, it is the perfect project for aspiring engineers without the need for highly specialised equipment. 

The possibilities are endless! This model can be constructed as a relatively low-cost rocket, with the option to incorporate the Orion Flight Computer module capable of recording flight data such as atmospheric pressure and altitude. This modular approach allows the rocket to remain accessible to beginners, whilst giving them the opportunity to develop advanced skills valuable to the workplace that are FREE for students such as SolidWorks*, KiCad, and OpenRocket.


<img width="1781" height="436" alt="image" src="https://github.com/user-attachments/assets/cc69924d-cd73-4ff5-975a-2b057c3f5a8c" />


---

## Table of Contents

- [Features](#features)
- [System Architecture](#system-architecture)
- [Components](#components)
- [Quickstart](#quickstart)
- [PCB Design](#pcb-design)
- [Bill of Materials](#bill-of-materials)
- [Project Status](#project-status)
- [Credits](#credits)

---


## Features

- The Orion Flight Computer, a custom nose-cone-mounted PCB that will log acceleration (IMU) and altitude (barometer) data to an onboard MicroSD card, with static-pressure vent holes allowing the BMP388 to measure external atmospheric pressure accurately.
- 3D-printed PLA von Kármán ogive nose cone, custom-fit to a 660 × 60 mm AusPost postal tube body, with a 55 mm shoulder designed to fit securely within the body tube.
- Designed to remain within applicable Western Australian model-rocket operating limits, including a maximum launch mass of 500 g, no more than 25 g of propellant, operation within 5 km of an aerodrome, and an apogee not exceeding 400 ft (121.92 m).


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
│
└── Orion Flight Computer
    ├── Nose-cone avionics bay
    ├── Static-pressure vent holes
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

 > **Funding Note:** Rocket motors are excluded from the current funding request. The Estes E12-4 remains the selected propulsion option for the OpenRocket design and simulations but will be supplied separately.

### Orion Flight Computer
- Arduino Nano v3
- Adafruit MPU6050
- Adafruit BMP388
- Adafruit MicroSD breakout
- Pololu S13V10F5 5 V step-up/step-down voltage regulator
- Custom Orion Flight Computer PCB
- 3D-printed nose-cone avionics housing
- Static-pressure vent holes for BMP388 atmospheric pressure measurements

### Firmware
- Sensor acquisition
- Relative altitude calculation
- Accelerometer and gyroscope logging
- MicroSD CSV logging
- Serial monitoring

## Quickstart

Odyssey currently includes two different simulations:

- the **Orion Flight Computer simulation**, which runs through Wokwi
- the **Odyssey Flight Simulation**, which runs as an interactive HTML page generated from OpenRocket flight data

---

### Orion Flight Computer Simulation

The Orion Flight Computer can currently be tested virtually using Wokwi.

This simulation is intended to validate the firmware architecture, sensor communication, altitude calculations, and MicroSD data logging before the physical avionics hardware is assembled.

#### Running the Orion Simulation

1. Go to [Wokwi](https://wokwi.com/).
2. Open or create an Arduino Nano project.
3. Use the files contained in the [`FIRMWARE`](FIRMWARE/) folder.
4. Load the supplied:
   - `sketch.ino`
   - `diagram.json`
   - `libraries.txt`
5. Start the simulation using the green play button.
6. Open the Serial Monitor.
7. Orion will initialise the simulated sensors and MicroSD card.
8. Sensor measurements and calculated flight data will begin updating.

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

> **Note:** The Wokwi simulation uses a BMP180 as a substitute for the BMP388 intended for the final Orion Flight Computer.

Further information can be found in the [Firmware documentation](FIRMWARE/README.md).

---
### Odyssey Rocket Flight Simulation

The Odyssey Rocket Flight Simulation is an interactive browser-based replay generated from the current OpenRocket flight data.

[**Launch the Odyssey Rocket Flight Simulation**](https://oringineering.github.io/OdysseyRocket/SIMULATION/)

The simulation displays:

- Altitude
- Total velocity
- Vertical velocity
- Acceleration
- Thrust
- Lateral distance
- Liftoff
- Motor burnout
- Apogee
- Recovery deployment
- Ground impact

It also includes:

- Play and pause controls
- Restart control
- Timeline scrubbing
- Live flight values
- Flight-event tracking

No additional software is required. The simulation runs directly in a modern web browser.

> **Note:** The Odyssey Rocket Flight Simulation is a visual replay of OpenRocket-generated simulation data. It does not represent measured data from a physical launch.

---

#### Running the Flight Simulation Locally

The simulation can also be run locally.

1. Download or clone the Odyssey Rocket repository.
2. Open the `SIMULATION` folder.
3. Locate `index.html`.
4. Double-click the file.

The simulation should automatically open in your default web browser.

Because the simulation is completely self-contained, it does not require an internet connection once the repository has been downloaded.

## PCB Design
See the [PCB](PCB/Documentation/PCB_OFC_2026-08-23.pdf) and the [Documentation](PCB/Documentation) folder for relevant information.

## Bill of Materials
See [BOM](BOM/) for more information.

## Project Status
AWAITING FUNDING

## Credits
- Niles55 (Reddit) for his tool on modelling Nose Cones. This served as inspiration for me to pursue the Von Karman Ogive after discerning its properties.
- HTM Workshop (YouTube) for his "KiCad Tutorial | Beginning to End" series that gave me a comprehensive understanding on how to make schematics and PCBs. 
- Amazing Automation (YouTube) for his guide on how to place a logo/decal on a PCB.
- LiterallySaltwater (Discord) for providing assistance with coding
- My Dad for his endless knowledge and support :)
