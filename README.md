# ECE 198 Project: UV Communication System for Lupus Patients

This repository contains the design and implementation of a UV-based communication system aimed at supporting individuals with lupus erythematosus. The project uses two STM32F401RE microcontrollers, a UV sensor, and an OLED display to provide accurate UV index readings and enable basic communication functionalities.

## Project Features

- **UV Monitoring**: Measures UV index values in the range of 0 to 11+ with ±1 index point accuracy, ensuring users can determine safe exposure levels.
- **Communication System**: Utilizes two STM32 microcontrollers for transmitting and receiving data over a 1-metre distance, compliant with project requirements.
- **Display Output**: Includes an OLED display for real-time data visualization, optimized for visibility in both sunlight and darkness.

## Design Highlights

- **Hardware**:
  - **Microcontrollers**: STM32F401RE x 2
  - **UV Sensor**: GUVA-S12SD (240–370 nm UV range)
  - **Display**: GeeekPi OLED (128x64)
- **Calibration**: Calibrated to local UV index values for accurate regional readings.
- **Enclosure**: Durable 3D-printed ABS housings for sensor and display, protecting components from environmental damage.

## Group Members

- Brayden Zhong  
- Hiroki Nariyoshi  
- Koby Seeligsohn
