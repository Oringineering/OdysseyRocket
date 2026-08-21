---
Title: Odyssey Rocket
Author: Orin Gibson
Description: A rocket prototype...but I know nothing about rockets or the software that can be utilised to make one.
Creation_Date: 01-08-2026 (DD/MM/YY)
---

### Total Time Spent: ~23 hours


# Day 1 - Learning Bit by Bit (35 minutes)
I just spent the first day familiarising myself with  industry software, such as SolidWorks, to prepare me for the CAD work that I would have to do for components such as the nose cone and other internal components that would later have to be 3D printed.
<img width="622" height="359" alt="image" src="https://github.com/user-attachments/assets/b25b900b-4baf-4c67-87d2-81acef494d4c" />


# Day 2 - Body Schematics and Design (1 hour 39 minutes)
I introduced myself to OpenRocket, an open-source software that lets you visualise your rocket and run simulations on it. I managed to grasp a basic understanding of how the software works: you select the components you want for your rocket as well as determining the appropriateness of certain features to optimise factors like stability, CP (centre of pressure), and CG (centre of gravity). Something that I initially struggled with was producing a stable rocket. From what I later discerned (https://www.spacecad.com/posts/model-rocket-stability-prediction/), that my calibre (stability-wise) was not optimal and was why the rocket was underperforming in simulations. I had a .cal of over 2.8 initially thinking that the higher the .cal the more stable the rocket would be, but this would only eventuate to poorer aerodynamics. 
<img width="1600" height="856" alt="image (1)" src="https://github.com/user-attachments/assets/f1e6559c-ee2d-4e86-a7d4-3ab3ccad80a4" />

# Day 3 - Functionality Refinements (1 hour 28 minutes)
This day was spent rectifying the blunders made on Day 2. With newfound awareness and a strong resolve to improve upon yesterday's faults, I put my head down and got working. This tutorial really made me think: https://www.youtube.com/watch?v=oqe0lTp1WH0&list=PLulIhjxR7aZQ4coWt7MRHb4xt9wz0Fz6h. I had no idea about the purpose of a shoulder (links the nose cone to the rocket body) and tabs (the components that stick inside the rocket to ground the rocket). With these implementations taken into consideration, my model became FAR more stable and it was truly nice to see this unfurl. 

Another thing I didn't consider was the length of my nose cone. Originally, I had it set to 22x6cm but realised that if I were to use a local 3D printer, these dimensions may be outside of the build height when taking into account the 5.5cm long shoulder. 27.5cm in length exceeds a load of the basic entry level printers like the Ender V3 so I had to make a compromise. The logic behind the 22cm nose cone was that it would be in a 3:1 ratio with the rocket's body to mitigate drag. However, this was flawed as I am constructing a transonic rocket that will allow me to launch it within local regulations and freely without a permit (cannot be launched higher than 120m...etc, etc), so drag would not be a massive concern for a build that isn't even high powered. 

<img width="1600" height="791" alt="image" src="https://github.com/user-attachments/assets/176e25bd-e32e-4861-bd1c-9f509466a02d" />


With these limitations in place, I settled for a nose cone length of 18cm. It won't mitigate drag as the original design, but it is sufficiently long to the point where that shouldn't be much of a problem. 23.5cm of total length including the shoulder would permit it to print on an entry level 3D printer with a maximum build height of 24.5-25cm. 
 
# Day 4 - Schematic Design (4 hours 16 minutes)
I started my work on KiCad today. KiCad was a new challenge because it is far from my strong suit. Nonetheless, it was a journey filled with amazing discoveries. 
To begin, I watched a tutorial series on how to create a schematic in KiCad. I started by assembling all the individual parts: a standard MPU6050, Adafruit BMP388, alongside an Arduino Nano v3 from the component library KiCad has.  For just the aforesaid component, I switched the function of Pin 28 to ensure that it wouldn't break any of KiCad's Electrical Rules Check (ERS).

<img width="771" height="643" alt="image" src="https://github.com/user-attachments/assets/03f41815-d544-491d-8763-a57450f90488" />


I felt outrageously proud because I never expected to learn this process, but it feels rather good that I am familiar with all this new terminology and processes! 

# Day 5 - Schematic Improvement (3 hours 33 minutes)
I realised that my flight computer did not have the required components it needed to be operational and contain the functionalities I wanted it to have. It didn't have a MicroSD module nor a voltage regulator that would permit the usage of a 5V Arduino Nano v3 alongside components that operated on a lower voltage. My assumption here was that if I didn't have the voltage regulator, the other components would get fried. This would've been a tragic mistake. So the new additions consisted of an Adafruit MicroSD breakout board + and the Pololu 5V Step-Up/Step-Down Voltage Regulator S13V10F5.

My reasoning for choosing these products is that they mostly have excellent documentation and were readily accessible compared to other manufacturers who would take months to manufacture these parts. I settled on a name as well, the Orion Flight Computer. The reason? I loved space a lot as a kid and Orion was really close to my name, Orin. As mentioned, prior but not explicitly, the flight computer contains: an IMU (inertial measurement unit), barometer, MicroSD module (for data logging), voltage regulator (to handle how different components operate at different voltages), as well as the Arduino of course. 

I based the component schematics off technical designs under Adafruit's respective Eagle files on each parts' repository. For the other components (excluding the IMU) I managed to source them from their respective websites/GitHub repositories. After each component was created, I put them into the overall schematic design. This marked a successful implementation, but there were some underlying mistakes nonetheless.

<img width="1255" height="861" alt="image" src="https://github.com/user-attachments/assets/3873fc88-ab00-4c9d-8cf5-4392d9ad950c" />


# Day 6 - Schematic Finalisation (2 hours 10 minutes)
I revised the individual schematics, and I realised that the IMU wasn't well documented enough, and that I would be eye balling measurements. I settled on the Adafruit MPU6050 IMU, so I had to redo the IMU schematic as Adafruit's version contains 12 pins (6 on either side) compared to the industry standard 6 pins on one side only. With this finalised, I shifted my focus to creating the individual footprints for the components. I then finalised each component so that it was constructed in a manner that would be efficaciously transferable to the final part, the PCB design. 
<img width="656" height="583" alt="image" src="https://github.com/user-attachments/assets/1ba31e7c-7bd8-43ae-ac29-c514d76e9b24" />


# Day 7 - PCB Completion and Nose Cone Construction (9 hours 5 minutes)
I dedicated the entirety of the day to focus on two key questions: "How do I build a solid PCB?" and "How should I design the nose cone appropriately?". Starting with the PCB I went down to business. I learnt countless new concepts such as: the purpose of having wider wiring to sustain a greater current flow, the cool nature of 'vias' (I like to think of them as a wormhole that takes you from one side of the PCB to the next), and how to optimally set out a PCB so the wiring arrangement doesn't become a 'rat's nest'. I spent a fair bit of time discerning the optimal layout. 

<img width="851" height="538" alt="image" src="https://github.com/user-attachments/assets/bead5b19-64f0-429b-97ad-c972e34b6eaa" />

I settled on this layout because placing the Arduino in the centre allowed the surrounding components to be positioned on either side according to the pins they needed to connect to. I also made a neat logo/decal for the Orion Space Computer in the bottom left of the PCB using Canva in about 5 minutes (I searched for a photo of the Orion constellation and modelled it off that as it seemed quite fitting. In addition to this, I had to go back and fix some of the schematics and footprints for components like the BMP388 and the MicroSD breakout board + as the pins were incorrectly labelled (slight deviation like 3V3 vs 3Vo, SCL vs SCK, VCC vs VIN, etc). Troubleshooting took up the majority of my time today. I'd say finalising the PCB took about 7 out of 9 hours to do. A couple notable errors included setting the font size to 0.7mm when the readable font size for most manufacturers is 1mm, copper fill errors, and having thick wires overlap with certain pins/areas causing errors to show up when a check was run.

<img width="1299" height="718" alt="image (1)" src="https://github.com/user-attachments/assets/9df258ea-1186-4543-ab7a-8dcb158ac968" />
After ghosting AutoCad for a while, I finally decided it was the right time to tackle it! I started out really confused given that I tried to navigate it without much help. Long story short, I drew an equation based on a series of dot points from the Haack series to make an aerodynamic nose cone (inspired by the process featured here: https://coleandreoli-rocket-component-tools-main-blwurh.streamlit.app/). I then attached horizontal and vertical structure lines (these being 30mm for the radius and 180mm for the length) and revolved the Haack series line around the axis as such. This produced a 3D shape. I then centred a 2D circle on the flat end of the extruded shape and extruded that circle to produce the shoulder for the nose cone.

The rest of this session was spent editing the GitHub to ensure that I am up to speed and ready to ship in the coming days.

# Day 8 - [PLACEHOLDER] (TIME ELAPSED)
 
