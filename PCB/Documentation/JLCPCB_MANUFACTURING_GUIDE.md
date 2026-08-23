# JLCPCB Manufacturing Guide

This document outlines the process used to prepare and manufacture the Orion Flight Computer PCB through JLCPCB.

---

## 1. Final Checks in KiCad

Before generating fabrication files, ensure the PCB is complete and passes all required checks.

### Final checklist

- Run **Design Rules Checker (DRC)**
- Confirm **0 unconnected items**
- Confirm **0 critical violations**
- Refill all copper zones using `B`
- Check all GND pads are properly connected to the copper pours
- Verify all tracks are routed
- Verify track widths:
  - Signal tracks: **0.25 mm**
  - +5 V tracks: **0.50 mm**
  - VIN_RAW / main input power: **0.75 mm**
- Check silkscreen text does not overlap pads or solder-mask openings
- Check the board outline on `Edge.Cuts` is fully closed
- Inspect the design in KiCad's **3D Viewer**
- Verify the orientation of all breakout modules
- Confirm USB and MicroSD access is unobstructed
- Check all custom footprint pin mappings against the schematic

---

## 2. Generate Gerber Files

In KiCad PCB Editor:

**File → Fabrication Outputs → Gerbers (.gbr)**

Select the required layers.

For this 2-layer PCB, the important layers are typically:

- `F.Cu`
- `B.Cu`
- `F.SilkS`
- `B.SilkS` if used
- `F.Mask`
- `B.Mask`
- `Edge.Cuts`

Generate the Gerber files into a dedicated fabrication folder.

Example:

```text
PCB/Fabrication/Gerbers/


Notes:
- The only extra thing I changed was the colour of the PCB because I thought that red looked cooler (especially for the decal).
