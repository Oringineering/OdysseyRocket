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
- [Bill of Materials](#Bill-of-Materials-(BOM))
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

### Odyssey Flight Simulation

The repository also includes an interactive browser-based simulation of the Odyssey Rocket flight.

The simulation is based on data exported from the current OpenRocket model and displays:

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

The simulation also includes:

- Play and pause controls
- Restart control
- Timeline scrubbing
- Live flight values
- Flight-event tracking

### 🚀 Launch the Odyssey Flight Simulation

[**Launch the Odyssey Flight Simulation**](https://oringineering.github.io/OdysseyRocket/Simulation/)

> **Note:** The Odyssey Flight Simulation is a visual replay of OpenRocket-generated simulation data. It does not represent measured data from a physical launch.

---

#### Running the Flight Simulation Locally

The HTML simulation can also be run locally without any special software.

1. Download or clone the Odyssey Rocket repository.
2. Open the `Simulation` folder.
3. Locate:

```text
index.html
```

4. Double-click `index.html`.

The simulation should automatically open in your default web browser.

Alternatively:

1. Right-click `index.html`.
2. Select **Open with**.
3. Choose a modern browser such as:
   - Google Chrome
   - Microsoft Edge
   - Firefox
   - Safari

Because the simulation is completely self-contained, it does not require an internet connection once the repository has been downloaded.

---

#### Hosting the Flight Simulation with GitHub Pages

The simulation can be hosted publicly through GitHub Pages.

The file should be stored as:

```text
Simulation/
└── index.html
```

Then:

1. Open the Odyssey Rocket repository on GitHub.
2. Go to **Settings → Pages**.
3. Under **Build and deployment**, select:

```text
Source: Deploy from a branch
Branch: main
Folder: / (root)
```

4. Save the configuration.
5. Wait for GitHub Pages to deploy the repository.

The simulation will then be available at:

[https://oringineering.github.io/OdysseyRocket/Simulation/](https://oringineering.github.io/OdysseyRocket/Simulation/)

This public link can also be added directly to Linktree --> https://linktr.ee/oringineering

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
