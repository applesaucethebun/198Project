# Design Process Review

Below is the list of six design revisions submitted for review. Each revision highlights specific updates or changes made during the design process.

## 1. Breadboard Diagram – Rev. 1 (`breadboard_rev1.fzz`)
- **Description**: Initial wiring configuration using UART communication between the two STM32 microcontrollers.
- **Key Features**: This version established communication via UART with basic connections for the OLED display and UV sensor.
- **Reason for Revision**: Transitioned away from UART communication in the subsequent version to simplify the design and improve power efficiency.

## 2. Breadboard Diagram – Rev. 2 (`breadboard_rev2.fzz`)
- **Description**: Updated wiring configuration after removing UART communication between STM32 microcontrollers.
- **Key Features**: Added direct pin-to-pin communication wiring and optimized connections for the OLED display and UV sensor.
- **Improvements Over Rev. 1**: Eliminated UART dependencies, reducing complexity and potential issues with synchronization.

## 3. Design Document – Rev. 1 (`design_doc_rev1.pdf`)
- **Description**: The initial version of the design document detailing system architecture, component selection, and UV sensor calibration approach.
- **Key Features**: Provided baseline information about the hardware setup, communication protocols, and UV monitoring requirements.
- **Reason for Revision**: Feedback on missing details about power constraints and display visibility prompted a second revision.

## 4. Design Document – Rev. 2 (`design_doc_rev2.pdf`)
- **Description**: Finalized version of the design document with updated details on power constraints, visibility requirements for the OLED display, and calibration methods.
- **Key Features**: Included comprehensive diagrams, detailed explanations of power management, and updated UV sensor specifications.

## 5. Firmware Code – Rev. 1 (`firmware_code_v1.cpp`)
- **Description**: Initial implementation of firmware for STM32 microcontrollers, integrating UV index readings and display output.
- **Key Features**: Basic UV sensor data collection and OLED output functionality. Configured GPIO pins for initial breadboard setup.
- **Reason for Revision**: Required modifications to handle inter-board communication after UART removal and optimization for power consumption.

## 6. 3D Housing Design – Rev. 1 (`housing_rev1.stl`)
- **Description**: Initial 3D housing design for the UV sensor and OLED display.
- **Key Features**: Basic structure for housing components, but lacked critical features like visibility for the OLED display and precise sizing for sensor placement.
- **Reason for Revision**: Needed updates to improve usability and fit for real-world usage.

## 7. 3D Housing Design – Rev. 2 (`housing_rev2.stl`)
- **Description**: Revised 3D housing design addressing visibility and sizing concerns.
- **Key Features**: Added a clear window for OLED visibility and adjusted dimensions for a snug, secure fit for the UV sensor.
- **Improvements Over Rev. 1**: Enhanced functionality and durability for outdoor conditions while maintaining weather resistance.
