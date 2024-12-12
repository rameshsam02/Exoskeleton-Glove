# Exoskeleton Glove for Hand Rehabilitation

## Project Overview

This project presents the design and implementation of an exoskeleton glove for hand rehabilitation. The device leverages principles of motor learning to promote recovery through repetitive, error-free movements, exploiting neuroplasticity for motor recovery.

<img src="/Glove.gif" width="400" height="250"/>
## Features

- Lightweight and ergonomic design
- Focuses on rehabilitative purposes rather than assistive functions
- Enables Continuous Passive Motion (CPM) for hand rehabilitation
- Prioritizes user comfort, simplicity, and affordability

## Components

| Component | Description |
|-----------|-------------|
| MG90S Micro Servo Motor | Compact, high-torque actuator with metal gears |
| Arduino UNO R3 Controller Board | Central control unit powered by ATmega328P microchip |
| Breadboard | Standard-sized platform for circuit assembly |
| Jumper Wires | For flexible electrical connections |
| Power Supply Module | Provides stable voltage regulation |

## Fabrication

The exoskeleton was fabricated using 3D printing with the following specifications:

- **Printer:** Ultimaker S3
- **Material:** Polylactic Acid (PLA)
- **Design Software:** SolidWorks
- **Total Printing Time:** Approximately 22 hours

### Printing Parameters

| Parameter | Value |
|-----------|-------|
| Layer height | 0.15 mm |
| Print speed | 50 mm/s |
| Nozzle temperature | 200°C |
| Bed temperature | 60°C |
| Infill density | 20% |
| Infill Pattern | Triangles |
| Shell thickness | 0.8 mm - 1.0 mm |
| Support structures | Enabled (Tree type) |

## Software Integration

The device is controlled by an Arduino-based algorithm that manages servo motor movements based on user input. Key features include:

- Utilizes the Servo library for motor control
- Defines servo positions for opening (0 degrees) and closing (180 degrees)
- Implements a simple command interface for user input

## Results and Challenges

**Results:**
- Successfully demonstrated consistent functionality for 20 cycles per user input
- Cycle count is adjustable for specific therapeutic applications

**Challenges:**
- Limited torque from the MG90S Micro Servo Motor
- Time constraints affected iterative testing and redesign

## Ethical Considerations

- **Safety:** Designed to prevent excessive range-of-motion movements
- **Comfort:** Lightweight and ergonomic design for extended wear
- **Affordability:** Cost-effective design and manufacturing approach
- **Adaptability:** Accommodates various hand sizes

## Future Work

- Improve the actuation system for better torque output
- Conduct comprehensive user testing
- Incorporate feedback for design refinement

**Institution:** Northeastern University, Boston, USA
