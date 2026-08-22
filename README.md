# Odyssey Rocket


The Odyssey Rocket is a model rocket designed around accessibility, experimentation, and hands-on engineering! Built using household materials, commercially available components, and custom-made parts, it is the perfect project for aspiring engineers without the need for highly specialised equipment. 

The possibilities are endless! This model can be constructed as a relatively low-cost rocket, with the option to incorporate the Orion Flight Computer module capable of recording flight data such as atmospheric pressure and altitude. This modular approach allows the rocket to remain accessible to beginners, whilst giving them the opportunity to develop advanced skills valuable to the workplace that are FREE for students such as SolidWorks*, KiCad, and OpenRocket.


<img width="1810" height="407" alt="image" src="https://github.com/user-attachments/assets/7189b1b5-2779-4cb1-8c89-bebe811244ef" />


## Table of Contents:
- [Features](#Features)



# Features


- The Orion Flight Computer, a custom PCB that will log acceleration (IMU) and altitude (barometer) data to an onboard SD card.
- 3D-printed PLA von Karman ogive nosecone, custom-fit to a 660x60mm AusPost postal tube body (2mm wall), friction fitted via a 50x55mm shoulder insert.
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

Rocket Body
- PLA von Karman (Haack series) nose cone
- AusPost 660x60mm Postal Tube
- Plywood Fins

## PCB Design

Below is a schematic for the avionics computer. PCB configuration will commence soon.
<img width="1255" height="861" alt="image" src="https://github.com/user-attachments/assets/a29bdd92-52ac-4ebd-977f-1abfb3b48f3d" />

I also began doing the KiCad footprints for the required components I will be incorporating into the PCB.
<img width="1308" height="457" alt="image" src="https://github.com/user-attachments/assets/198b8696-6429-4f98-998c-28d389650036" />





## How it Works

## Motivation for Construction
I want to build projects that test my understanding of the world around me. There's only a finite time on Earth, so why not try it all? As such, I was motivated by a strong willingness to learn industry standard software — SolidWorks, OpenRocket, and KiCad — alongside physical processes — soldering, product assembly, and calculations to determine aerodynamics. As a First-Year Engineering Student, I hope to apply these newly learned skills in my future endeavours!

## Bill of Materials (BOM)
https://github.com/Oringineering/OdysseyRocket/blob/main/BOM.md

## Credits
- Niles55 (Reddit) for his tool on modelling Nose Cones. This served as inspiration for me to pursue the Von Karman Ogive after discerning its properties.
- HTM Workshop (YouTube) for his "KiCad Tutorial | Beginning to End" series that gave me a comprehensive understanding on how to make schematics and PCBs. 
- Amazing Automation (YouTube) for his guide on how to place a logo/decal on a PCB. 
