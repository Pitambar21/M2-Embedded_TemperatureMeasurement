# Requirements

## Introduction
This days the technology is developing at very high speed automation and innovation is their in every field and everyone is looking for automation and advancements in all the sectors. The Temperature measurement using atmg328 is capable of maintaining the proper temperature inside the bus what this system will do it will sense the temperature inside the Bus using temperature sensor (LM 35) and it will give the signal to fan which will get switched ONN and Off accourding to requirement  .
In our project, the sensor will sense that the passenger  has been seated or not and if the passenger is  seated then he need to set the temperature accordingly. Based on that our controller will set the speed of a fan  to required speed . The temperature sesnor (LM35) will sense the heat and a LCD display will show requested the temperature. In our project we have used ATmega328 microcontroller along with temperature sensor, Push button, Heat generator, LED and LCD diplay,etc.
## Features
- The System will sense is  passenger seated or not.
-  Passenger has the access to modify the speed of a fan in the bus.
- Low cost and robust system.
- Modular Approach.

## SWOT- Strengths, and Weakness, Opportunities Threats
### Strengths
- User Friendly
- Easy to alter the temperature inside the bus.
- Modular Approach
- Low cost and Robust system.

### Weakness
- Its only applicable for those countries which are having low temperature.
### Opportunities
- It can be implemented by having both Heater and AC.
### Threats
- Not suitable for average or high temperature places.

## 4W's and 1'H
### **WHAT** : 
### **WHERE** : 
### **WHEN** : 

## Detail requirements
### High Level Requirements
| High Level Requirements      | Description |
| ----------- | ----------- |
| HLR1      | Microcontroller   |
| HLR2   | Temperature Sensor|
| HLR3   | Heat Generation|
| HLR4   | Display|
| HLR5   | Software used|

### Low Level Requirements
| Low Level Requirements      | Description |
| ----------- | ----------- |
| HLR1_LLR1      | ATmega328     |
| HLR2_LLR1   | LM35 and ADC|
| HLR2_LLR2   | ADC with PWM-fast|
| HLR3_LLR1   | Thermoelectric module|
| HLR4_LLR1   |LCD and LED|
| HLR5_LLR1   | Code Blocks with AVR GCC compiler |
| HLR5_LLR2   | SimulIDE |

