This document outlines the process used to prepare and manufacture the Orion Flight Computer PCB through JLCPCB.



Notes:





The only extra thing I changed was the colour of the PCB because red suited the decal on the PCB better than the standard green did. 

1. Final Checks in KiCad

Before generating fabrication files, ensure the PCB is complete and passes all required checks.

Final checklist





Run the Design Rules Checker (DRC) - you may experience errors such as:





setting silkscreen text to 0.7 mm when a larger size was preferable for manufacturing



isolated copper fill regions



inadequate thermal-relief connections



overly wide tracks interfering with nearby pads



silkscreen elements overlapping solder-mask regions



Confirm that there are 0 unconnected items



Confirm that there are 0 critical violations



Refill all copper zones using B.



Check all the GND pads are properly connected to the copper pours





If they aren't connected, try going over the schematic or attempt a copper pour again.



Verify all tracks are routed



Verify track widths (different track types support different currents and typically correspond to their functionality on the PCB):





Signal tracks: 0.25 mm



+5 V tracks: 0.50 mm



VIN_RAW / main input power: 0.75 mm



Check silkscreen text does not overlap pads or solder-mask openings



Check the board outline on Edge.Cuts is fully closed



Inspect the design in KiCad's 3D Viewer



Verify the orientation of all breakout modules



Confirm USB and MicroSD access is unobstructed



Check all custom footprint pin mappings against the schematic



2. Generate Gerber Files

In KiCad PCB Editor:

File → Fabrication Outputs → Gerbers (.gbr)

Select the required layers.

For this 2-layer PCB, the important layers are typically:





F.Cu



B.Cu



F.SilkS



B.SilkS if used



F.Mask



B.Mask



Edge.Cuts

Generate the Gerber files into a dedicated fabrication folder.

Example:

PCB/Fabrication/Gerbers/




