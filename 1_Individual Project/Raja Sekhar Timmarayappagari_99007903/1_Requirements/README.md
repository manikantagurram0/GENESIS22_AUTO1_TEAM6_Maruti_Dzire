## Introduction
The headlamps are one of the most important components in a vehicle. The headlamps are basically lamps which are attached to the front of a vehicle to illuminate the road ahead. People often consider the headlamps and the headlights to be the same. But, to be precise, the headlamp is a component while the beam of light produced and distributed by the headlamp is called headlight. Now basically, there are two types of headlight system used in the modern era cars. They are reflector lights and projector types. 

Projector Headlight System - In comparison, the projector headlight system is more complex in construction and is generally more expensive by a significant margin. However, they do emit a wider range of light, thus producing even output. Due to their ability of scattering light ahead strongly, the HID and Laser headlights are used only with the projector headlight system, in addition to the halogen and LED as well.

Reflector Headlight System - This system is the simpler of the two in their construction, due to which they cost much lesser than the projector headlight system. This system consists of a metal housing as its most significant component, in which the light source is placed. This metal housing comes with strategically placed reflectors or mirrors, which disperse the light coming from the light source, giving a wide throw of light ahead, and it is this technology which is referred to as a multi-reflector system.


<br>
<br>

![image](https://user-images.githubusercontent.com/67085455/166293309-f4c77535-aa2d-4fb8-b2e5-a5d5c7760a5d.png)
<br>
<br>

![image](https://user-images.githubusercontent.com/67085455/166293733-8514f52f-6e30-43c8-8d1d-de722495bc1c.png)

<br>
<br>

## Requirements:
### High Level Requirements 
LLR ID	| Description
-|-
HLR01 | Lights shall ON when switch gets ON
HLR02 | Lights shall glow with high beam on mode1 of another button 
HLR03 | Lights shall glow with low beam on mode2 of another switch
HLR04 | Lights shall blink on button press
HLR05 | Lights shall OFF when switch gets OFF

### Low Level Requirements
HLR ID| LLR ID	| Description | 
-|-|-
HLR01| LLR01.1 |	Ignition must be ON|
||LLR01.2| Switch should be ON | 
|HLR02|LLR02.1| Ignition must be ON|
||LLR02.2| Switch should be ON  |
||LLR02.3| Another switch should be on Mode 1  |
|HLR03|LLR03.1| Ignition must be ON|
||LLR03.2| Switch should be ON  |
||LLR03.3| Another switch should be on Mode 2 |
HLR04|LLR04.1| Ignition must be ON|
||LLR04.2| Blink should press once |
HLR05|LLR05.1| Switch should be OFF |

## 4W's & 1H

### What 
Head lights system of a car with the high beam , low beam controls & a pass flicker
### Why
To ensure the visibility of road in night times , flicker to give pass command to opposite vehicle
### When
Especially when we are driving car in night times and flicker when we want to pass 
### Where
In Automotive vehicles like cars, trucks, buses i.e, it can be deployed
### How
Using User switch button designed inside the car to control the lighting system and It is developed with the help of CAN network protocol

## SWOT Analysis

### Strength
Adaptive lighting system which can effectively gives brightsness according to users command. which is designed with CAN network protocol 
### Weakness
It can be operated manually and some times it may get delay
### Opportunities
This system can be developed further to Automatic systems using different type of technologies coming in
### Threats
Normal wear and tear, Lights not working, switches may break 


