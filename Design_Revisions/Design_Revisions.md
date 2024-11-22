# Design Process Review

Below is the list of six design revisions submitted for review. Each revision highlights specific updates or changes made during the design process.

## 1. Breadboard Diagram – Rev. 1 (`Breadboard Revision 1.0.png`)
- **Description**: Initial theoretical wiring configuration using UART communication between the two STM32 microcontrollers. This version was planned but not yet applied to the physical breadboard.
- **Key Features**: 
  - Used UART for inter-board communication.
  - Included basic connections for the OLED display and UV sensor.
- **Reason for Revision**: Transitioned away from UART communication in the subsequent version to simplify the design and ensure practicality.

![Breadboard Rev. 1](Breadboard%20Revision%201.0.png)

## 2. Breadboard Diagram – Rev. 2 (`Breadboard Revision 2.1.png`)
- **Description**: Updated wiring configuration after removing UART communication between STM32 microcontrollers. This version was implemented physically on the breadboard.
- **Key Features**: 
  - Replaced UART with direct pin-to-pin communication wiring for simplicity and reliability.
  - Optimized connections for the OLED display and UV sensor.
- **Improvements Over Rev. 1**: Eliminated UART dependencies, reducing design complexity and avoiding synchronization challenges.

![Breadboard Rev. 2](Breadboard%20Revision%202.1.png)


## 3. Design Document – Rev. 1 (`design_doc_rev1.pdf`)
- **Description**: The initial version of the design document detailing system architecture, component selection, and UV sensor calibration approach.
- **Key Features**: Provided baseline information about the hardware setup, communication protocols, and UV monitoring requirements.
- **Reason for Revision**: Feedback on missing details about power constraints and display visibility prompted a second revision.

## 4. Design Document – Rev. 2 (`design_doc_rev2.pdf`)
- **Description**: Finalized version of the design document with updated details on power constraints, visibility requirements for the OLED display, and calibration methods.
- **Key Features**: Included comprehensive diagrams, detailed explanations of power management, and updated UV sensor specifications.

## 5. 3D Housing Design – Rev. 1 (`housing_rev1.stl`)
- **Description**: Initial 3D housing design for the UV sensor and OLED display.
- **Key Features**: Basic structure for housing components, but lacked critical features like visibility for the OLED display and precise sizing for sensor placement.
- **Reason for Revision**: Needed updates to improve usability and fit for real-world usage.

## 6. 3D Housing Design – Rev. 2 (`housing_rev2.stl`)
- **Description**: Revised 3D housing design addressing visibility and sizing concerns.
- **Key Features**: Added a clear window for OLED visibility and adjusted dimensions for a snug, secure fit for the UV sensor.
- **Improvements Over Rev. 1**: Enhanced functionality and durability for outdoor conditions while maintaining weather resistance.
