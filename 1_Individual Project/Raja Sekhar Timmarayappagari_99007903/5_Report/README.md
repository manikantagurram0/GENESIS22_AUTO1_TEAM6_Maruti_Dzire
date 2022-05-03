# Report
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

# Architecture
## Low Level Diagram
![uml Automotive (2)](https://user-images.githubusercontent.com/98815258/166183537-f09330b1-1330-48b6-b599-78c51edd5e47.jpeg)

## High Level Diagram
![uml Automotive (4)](https://user-images.githubusercontent.com/98815258/166183913-129486a6-3726-4893-ad2c-3c8dcb4b2f4c.jpeg)


## Test Plan 

Test ID |Input | ExpectedOutput | Actual Output | Status 
-|-|-|-|-
T01 | Lights goes ON when Switch ON while Ignition is ON | Lights ON | Lights ON | Passed
T02 | Switch is ON while Ignition is ON and another switch on mode1|Lights glow with high beam | Lights ON with high beam| Passed
T03 | Switch is ON while Ignition is ON and another switch on mode2 | Lights glow with high beam | Lights ON with low beam| Passed
T04 |  flicker button pressed while Ignition is ON| Lights blink|  Lights Blinks | Passed
T05 | Switch is OFF| lights go OFF| lights go OFF  | Passed

# Output
![Screenshot (88)](https://user-images.githubusercontent.com/98815258/166444270-d8f50fd4-b434-4674-80fb-d9c63a1c4d06.png)
![Screenshot (90)](https://user-images.githubusercontent.com/98815258/166444404-30538d78-c065-4663-a043-c8090f7d8c4b.png)
![Screenshot (91)](https://user-images.githubusercontent.com/98815258/166444412-aa498e8e-af3f-4ac9-a874-707992131458.png)
![Screenshot (92)](https://user-images.githubusercontent.com/98815258/166444416-62b5f916-1ba2-4142-9e0b-0b716e8ce169.png)
![Screenshot (93)](https://user-images.githubusercontent.com/98815258/166444419-85b4ec99-190e-4648-ad8b-645281dba6bf.png)
![Screenshot (94)](https://user-images.githubusercontent.com/98815258/166444423-8c8a175e-d82f-4a2d-a8fb-602ca27a223d.png)
![Screenshot (95)](https://user-images.githubusercontent.com/98815258/166444430-89085646-d203-4367-ae59-66a36bfd7e3d.png)
![Screenshot (96)](https://user-images.githubusercontent.com/98815258/166444435-0a6026be-d2ba-4fb3-a784-0638216c49e2.png)
![Screenshot (97)](https://user-images.githubusercontent.com/98815258/166444442-0ae0200a-f4ef-4b32-b619-b78f33c7d7f9.png)
![Screenshot (98)](https://user-images.githubusercontent.com/98815258/166444446-69412b60-16af-4a3c-b266-1ec604c9c82c.png)

<br>


https://user-images.githubusercontent.com/98815258/166446197-bf94b8e9-36bc-4a94-8ada-e99874d27df9.mp4



<br>
