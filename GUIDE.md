# GUIDE

This guide outlines how to construct the **Odyssey Rocket** from scratch.

Odyssey has been designed around relatively accessible materials and components, with most custom parts either being 3D printed or manufactured using basic tools.

The **Orion Flight Computer** is optional and can be incorporated if onboard flight-data logging is desired.

> **Note:** Always follow the instructions supplied with commercially manufactured rocket motors and check the relevant local regulations before launching.

---

## 1. Required Components

Before beginning construction, gather the required components listed in the project Bills of Materials.

### Rocket Hardware

- Australia Post 660 × 60 mm postal tube
- 3 mm birch plywood sheet
- 3D-printed PLA nose cone
- M6 RivNut
- M6 eye fitting
- Shock cord
- SkyAngle Classic 20 parachute
- Estes E12-4 model rocket motor

Further information can be found in the [Rocket Hardware BOM](BOM/Rocket_Hardware.md).

### Orion Flight Computer

If the avionics system is being used, the primary components are:

- Arduino Nano v3
- Adafruit MPU6050
- Adafruit BMP388
- Adafruit MicroSD breakout
- Pololu S13V10F5 voltage regulator
- Orion Flight Computer PCB

Further information is available in the [Firmware](FIRMWARE/) and [PCB](PCB/) folders.

---

## 2. Prepare the Body Tube

The main airframe uses an **Australia Post 660 × 60 mm postal tube**.

Before attaching anything to the tube:

- Check that the tube is straight and undamaged.
- Test the fit of the nose cone shoulder.
- Mark the fin positions.
- Mark the location of the motor-mount assembly.

The nose cone should fit securely into the tube without requiring excessive force.

---

## 3. Manufacture the Fins

Odyssey uses three birch-plywood fins based on the current OpenRocket model.

### Fin Dimensions

| Parameter | Dimension |
|---|---:|
| Number of fins | 3 |
| Root chord | 70 mm |
| Tip chord | 55 mm |
| Height | 40 mm |
| Sweep length | 26 mm |
| Sweep angle | 33° |
| Thickness | 3 mm |
| Root fillet radius | 2 mm |
| Material | Birch plywood |
| Cross-section | Rounded |

The fins use **through-the-wall tabs**, allowing the fins to pass through the postal tube and connect with the internal motor-mount region.

### Fin Tab Dimensions

| Parameter | Dimension |
|---|---:|
| Tab length | 70 mm |
| Tab height | 17 mm |
| Tab position | 0 mm |
| Reference | Top of parent component |

The easiest method is to manufacture one accurate fin first and use it as a template for the remaining two.

Once all three fins have been cut, stack them together and lightly sand the edges until they are approximately identical.

The leading and trailing edges can also be rounded slightly to better represent the current OpenRocket model.

---

## 4. Mark and Cut the Fin Slots

The three fins should be evenly spaced around the body tube.

Because there are three fins:

**360° ÷ 3 = 120°**

Mark three longitudinal reference lines around the lower section of the body tube, each separated by approximately **120°**.

Using the fin tabs as a reference, mark and cut the corresponding slots through the body tube.

The slots should allow the 3 mm plywood tabs to pass through without excessive force while avoiding unnecessary clearance.

Test-fit all three fins before applying adhesive.

---

## 5. Install the Centering Ring

The motor-mount assembly uses one birch-plywood centering ring.

### Centering Ring Dimensions

| Parameter | Dimension |
|---|---:|
| Thickness | 3 mm |
| Outer diameter | 55.6 mm |
| Inner diameter | 25.8 mm |
| Material | Birch plywood |

The centering ring is positioned approximately **5 mm forward of the bottom of the motor-mount tube**.

Its purpose is to keep the motor-mount tube centred within the main airframe and provide additional support at the rear of the rocket.

Before gluing:

- Check that the inner diameter fits around the motor-mount tube.
- Check that the outer diameter fits within the main body tube.
- Confirm that the motor mount remains centred.
- Confirm that the fin tabs do not interfere with the centering ring.

Once aligned, secure the centering ring to the motor-mount assembly using an appropriate adhesive.

---

## 6. Attach the Fins

Insert each fin tab through its corresponding slot in the body tube.

Check that:

- The root chord sits flat against the outside of the body tube.
- The tab is fully inserted.
- The fin is parallel with the rocket centreline.
- The fin is not twisted.
- All three fins begin at the same axial position.
- Each fin is approximately 120° from the next.

Once satisfied with the alignment, secure the fins using an adhesive appropriate for plywood and cardboard.

A small external fillet can then be formed along each fin root.

Allow the adhesive to cure fully before continuing.

---

## 7. Print the Nose Cone

The Odyssey nose cone is a custom **von Kármán / Haack-series nose cone** created in SolidWorks.

### Nose Cone Dimensions

| Parameter | Dimension |
|---|---:|
| Nose cone length | 180 mm |
| Maximum outer diameter | 64.2 mm |
| Shoulder length | 55 mm |
| Shoulder outer diameter | 60.15 mm |
| Shoulder wall thickness | 2.5 mm |
| Internal bulkhead thickness | 7.5 mm |
| Central boss diameter | 20 mm |
| Recovery hole diameter | 6.4 mm |

The nose cone should be printed vertically with the **shoulder placed on the build plate and the nose tip facing upward**.

The current model was prepared using a **0.16 mm layer height**.

Support should be generated underneath the internal bulkhead. A support blocker can be used around the central recovery attachment so that unnecessary support material does not fill the attachment region.

Once printing is complete, inspect the nose cone for:

- Layer separation
- Cracks
- Incomplete walls
- Poorly formed support surfaces
- Damage around the internal bulkhead
- Damage around the central boss
- Poor fit between the shoulder and body tube

The shoulder should fit securely within the postal tube without requiring excessive force.

---

## 8. Install the Recovery Attachment

The nose cone contains a reinforced internal recovery structure consisting of:

- A 7.5 mm internal bulkhead
- A central reinforced boss
- Four reinforcing ribs
- A central recovery hole

An earlier design considered embedding an eye bolt during the 3D-printing process.

This was abandoned because the bolt would have needed to be inserted from underneath while the shoulder remained fixed to the build plate. The metal fastener could also have interfered with the moving print head.

The final design instead uses an **M6 RivNut** installed after printing.

### Installing the M6 RivNut

The current CAD hole is approximately **Ø6.4 mm**.

This is suitable for M6 bolt clearance, but the outside diameter of an M6 RivNut is larger. The printed hole must therefore be carefully enlarged after printing.

> **Important:** The required hole diameter depends on the specific M6 RivNut being used. Measure the selected RivNut or follow the manufacturer's recommended installation-hole diameter before drilling.

Enlarge the hole gradually and keep the drill centred through the boss and bulkhead.

Once the hole has been prepared:

1. Insert the M6 RivNut.
2. Install it using a suitable RivNut setting tool.
3. Confirm that it is seated firmly against the printed boss.
4. Thread the M6 eye fitting into the RivNut.
5. Tighten it securely without applying enough force to crack or crush the PLA.

The finished attachment should be manually pull-tested before flight.

---

## 9. Install the Shock Cord

The current OpenRocket model specifies a shock-cord length of:

**350 cm (3.5 m)**

The current simulation specifies approximately **2 mm round elastic cord**.

Attach one end of the shock cord securely to the **M6 eye fitting** installed in the nose cone.

Ensure that:

- The attachment is secure.
- The cord is not damaged or frayed.
- The cord does not rub against sharp edges.
- There is enough length for the nose cone and recovery system to separate safely.

If a different diameter or material is used in the finished rocket, update the OpenRocket model accordingly.

---

## 10. Attach the Parachute

The current recovery system uses a:

**SkyAngle Classic 20**

with an approximate diameter of:

**20 in / 50.8 cm**

The recovery arrangement is approximately:

```text
Nose Cone
    │
M6 RivNut
    │
M6 Eye Fitting
    │
Shock Cord
    │
Parachute Attachment
    │
Rocket Body
```

Attach the parachute fitting securely to the shock-cord recovery assembly.

Before packing the parachute:

- Check that the suspension lines are not tangled.
- Inspect the canopy for damage.
- Confirm that all attachment points are secure.
- Make sure the parachute opens freely.
- Confirm that the packed parachute fits within the body tube without excessive compression.

---

## 11. Motor System

The current OpenRocket configuration uses an:

**Estes E12-4**

This is a commercially manufactured 24 mm model rocket motor with a four-second delay.

The motor should only be installed when the completed rocket is being prepared for launch.

Follow the manufacturer's instructions for installation, retention and ignition.

---

## 12. Assemble the Orion Flight Computer

The Orion Flight Computer is an optional avionics subsystem designed to record flight data for post-flight analysis.

The PCB integrates:

- Arduino Nano v3
- Adafruit MPU6050
- Adafruit BMP388
- Adafruit MicroSD breakout
- Pololu S13V10F5 voltage regulator
- Power input connector

PCB design and manufacturing information can be found in the [PCB](PCB/) folder.

### PCB Manufacturing

The bare PCB can be manufactured using the fabrication files included in the repository.

If only **bare PCB manufacturing** is selected when ordering the board, the modules and connectors must be installed manually once the PCB arrives.

If an appropriate assembly service has been configured with the manufacturer, some components may instead arrive pre-assembled.

The current Orion design primarily uses modules and through-hole headers and is therefore suitable for manual assembly.

### Component Placement

| Designator | Component |
|---|---|
| A1 | Arduino Nano v3 |
| U1 | Adafruit MicroSD breakout |
| U2 | Pololu S13V10F5 regulator |
| U3 | Adafruit BMP388 |
| U4 | Adafruit MPU6050 |
| J1 | Power input header |

Before soldering:

- Confirm that each component matches its intended footprint.
- Check component orientation.
- Ensure that header pins pass cleanly through the PCB.
- Make sure each module sits level.
- Check that nothing has been inserted backwards.

### Soldering

Unless the PCB has been supplied with the required hardware already assembled, the modules and headers must be soldered manually.

For each connection:

1. Insert the component or header.
2. Confirm its orientation.
3. Hold the component square to the PCB.
4. Heat both the pad and pin with the soldering iron.
5. Feed a small amount of solder into the joint.
6. Remove the solder.
7. Remove the iron.
8. Allow the joint to cool without moving the component.

Inspect the completed PCB for:

- Missing joints
- Poor wetting
- Excess solder
- Solder bridges
- Loose pins
- Incorrect component orientation

Do not connect a battery until the PCB has been inspected.

---

## 13. Bench Test the Orion Flight Computer

The Orion Flight Computer should be tested using a computer and USB connection **before testing the battery and Pololu power system**.

USB is useful for the first testing stage because it provides both power and serial communication with the Arduino Nano.

### Required Equipment

- Completed Orion PCB
- Arduino Nano
- Computer
- USB data cable
- MicroSD card
- Arduino IDE
- Orion firmware

> **Important:** Make sure the USB cable supports data transfer. Some cables only provide power.

### Step 1 - Inspect the PCB

Before connecting USB:

- Inspect both sides of the PCB.
- Check for solder bridges.
- Check for loose solder fragments.
- Confirm that all modules are installed in the correct orientation.
- Check the power rails for obvious shorts using a multimeter where possible.

Do not connect the external battery at this stage.

### Step 2 - Connect the Nano Using USB

Connect the Arduino Nano directly to the computer.

During this stage, USB provides power and serial communication.

Avoid connecting the external battery simultaneously until the final power architecture has been properly verified.

### Step 3 - Configure Arduino IDE

Open Arduino IDE.

Select:

**Tools → Board → Arduino Nano**

Select the appropriate processor and then select the Nano's serial port under:

**Tools → Port**

### Step 4 - Test the Nano and Serial Connection

Upload a simple serial-output sketch.

Open:

**Tools → Serial Monitor**

The current Orion firmware uses:

**115200 baud**

Confirm that the Nano can send data reliably to the computer.

### Step 5 - Test the I²C Bus

The MPU6050 and BMP388 share the I²C bus.

Run an I²C scanner and confirm that both sensors are detected.

This provides a basic check of:

- SDA
- SCL
- Sensor power
- Ground
- I²C communication

### Step 6 - Test the MPU6050

Run a basic MPU6050 test and confirm that the following values appear:

- X acceleration
- Y acceleration
- Z acceleration
- X angular velocity
- Y angular velocity
- Z angular velocity

Move and rotate the PCB and confirm that the values change accordingly.

### Step 7 - Test the BMP388

Run a BMP388 test and confirm that the following values are available:

- Atmospheric pressure
- Temperature
- Calculated altitude

The measurements should remain reasonably stable when the PCB is stationary.

### Step 8 - Test the MicroSD Card

Insert a formatted MicroSD card.

Run an SD test that:

1. Initialises the card.
2. Creates a test file.
3. Writes several lines.
4. Closes the file.

Remove the card and check the file on the computer.

### Step 9 - Upload the Complete Orion Firmware

Once each subsystem works independently, upload the complete Orion firmware.

A successful startup should produce output similar to:

```text
================================
   ORION FLIGHT COMPUTER
================================

MPU6050: OK
BMP388:  OK
SD Card: OK

Orion ready.
```

### Step 10 - Perform a Logging Test

Allow Orion to run for several minutes.

During the test:

- Move and rotate the PCB.
- Raise and lower it.
- Monitor the Serial output.
- Allow data to be recorded to the MicroSD card.

Afterward, check the generated CSV and confirm that:

- Timestamps increase correctly.
- Acceleration measurements were recorded.
- Gyroscope measurements were recorded.
- Pressure measurements were recorded.
- Altitude measurements were recorded.

### Step 11 - Test the External Power System

Once USB testing has succeeded, disconnect USB.

Connect the intended battery to the Pololu regulator.

Measure the regulator output with a multimeter before connecting the complete system.

The expected regulated output is approximately:

**5 V**

Once verified, power Orion using the intended flight power system and confirm that its behaviour matches the USB test.

---

## 14. Build the Avionics Bay Housing

The Orion Flight Computer should not be installed as a bare PCB inside the rocket.

A dedicated **3D-printed avionics sled or enclosure** should be used.

The housing should:

- Fit within the internal diameter of the postal tube.
- Hold the Orion PCB firmly.
- Use standoffs or spacers to support the PCB.
- Prevent the flight computer from moving during launch and recovery.
- Keep the electronics separated from the parachute and shock cord.
- Provide clearance for the MicroSD card.
- Provide clearance for the Arduino Nano USB connector.
- Allow wiring to pass through without being crushed.
- Remain removable for testing and maintenance.

A simple layout may use two circular end plates connected by longitudinal rails.

```text
BODY TUBE
┌───────────────────────────────┐
│                               │
│   ○=======================○   │
│      │                 │      │
│      │   ORION PCB     │      │
│      │   [========]    │      │
│      │                 │      │
│   ○=======================○   │
│                               │
└───────────────────────────────┘

○ = printed end plates
= = structural rails
```

A PVC tube could also be used, but this would introduce additional mass and wall thickness while reducing the available internal volume.

For Odyssey, a **custom 3D-printed avionics sled is the preferred solution**.

---

## 15. Install Orion in the Rocket

Once the avionics bay has been assembled and tested, install it securely within the rocket body.

Ensure that:

- The housing cannot move freely.
- The PCB remains fixed within the housing.
- The MicroSD card remains accessible where practical.
- Wiring cannot contact sharp edges.
- The avionics bay does not interfere with the parachute or shock cord.
- The assembly can still be removed for maintenance.

---

## 16. Final Assembly

Once the major components have been completed, inspect the entire rocket.

Check:

- Nose cone fit
- Body tube condition
- Fin alignment
- Fin attachment
- Centering ring
- Motor mount
- RivNut recovery attachment
- Shock cord
- Parachute
- Orion avionics bay, if installed

Nothing inside the rocket should move freely during flight.

---

## 17. Update the OpenRocket Model

The final physical rocket will differ slightly from the original OpenRocket model.

Before launch, weigh the completed rocket and update the simulation where necessary.

Important values include:

- Total mass
- Centre of gravity
- Fin geometry
- Nose cone dimensions
- Recovery-system mass
- Orion Flight Computer mass
- Motor selection

The current OpenRocket configuration shown during development produces approximately:

| Parameter | Current Simulation |
|---|---:|
| Motor | Estes E12-4 |
| Apogee | 121 m |
| Maximum velocity | 38.7 m/s |
| Maximum acceleration | 67.4 m/s² |
| Stability | 1.71 cal |

These values should be treated as **simulation results rather than guaranteed flight performance**.

Re-run the simulation using the final measured configuration before flight.

---

## 18. Ground Testing

Before flight, complete basic ground testing.

This should include:

- Nose cone fit testing
- Recovery attachment pull testing
- Shock-cord inspection
- Parachute deployment testing
- Structural inspection
- Orion power-on testing
- Sensor initialisation
- MicroSD logging verification
- Avionics-bay retention testing

The Wokwi simulation validates the general firmware architecture but does not replace testing of the physical Orion hardware.

---

## 19. Launch Preparation

Once construction, simulation and ground testing have been completed, the rocket can progress to launch preparation.

Before launching:

- Check weather conditions.
- Check applicable fire restrictions.
- Confirm that the launch location is suitable.
- Check applicable model rocket and aviation requirements.
- Inspect the rocket immediately before flight.
- Follow the motor manufacturer's preparation and ignition instructions.

---

# Construction Complete

At this stage, the Odyssey Rocket should be mechanically assembled and ready for final testing and launch preparation.

Additional project information is available in:

- [Main README](README.md)
- [Bill of Materials](BOM/)
- [Firmware](FIRMWARE/)
- [PCB](PCB/)
- [CAD](CAD/)
