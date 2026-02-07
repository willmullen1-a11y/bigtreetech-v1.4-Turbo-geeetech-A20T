# Calibration and Troubleshooting Guide for SKR v1.4 Turbo on Geeetech A20T

## Table of Contents
1. [Stepper Motor Calibration](#stepper-motor-calibration)
2. [Bed Leveling](#bed-leveling)
3. [PID Tuning](#pid-tuning)
4. [Troubleshooting Tables](#troubleshooting-tables)
5. [G-code Commands](#g-code-commands)
6. [Calibration Log Template](#calibration-log-template)

---

### Stepper Motor Calibration
1. **Check Motor Connections**: Ensure all stepper motor connections are secure.
2. **Firmware Configuration**: Update configuration in firmware for steps per mm.
3. **Manual Calibration**: Use the following G-code to move the axis:
   - `G1 X10` (Move 10mm)
4. **Measurement**: Measure the actual movement with calipers, and adjust the steps/mm accordingly in the firmware.

### Bed Leveling
1. **Preparation**: Preheat the bed and nozzle.
2. **Paper Method**: Place a piece of paper between the nozzle and bed, adjust to have a slight drag.
3. **Adjustment Points**: Level the bed at the four corners and the center.
4. **Final Check**: Recheck all points to ensure they are consistent.

### PID Tuning
1. **Initial Setup**: Using Marlin firmware, run PID tuning with:
   - `M303 E0 S200 C8` (For Hotend)
   - `M303 S60 C8` (For Heated Bed)
2. **Save Settings**: Use 
   - `M500` to save the values.

### Troubleshooting Tables
| Issue                       | Possible Solutions                                   |
|-----------------------------|-----------------------------------------------------|
| Nozzle Clogs                | Clean the nozzle; check filament quality.           |
| Bed not heating             | Check wiring; verify settings in firmware.          |
| Layer adhesion issues       | Adjust temperature; ensure bed is leveled properly. |

### G-code Commands
- `G28` - Home all axes.
- `G90` - Set to absolute positioning.
- `M104 S200` - Set hotend temperature to 200°C.
- `M140 S60` - Set bed temperature to 60°C.

### Calibration Log Template
| Date       | Axis/Part      | Adjustments Made  | Notes               |
|------------|----------------|--------------------|----------------------|
| 2026-02-07 | X-Axis        | Steps/mm from 80 to 100| Initial calibration.  |
|            | Y-Axis        | Steps/mm from 80 to 100| Final adjustments.   |

---

This document provides a comprehensive guide for calibrating the SKR v1.4 Turbo on the Geeetech A20T. Ensure to follow each step methodically for best results.