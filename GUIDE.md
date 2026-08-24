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

Odyssey uses three plywood fins based on the current OpenRocket model.

### Fin Dimensions

| Parameter | Dimension |
|---|---:|
| Number of fins | 3 |
| Root chord | 70 mm |
| Tip chord | 55 mm |
| Height | 45 mm |
| Sweep length | 26 mm |
| Sweep angle | 30° |
| Thickness | 3 mm |
| Root fillet radius | 2 mm |
| Material | Birch plywood |
| Cross-section | Rounded |

The fins also use **through-the-wall tabs**, allowing the fins to pass through the postal tube and connect with the internal motor-mount region.

### Fin Tab Dimensions

| Parameter | Dimension |
|---|---:|
| Tab length | 70 mm |
| Tab height | 17 mm |
| Tab position | 0 mm |
| Reference | Top of parent component |

The easiest method is to manufacture one accurate fin first and use it as a template for the remaining two.

Once all three fins have been cut, stack them together and lightly sand the edges until they are approximately identical.

The leading and trailing edges can also be rounded slightly to better match the OpenRocket model.

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

The current model was prepared using a **0.16 mm layer height**. Support should be generated underneath the internal bulkhead.

A support blocker can be used around the central recovery attachment to prevent the support structure from unnecessarily filling this region.

Once the print is complete, inspect the nose cone for:

- Layer separation
- Cracks
- Incomplete walls
- Poorly formed support surfaces
- Damage around the bulkhead
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

An earlier design considered embedding an eye bolt while the nose cone was being printed.

This was ultimately considered impractical because the bolt would have needed to be inserted from below while the shoulder remained attached to the build plate. A long metal fastener would also have created a potential interference point with the moving print head.

The final design instead uses an **M6 RivNut** fitted after printing.

### Installing the M6 RivNut

The current CAD hole is approximately **Ø6.4 mm**.

This is suitable as M6 bolt clearance, but the body of an M6 RivNut is larger. The printed hole must therefore be carefully enlarged after printing.

> **Important:** There is no universal drill diameter for every M6 RivNut. Measure the selected RivNut or follow the manufacturer's specified installation-hole diameter before drilling.

Enlarge the hole gradually and keep the drill centred through the boss and bulkhead.

Once the hole has been prepared:

1. Insert the M6 RivNut.
2. Install it using a suitable RivNut setting tool.
3. Confirm that it is fully seated against the printed boss.
4. Thread the M6 eye fitting into the RivNut.
5. Tighten it securely without crushing or cracking the PLA structure.

The completed attachment should be pull-tested before flight.

---

## 9. Install the Shock Cord

The current OpenRocket model specifies a shock-cord length of:

**350 cm (3.5 m)**

The current simulation uses round **2 mm elastic cord**.

Attach one end of the shock cord securely to the **M6 eye fitting** in the nose cone.

Make sure that:

- The attachment is secure.
- The cord is not damaged or frayed.
- The cord does not contact sharp edges.
- There is sufficient length for the nose cone and recovery system to separate safely.

If a different shock-cord diameter or material is used in the finished rocket, update the OpenRocket model accordingly.

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
- Confirm that it can fit within the body tube without excessive compression.

---

## 11. Motor System

The current OpenRocket configuration uses an:

**Estes E12-4**

This is a 24 mm commercially manufactured model rocket motor with a four-second delay.

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

Before soldering, place the components onto the PCB and confirm their positions.

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

A finished joint should form a clean connection between the pad and pin.

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

This provides a controlled method of verifying the PCB, firmware, sensors and MicroSD system individually.

### Required Equipment

- Completed Orion PCB
- Arduino Nano installed
- Computer
- Appropriate USB data cable for the Nano
- MicroSD card
- Arduino IDE
- Orion firmware

> **Important:** Use a USB cable that supports data transfer. Some USB cables provide power only.

### Step 1 - Inspect the PCB

Before connecting USB power:

- Inspect both sides of the PCB.
- Check for solder bridges.
- Check for loose solder fragments.
- Confirm that all modules are installed in the correct orientation.
- Check the power rails for obvious shorts with a multimeter if one is available.

Do not connect the external battery at this stage.

### Step 2 - Connect the Nano Through USB

Connect the Arduino Nano directly to the computer using USB.

During this stage, the USB connection provides the Nano with power while also establishing a serial connection with the computer.

> **Do not connect the external battery supply at the same time unless the final power architecture has specifically been verified for simultaneous USB and external-power operation.**

### Step 3 - Open Arduino IDE

Install and open the Arduino IDE.

Select:

**Tools → Board → Arduino Nano**

Then select the appropriate processor option for the Nano being used.

Select the serial port under:

**Tools → Port**

The port should normally appear when the Nano is connected.

### Step 4 - Install the Required Libraries

The final firmware will require the relevant libraries for:

- MPU6050
- BMP388
- MicroSD
- I²C
- SPI

The Wokwi prototype uses a BMP180 substitute, so the physical firmware must use the BMP388-compatible library instead of the BMP085/BMP180 simulation library.

### Step 5 - Upload a Basic Firmware Test

Do not immediately begin with the complete flight firmware.

Testing the individual subsystems first makes faults considerably easier to identify.

The recommended testing order is:

```text
Arduino Nano
     ↓
Serial communication
     ↓
I²C communication
     ↓
MPU6050
     ↓
BMP388
     ↓
MicroSD
     ↓
Combined Orion firmware
```

### Step 6 - Verify Serial Communication

Upload a simple sketch that outputs a message through Serial.

Open:

**Tools → Serial Monitor**

and use the baud rate specified by the firmware, currently:

**115200 baud**

A basic successful test should show that the Nano can repeatedly communicate with the computer.

### Step 7 - Test the I²C Bus

The MPU6050 and BMP388 share the I²C bus.

An I²C scanner can be uploaded to confirm that both devices are visible to the Nano.

If both sensors are detected, this verifies:

- SDA connectivity
- SCL connectivity
- Power
- Ground
- Basic I²C communication

If a sensor is missing, inspect its solder joints and wiring before continuing.

### Step 8 - Test the MPU6050

Upload a basic MPU6050 test.

Confirm that the Serial Monitor displays:

- X acceleration
- Y acceleration
- Z acceleration
- X angular velocity
- Y angular velocity
- Z angular velocity

Slowly rotate and move the PCB.

The values should respond to the physical movement.

At rest, one accelerometer axis should measure approximately gravitational acceleration depending on the orientation of the board.

### Step 9 - Test the BMP388

Upload a basic BMP388 test.

Confirm that the Serial Monitor displays:

- Atmospheric pressure
- Temperature
- Calculated altitude

Raise and lower the PCB slightly.

Small altitude changes may be noisy, but pressure and altitude readings should remain generally stable rather than producing obviously impossible values.

### Step 10 - Test the MicroSD Card

Insert a correctly formatted MicroSD card.

Run a basic SD test that:

1. Initialises the card.
2. Creates a file.
3. Writes several lines of data.
4. Closes the file.

Remove the card and check it using the computer.

A successful test should produce a readable file such as:

```text
TEST.CSV
```

### Step 11 - Upload the Orion Firmware

Once the individual systems have passed testing, upload the complete Orion firmware.

The startup sequence should confirm that each required component initialises successfully.

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

### Step 12 - Perform a Data-Logging Test

Allow Orion to run for several minutes while connected through USB.

During the test:

- Move and rotate the flight computer.
- Raise and lower it.
- Monitor the sensor output through the Serial Monitor.
- Allow data to be written to the MicroSD card.

After the test:

1. Stop the system.
2. Remove the MicroSD card.
3. Open the generated CSV file on the computer.
4. Confirm that timestamps are increasing.
5. Confirm that sensor values have been recorded.
6. Confirm that acceleration values changed when the PCB was moved.
7. Confirm that altitude/pressure values were recorded.

### Step 13 - Test External Power Separately

Only after USB testing has been completed should the external battery and Pololu regulator be tested.

Disconnect USB first.

Connect the intended battery supply and verify the regulator output with a multimeter before relying on it to power the complete Orion system.

Confirm that the regulated output is approximately:

**5 V**

Then power Orion through the intended flight power system.

The system should behave the same way as it did during USB testing.

### Bench-Test Pass Criteria

Orion should only progress to installation in Odyssey once:

- The Nano powers reliably.
- Serial communication works.
- The MPU6050 is detected.
- The BMP388 is detected.
- Sensor measurements respond correctly.
- The MicroSD card initialises.
- CSV files can be created.
- Data is successfully logged.
- The regulator produces the expected output.
- The complete system can operate without unexpected resets.

---

## 14. Build the Avionics Bay Housing (*subject to funding*)

The Orion Flight Computer should not be installed as a bare PCB inside the rocket.

A dedicated **3D-printed avionics sled or enclosure** should be used to hold the flight computer securely within the body tube.

The housing should:

- Fit within the internal diameter of the postal tube.
- Hold the Orion PCB firmly using standoffs or spacers.
- Prevent the PCB from moving during launch and recovery.
- Keep the electronics separated from the parachute and shock cord.
- Provide clearance for the MicroSD card.
- Provide clearance for the Arduino Nano USB connector.
- Allow wiring to pass through without being crushed or sharply bent.
- Be removable so the PCB can still be tested, repaired, or reprogrammed.

A simple design may use two circular end plates connected by longitudinal rails, with the PCB mounted between them.

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
---

## 15. Final Assembly

Once the major components have been completed, assemble the rocket and inspect the entire structure.

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
- Orion retention, if installed

Nothing inside the rocket should be able to move freely during flight.

---

## 16. Update the OpenRocket Model

The finished rocket will almost certainly differ slightly from the original OpenRocket design.

Before launch, weigh the completed rocket and update the simulation where necessary.

Important values include:

- Total mass
- Centre of gravity
- Fin geometry
- Nose cone dimensions
- Recovery-system mass
- Orion Flight Computer mass
- Motor selection

Re-run the simulation using the final physical configuration rather than relying only on earlier design estimates.

---

## 17. Ground Testing

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

The Wokwi simulation validates the general firmware architecture but does not replace testing of the physical Orion hardware.

---

## 18. Launch Preparation

Once construction, simulation and ground testing have been completed, the rocket can progress to launch preparation.

Before launching:

- Check weather conditions.
- Check relevant fire restrictions.
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
