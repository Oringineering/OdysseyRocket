# Odyssey Rocket

<img width="1810" height="407" alt="image" src="https://github.com/user-attachments/assets/7189b1b5-2779-4cb1-8c89-bebe811244ef" />

A scratch-built model rocket with a von Karman ogive nosecone housing a dedicated avionics bay for flight data logging and recovery.


## Features (WIP - TBD)
- The Orion Flight Computer, a custom PCB that will serve as a point of data collection throughout the duration of the flight. 
(Everything is a WIP at the moment)
- 3D-printed PLA von Karman ogive nosecone, custom-fit to a 660x60mm AusPost postal tube body (2mm wall), friction fitted via a 50x55mm shoulder insert.
- Removable avionics bay housed in the nosecone, isolated from the body tube for easy access between flight attempts.
- TBD (Arduino or ESP32) flight computer logging acceleration (IMU) and altitude (barometer) to an onboard SD card.
- TBD Companion App (parse logged CSV and plot altitude, acceleration and apogee after recovery).
- Can safely be launched in a park without breaking Western Australian laws: it must not weigh more than 500g, carry no more than 25g of propellant, be within 5km of an aerodrome, nor exceed an apogee of 400 feet (121.92m).
  
(PLACEHOLDER LINK TO TRY THE PROJECT VIA SIMULATION)

## Components
Avionics Bay
- Arduino Nano v3
- Adafruit MPU6050 6-DoF Accelerometer and Gyro PCB
- Adafruit MicroSD card breakout board+
- Adafruit BMP388 - Precision Barometric Pressure and Altimeter - STEMMA QT
- Pololu 5V Step-Up/Step-Down Voltage Regulator S13V10F5 

## PCB Design

Below is a schematic for the avionics computer. PCB configuration will commence soon.
<img width="1255" height="861" alt="image" src="https://github.com/user-attachments/assets/a29bdd92-52ac-4ebd-977f-1abfb3b48f3d" />

I also began doing the KiCad footprints for the required components I will be incorporating into the PCB.
<img width="1308" height="457" alt="image" src="https://github.com/user-attachments/assets/198b8696-6429-4f98-998c-28d389650036" />





## How it Works

## Motivation for Construction
When it comes to designing projects like these, it's all about discovery and learning new processes to determine intuitive answers to problems around us. I was motivated by a strong willingness to learn industry standard software — SolidWorks, OpenRocket, and KiCad — alongside physical processes — soldering, product assembly, and calculations to determine aerodynamics. As a First-Year Engineering Student, I hope to apply these newly learned skills in my future endeavours!

## Bill of Materials (BOM)
https://github.com/Oringineering/OdysseyRocket/blob/main/BOM.md

## Credits
