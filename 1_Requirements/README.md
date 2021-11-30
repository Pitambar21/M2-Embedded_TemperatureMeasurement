## M2-Embedded_Temperature Measurement System For Bus

# Requirements

## Introduction
-  Automation is a necessity in our day to day life  because it not only seeks to improve the quality of life for humans at both home and work, it allows the distribution of both quality products and services to be made available at faster rates, reduces down time and human error. This days the technology is developing at very high speed innovation and advancements is their in all the sectors. The Temperature measurement system for Bus is capable of maintaining the proper temperature inside.The main aim of this project is to sense the temperature inside the bus  using temperature sensor (LM 35) and it will give the signal to fan which is present above the passenger's seat which will get switched ONN and Off according to requirement .

- The fan will get on and off based on the temperature inside the bus at that moment .for Example:- if the temperature is high  inside the bus so the fan will switch on and if the temperature is low so fan will switch off Based on this our controller will onn and off the fan accordingly . The temperature sesnor (LM35) will sense the heat inside the bus and a LCD display will show the temperature. In our project we have used ATmega328 microcontroller along with temperature sensor, Push button, LED and LCD diplay,etc.

## Features
- The System will sense the temperature and switch the fan ONN and Off Accordingly.
- Low cost and robust system.
- Modular Approach.

## Defining the System
- Software :  The platform  used to run  this project code is visual studio code(version 1.57) and for circuit simulator we have to use SimulIDE software.
- Operating System :  Windows 10
- Processor: Intel dual Core i5

## SWOT- Strengths, and Weakness, Opportunities Threats

### Strengths
- User Friendly and easy to use.
- Easy to alter the temperature inside the bus.
- Modular Approach, Low cost and Robust system.

### Weakness
- Speed contorl is independent of individual perference it will either on or off.
### Opportunities
- Save energy by switching off  in low temperature and It is a modern way of approach.
### Threat
- Micro controller is the heart of the circuit, if controller is damaged the whole system will be interrupted.

## 4W's and 1'H
### **WHO** : 
### **WHAT** : 
### **WHERE** :
### **HOW** :

## Detail requirements

### High Level Requirements
| High Level Requirements      | Description |Status|
| ----------- | ----------- | ----------- |
| HLR1      | Microcontroller Atmega328  |Implemented|
| HLR2   | Temperature Sensor|Implemented|
| HLR3  | Display|Implemented|Implemented|
| HLR4   | Software used|Implemented|

### Low Level Requirements
| Low Level Requirements      | Description |Status|
| ----------- | ----------- |----------- |
| LLR1      | LM35 and ADC     |Implemented|
| LLR2   |LCD and LED |Implemented|
| LLR3  | Code Blocks with AVR GCC compiler |Implemented|
| LLR4   | SimulIDE |Implemented| 


