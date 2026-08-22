# 🚀 Odyssey Rocket

> **A model rocket prototype built from accessible materials, custom-designed components, and a completely self-developed avionics system.**

| Project Information | Details |
| --- | --- |
| **Author** | Orin Gibson |
| **Project** | Odyssey Rocket |
| **Description** | A rocket prototype... but I knew nothing about rockets or the software that can be utilised to make one. |
| **Creation Date** | 01/08/2026 |
| **Total Time Spent** | **~23 hours** |

---

# Day 1 — Learning Bit by Bit
### ⏱️ 35 minutes

I spent the first day familiarising myself with industry software such as **SolidWorks**, preparing myself for the CAD work required for components such as the nose cone and other internal components that would later be 3D printed.

<p align="center">
  <img width="622" src="https://github.com/user-attachments/assets/b25b900b-4baf-4c67-87d2-81acef494d4c" />
</p>

<p align="center">
  <em>Beginning the process of learning CAD and 3D modelling.</em>
</p>

---

# Day 2 — Body Schematics and Design
### ⏱️ 1 hour 39 minutes

I introduced myself to **OpenRocket**, an open-source program that lets you visualise a rocket and run simulations on it.

I managed to grasp a basic understanding of how the software works: you select the components you want for your rocket while determining the appropriateness of certain features to optimise factors such as:

- **Stability**
- **CP — Centre of Pressure**
- **CG — Centre of Gravity**
- Aerodynamic performance

Something I initially struggled with was producing a stable rocket.

From what I later discerned from [this resource on model rocket stability](https://www.spacecad.com/posts/model-rocket-stability-prediction/), my stability calibre was not optimal and was one reason why the rocket was underperforming in simulations.

I initially had a stability value above **2.8 cal**, believing that a higher calibre automatically meant a more stable rocket. However, excessive stability can also result in poorer aerodynamic behaviour.

<p align="center">
  <img width="900" src="https://github.com/user-attachments/assets/f1e6559c-ee2d-4e86-a7d4-3ab3ccad80a4" />
</p>

<p align="center">
  <em>An early OpenRocket iteration of Odyssey.</em>
</p>

---

# Day 3 — Functionality Refinements
### ⏱️ 1 hour 28 minutes

This day was spent rectifying the blunders made on Day 2.

With newfound awareness and a strong resolve to improve upon yesterday's faults, I put my head down and got working.

This [OpenRocket tutorial series](https://www.youtube.com/watch?v=oqe0lTp1WH0&list=PLulIhjxR7aZQ4coWt7MRHb4xt9wz0Fz6h) really made me think.

I had no idea about the purpose of a **shoulder**, which connects the nose cone to the rocket body, or **fin tabs**, which extend into the rocket body and provide a more secure structural connection.

With these implementations taken into consideration, my model became **far more stable**, and it was genuinely satisfying to see the design improve.

### Nose Cone Constraints

Another thing I had not considered was the length of my nose cone.

Originally, I had it set to approximately **22 × 6 cm**, but realised that if I were to use a local 3D printer, these dimensions might exceed its available build height once the **5.5 cm shoulder** was included.

A total length of approximately **27.5 cm** exceeds the build volume of many basic entry-level printers.

My original reasoning for the 22 cm nose cone was to maintain approximately a **3:1 nose-cone length-to-diameter ratio** to reduce drag. However, this was less important than I initially thought for the relatively low-speed flight regime being targeted.

<p align="center">
  <img width="900" src="https://github.com/user-attachments/assets/176e25bd-e32e-4861-bd1c-9f509466a02d" />
</p>

<p align="center">
  <em>Refined OpenRocket design after improving stability and dimensional constraints.</em>
</p>

With these limitations in place, I settled on a nose cone length of **18 cm**.

It will not mitigate drag to the same extent as the original design, but it remains sufficiently long for the intended application.

The total length, including the shoulder, became approximately **23.5 cm**, allowing it to fit within an entry-level 3D printer with a maximum build height around **24.5–25 cm**.

---

# Day 4 — Schematic Design
### ⏱️ 4 hours 16 minutes

I started my work on **KiCad** today.

KiCad was a completely new challenge because electronics design is far from my existing strong suit. Nonetheless, it became a journey filled with some amazing discoveries.

To begin, I watched a tutorial series explaining how to create a schematic in KiCad.

I started by assembling the individual components:

- **MPU6050 IMU**
- **Adafruit BMP388 barometer**
- **Arduino Nano v3**

For the Arduino Nano, I also modified one of the pin definitions to prevent unnecessary errors during KiCad's **Electrical Rules Check (ERC)**.

<p align="center">
  <img width="650" src="https://github.com/user-attachments/assets/03f41815-d544-491d-8763-a57450f90488" />
</p>

<p align="center">
  <em>Early development of the Orion Flight Computer schematic.</em>
</p>

I felt outrageously proud because I never expected to learn this process.

It feels rather good to now be familiar with all of this new terminology and these completely unfamiliar engineering processes.

---

# Day 5 — Schematic Improvement
### ⏱️ 3 hours 33 minutes

I realised that my flight computer did not yet contain all of the components required to perform the functions I wanted.

It was missing:

- a **MicroSD module** for flight-data storage
- a **voltage regulator** for stable power distribution

The new additions consisted of:

- **Adafruit MicroSD Breakout Board+**
- **Pololu 5V Step-Up/Step-Down Voltage Regulator S13V10F5**

My reasoning for choosing these products was largely their excellent documentation and accessibility compared with alternatives that could be significantly harder to source.

## Orion Flight Computer

I also finally settled on a name:

### **Orion Flight Computer**

Why Orion?

I loved space a lot as a kid, and **Orion** happens to be remarkably close to my own name, **Orin**.

The flight computer contains:

| Component | Purpose |
| --- | --- |
| **Arduino Nano v3** | Main microcontroller |
| **MPU6050 IMU** | Acceleration and rotational measurements |
| **BMP388 Barometer** | Atmospheric pressure and altitude measurements |
| **MicroSD Module** | Flight-data logging |
| **S13V10F5 Regulator** | Voltage regulation and power management |

I based the component schematics primarily on technical designs and manufacturer documentation, including Adafruit's respective Eagle files and component repositories.

After each individual component was created, I incorporated it into the overall schematic.

This marked a successful implementation, although there were still some underlying mistakes that would need to be corrected later.

<p align="center">
  <img width="850" src="https://github.com/user-attachments/assets/3873fc88-ab00-4c9d-8cf5-4392d9ad950c" />
</p>

<p align="center">
  <em>An intermediate version of the Orion Flight Computer schematic.</em>
</p>

---

# Day 6 — Schematic Finalisation
### ⏱️ 2 hours 10 minutes

I revised the individual schematics and realised that the original IMU I had selected was not documented sufficiently for me to confidently reproduce its physical dimensions.

I therefore settled on the **Adafruit MPU6050 IMU**.

This required me to redo the IMU schematic because Adafruit's breakout contains **12 pins**, with six on either side.

With the schematic finalised, I shifted my focus toward creating the individual **PCB footprints** for each component.

Each component was then refined so that the schematic could be transferred effectively into the final PCB design.

<p align="center">
  <img width="600" src="https://github.com/user-attachments/assets/1ba31e7c-7bd8-43ae-ac29-c514d76e9b24" />
</p>

<p align="center">
  <em>Finalised MPU6050 schematic symbol and pin configuration.</em>
</p>

---

# Day 7 — PCB Completion and Nose Cone Construction
### ⏱️ 9 hours 5 minutes

I dedicated essentially the entire day to answering two major questions:

> **How do I build a solid PCB?**

and

> **How should I design the nose cone appropriately?**

---

## Part 1 — Orion Flight Computer PCB

Starting with the PCB, I got down to business.

I learnt countless new concepts, including:

- why **wider tracks** are useful for higher-current power connections
- the purpose of **copper pours**
- how **vias** connect separate PCB copper layers
- how to avoid creating an unmanageable **ratsnest**
- PCB **Design Rules Checks (DRC)**
- appropriate component spacing and placement
- silkscreen requirements
- thermal reliefs and copper islands

Vias were particularly interesting. I like to think of them as tiny **wormholes** that take an electrical connection from one side of the PCB to the other.

I spent a significant amount of time determining the optimal component layout.

<p align="center">
  <img width="800" src="https://github.com/user-attachments/assets/bead5b19-64f0-429b-97ad-c972e34b6eaa" />
</p>

<p align="center">
  <em>Developing the component layout for the Orion Flight Computer PCB.</em>
</p>

I settled on this layout because placing the **Arduino in the centre** allowed the surrounding components to be positioned on either side according to the pins they needed to connect to.

I also designed a small logo for the **Orion Flight Computer** in the bottom-left corner of the PCB using Canva.

I searched for an image of the Orion constellation and modelled the decal around it, which seemed particularly fitting given the name.

### Troubleshooting

A significant portion of the session involved correcting earlier schematic and footprint mistakes.

Some pin labels on components such as the **BMP388** and **MicroSD Breakout Board+** differed slightly from their manufacturer's terminology.

Examples included:

- `3V3` → `3Vo`
- `SCL` → `SCK`
- `VCC` → `VIN`

Troubleshooting took up the majority of my time.

I'd estimate that finalising the PCB consumed approximately **7 of the 9 hours** spent on the project that day.

Some notable errors included:

- setting silkscreen text to **0.7 mm** when a larger size was preferable for manufacturing
- isolated **copper fill** regions
- inadequate thermal-relief connections
- overly wide tracks interfering with nearby pads
- silkscreen elements overlapping solder-mask regions

Eventually, the Design Rules Check was cleared.

<p align="center">
  <img width="900" src="https://github.com/user-attachments/assets/9df258ea-1186-4543-ab7a-8dcb158ac968" />
</p>

<p align="center">
  <em>The completed Orion Flight Computer PCB design.</em>
</p>

---

## Part 2 — Nose Cone Construction

After leaving CAD alone for a while, I finally decided it was time to tackle the nose cone.

I started out thoroughly confused because I initially attempted to navigate the process with very little assistance.

Long story short, I generated a curve based on the **Haack series**, inspired by the process demonstrated by the [Rocket Component Tools calculator](https://coleandreoli-rocket-component-tools-main-blwurh.streamlit.app/).

I then created horizontal and vertical construction lines representing:

- **30 mm radius**
- **180 mm nose-cone length**

The generated Haack-series profile was revolved around the central axis to produce the three-dimensional nose cone.

I then centred a two-dimensional circle on the flat end of the revolved shape and extruded it to create the **shoulder**, allowing the nose cone to fit inside the rocket's body tube.

This ultimately produced the first physical nose-cone prototype.

---

### End-of-Day Result

By the end of Day 7:

- ✅ Orion Flight Computer PCB layout completed
- ✅ PCB Design Rules Check resolved
- ✅ Custom Orion silkscreen logo created
- ✅ Nose cone model completed
- ✅ Nose cone prepared for 3D printing
- ✅ GitHub documentation brought up to date

The rest of the session was spent organising the GitHub repository and preparing the project for the next stage.

---

# Day 8 — [PLACEHOLDER]
### ⏱️ TIME ELAPSED

*Development continues...*

---
