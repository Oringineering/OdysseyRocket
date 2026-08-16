---
Title: Odyssey Rocket
Author: Orin Gibson
Description: A rocket prototype...but I know nothing about rockets or the software that can be utilised to make it.
Creation_Date: 01-08-2026 (DD/MM/YY)
---

### Total Time Spent: X hours

##Week 1
-----

# Day 1 - Learning Bit by Bit (35 minutes)
I just spent the first day familiarising myself with  industry software, such as SolidWorks, to prepare me for the CAD work that I would have to do for components such as the nose cone and other internal components that would later have to be 3D printed.

# Day 2 - Body Schematics and Design (1 hour 39 minutes)
I introduced myself to OpenRocket, an open-source software that lets you visualise your rocket and run simulations on it. I managed to grasp a basic understanding of how the software works: you select the components you want for your rocket as well as determining the appropriateness of certain features to optimise factors like stability, CP (centre of pressure), and CG (centre of gravity). Something that I initially struggled with was producing a stable rocket. From what I later discerned (https://www.spacecad.com/posts/model-rocket-stability-prediction/), that my calibre (stability-wise) was not optimal and was why the rocket was underperforming in simulations. I had a .cal of over 2.8 initially thinking that the higher the .cal the more stable the rocket would be, but this would only eventuate to poorer aerodynamics. 

# Day 3 - Functionality Refinements (1 hour 28 minutes)
This day was spent rectifying the blunders made on Day 2. With newfound awareness and a strong resolve to improve upon yesterday's faults, I put my head down and got working. This tutorial really made me think: https://www.youtube.com/watch?v=oqe0lTp1WH0&list=PLulIhjxR7aZQ4coWt7MRHb4xt9wz0Fz6h. I had no idea about the purpose of a shoulder (links the nose cone to the rocket body) and tabs (the components that stick inside the rocket to ground the rocket). With these implementations taken into consideration, my model became FAR more stable and it was truly nice to see this unfurl. 

Another thing I didn't consider was the length of my nose cone. Originally, I had it set to 22x6cm but realised that if I were to use a local 3D printer, these dimensions may be outside of the build height when taking into account the 5.5cm long shoulder. 27.5cm in length exceeds a load of the basic entry level printers like the Ender V3 so I had to make a compromise. The logic behind the 22cm nose cone was that it would be in a 3:1 ratio with the rocket's body to mitigate drag. However, this was flawed as I am constructing a transonic rocket that will allow me to launch it within local regulations and freely without a permit (cannot be launched higher than 120m...etc, etc), so drag would not be a massive concern for a build that isn't even high powered. 

With these limitations in place, I settled for a nose cone length of 18cm. It won't mitigate drag as the original design, but it is sufficiently long to the point where that shouldn't be much of a problem. 23.5cm of total length including the shoulder would permit it to print on an entry level 3D printer with a maximum build height of 24.5-25cm. 
 
# Day 4 - Schematic Design (4 hours 16 minutes)
I started my work on KiCad today. KiCad was a new challenge because it is far from my strong suit. Nonetheless, it was a journey filled with amazing discoveries. 
To begin, I watched a tutorial series on how to create a schematic in KiCad. I started by assembling all the individual parts: a standard MPU6050, Adafruit BMP388, alongside an Arduino Nano v3 from the component library KiCad has.  For just the aforesaid component, I switched the function of Pin 28 to ensure that it wouldn't break any of KiCad's Electrical Rules Check (ERS).

I felt outrageously proud because I never expected to learn this process, but it feels rather good that I am familiar with all this new terminology and processes! 

# Day 5 - Schematic Improvement (3 hours 33 minutes)
I realised that my flight computer did not have the required components it needed to be operational and contain the functionalities I wanted it to have. It didn't have a MicroSD module nor a voltage regulator that would permit the usage of a 5V Arduino Nano v3 alongside components that operated on a lower voltage. My assumption here was that if I didn't have the voltage regulator, the other components would get fried. This would've been a tragic mistake. So the new additions consisted of an Adafruit MicroSD breakout board + and the Pololu 5V Step-Up/Step-Down Voltage Regulator S13V10F5.

My reasoning for choosing these products is that they mostly have excellent documentation and were readily accessible compared to other manufacturers who would take months to manufacture these parts. I settled on a name as well, the Orion Flight Computer. The reason? I loved space a lot as a kid and Orion was really close to my name, Orin. As mentioned, prior but not explicitly, the flight computer contains: an IMU (inertial measurement unit), barometer, MicroSD module (for data logging), voltage regulator (to handle how different components operate at different voltages), as well as the Arduino of course. 

I based the component schematics off technical designs under Adafruit's respective Eagle files on each parts' repository. For the other components (excluding the IMU) I managed to source them from their respective websites/GitHub repositories. After each component was created, I put them into the overall schematic design. This marked a successful implementation, but there were some underlying mistakes nonetheless.

# Day 6 - Schematic Finalisation (2 hours 10 minutes)
I revised the individual schematics, and I realised that the IMU wasn't well documented enough, and that I would be eye balling measurements. I settled on the Adafruit MPU6050 IMU, so I had to redo the IMU schematic as Adafruit's version contains 12 pins (6 on either side) compared to the industry standard 6 pins on one side only. With this finalised, I shifted my focus to creating the individual footprints for the components. 
