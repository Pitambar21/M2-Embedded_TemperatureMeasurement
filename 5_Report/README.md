## M2-Embedded_Temperature Measurement System For Bus

# Requirements

## Research
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
- > WHO :- Any user who is travelling in the  bus can use this system.
- > WHAT :- The project main aim is to make a robust system which can automatically switch on and off the fan according to requirement.
- > WHEN :-To improve the quality of life for humans while travelling we can use this system. 
- > WHERE:-As in the super coach buses their are seperated compatment for every passenger's so according to their need the system can be deployed.
- > HOW :- By developing a embedded system which is user friendly and can be implemented without difficulty.
## Detail requirements

# Test Plans:-

|  Test ID | Description  | Input  | Output  | Status |
|---|---|---|---|---|
| TID_01  | Is pasenger seated  | push button=1| push button=1| PASS  |
| TID_02  | Is pasenger  seated or not | push button=0| push button=0 | PASS  |
| TID_03  | Temperature low | Temp=0| Fan=Off | PASS  |
| TID_04  | Temperature High | Temp=30| Fan=On  | PASS  |
| TID_05  | LED ON | Button=1 && Fan=1| LED=1 | PASS  |
| TID_06  | LED OFF | Button=0 && Fan=0| LED=0 | PASS  |
| TID_07| LCD Display | Temperature displayed |Temp display| PASS  |


### High Level Requirements
| High Level Requirements      | Description |Category |Status|
| ----------- | ----------- | ----------- | ----------- |
| HLR1      | User shall able to see the present Temperature |Technical |Implemented|
| HLR2   | Fan should automatically swtich off when temperature is low |Technical |Implemented|
| HLR3  | Fan should automatically swtich On when temperature is high| Technical|Implemented| 
| HLR4   | User shall able to control the speed of Fan| Technical|Future|

### Low Level Requirements
| Low Level Requirements      | Description|Category |Status|
| ----------- | ----------- |----------- |----------- |
| LLR1      |  Temperature should be dispaly on LCD Screen    |Technical|Implemented|
| LLR2   |If their is no passenger's the fan should be off| Technical|Future|




