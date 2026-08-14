---
Title: Odyssey Rocket
Author: Orin Gibson
Description: A rocket prototype...but I know nothing about rockets or the software that can be utilised to make it.
Creation_Date: 01-08-2026 (DD/MM/YY)
---

### Total Time Spent: X hours

# Day 1 - Learning Bit by Bit (35 minutes)
I just spent the first day familiarising myself with  industry software, such as SolidWorks, to prepare me for the CAD work that I would have to do for components such as the nose cone and other internal components that would later have to be 3D printed.

# Day 2 - Body Schematics and Design (1 hour 39 minutes)
I introduced myself to OpenRocket, an open-source software that lets you visualise your rocket and run simulations on it. I managed to grasp a basic understanding of how the software works: you select the components you want for your rocket as well as determining the appropriateness of certain features to optimise factors like stability, CP (centre of pressure), and CG (centre of gravity). Something that I initially struggled with was producing a stable rocket. From what I later discerned (https://www.spacecad.com/posts/model-rocket-stability-prediction/), that my calibre (stability-wise) was not optimal and was why the rocket wasI just spent the first day familiarising myself with  industry software, such as SolidWorks, to prepare me for the CAD work that I would have to do for components such as the nose cone and other internal components that would later have to be 3D printed.

# Day 2 - Body Schematics and Design (1 hour 39 minutes)
I introduced myself to OpenRocket, an open-source software that lets you visualise your rocket and run simulations on it. I managed to grasp a basic understanding of how the software works: you select the components you want for your rocket as well as determining the appropriateness of certain features to optimise factors like stability, CP (centre of pressure), and CG (centre of gravity). Something that I initially struggled with was producing a stable rocket. From what I later discerned (https://www.spacecad.com/posts/model-rocket-stability-prediction/), that my calibre (stability-wise) was not optimal and was why the rocket was underperforming in simulations. I had a .cal of over 2.8 initially thinking that the higher the .cal the more stable the rocket would be, but this would only eventuate to poorer aerodynamics. 

# Day 3 - Functionality Refinements (1 hour 28 minutes)
This day was spent rectifying the blunders made on Day 2. With newfound awareness and a strong resolve to improve upon yesterday's faults, I put my head down and got working. This tutorial really made me think: https://www.youtube.com/watch?v=oqe0lTp1WH0&list=PLulIhjxR7aZQ4coWt7MRHb4xt9wz0Fz6h. I had no idea about the purpose of a shoulder (links the nose cone to the rocket body) and tabs (the components that stick inside the rocket to ground the rocket). With these implementations taken into consideration, my model became FAR more stable and it was truly nice to see this unfurl. 

Another thing I didn't consider was the length of my nose cone. Originally, I had it set to 22x6cm but realised that if I were to use a local 3D printer, these dimensions may be outside of the build height when taking into account the 5.5cm long shoulder. 27.5cm in length exceeds a load of the basic entry level printers like the Ender V3 so I had to make a compromise. The logic behind the 22cm nose cone was that it would be in a 3:1 ratio with the rocket's body to mitigate drag. However, this was flawed as I am constructing a transonic rocket that will allow me to launch it within local regulations and freely without a permit (cannot be launched higher than 120m...etc, etc), so drag would not be a massive concern for a build that isn't even high powered. 

With these limitations in place, I settled for a nose cone length of 18cm. It won't mitigate drag as the original design, but it is sufficiently long to the point where that shouldn't be much of a problem. 23.5cm of total length including the shoulder would permit it to print on an entry level 3D printer with a maximum build height of 24.5-25cm. 

# Day 4 - Schematic Design 

## Day 5 - Footprint and Schematics Finalisation
