# Automatic Lights
## Introduction:
The lighting system of a motor vehicle consists of lighting and signalling devices mounted or integrated at the front, rear, sides, and
in some cases, the top of a motor vehicle. They illuminate the roadway ahead for the driver and increase the vehicle's visibility,
allowing other drivers and pedestrians to see its presence, position, size, and direction of travel, and its driver's intentions.
Emergency vehicles usually have distinctive lighting equipment to warn drivers and indicate priority of movement in traffic.

Features: Lighting controls according to our need 

## Requirements:
### High Level Requirements 
LLR ID	| Description
-|-
HLR01 | When break applied light shall glow (Back Lights)
HLR02 | On right turn of car tyre, light shall glow ( Indicator 1)
HLR03 | On right turn of car tyre, light shall glow ( Indicator 1)
HLR04 | When Switch on light shall glow (Front Lights)

### Low Level Requirements
LLR ID	| Description | HLR ID
-|-|-
LLR01 |	When break applied red light shall glow | HLR01
LLR02 |break get released red light shall go off  | HLR01
LLR03	| On Right turn of car tyres, right indicator light shall glow untill it comes to straight line | HLR02
LLR04	| On Left turn of car tyres, left indicator light shall glow untill it comes to straight line | HLR03
LLR05 | When Switch on light shall glow (Front Lights) | HLR04
LLR06 | When Switch off light shall go off (Front Lights) | HLR04

## Test Plan 

Test ID |Input | ExpectedOutput | Actual Output | Status 
-|-|-|-|-
T01 | Break Applied | Red Light Glows | Yet to | Yet to
T02 | Break get released | Red Light Gos off | Yet to  | Yet to
T03 | On Right turn of car tyres |  right indicator light glows | Yet to | Yet to
T04 | On left turn of car tyres |  left indicator light glows | Yet to | Yet to
T05 | Switch on | Front Lights get on | Yet to | Yet to
T06 | Switch off | Front Lights get off | Yet to | Yet to

## Market Analysis
What types of exterior lighting are there?
Automotive exterior lighting cover the front, rear, and sides of a vehicle, although some special functions may be on the roof as well. For the two main purposes of illumination and signaling, various lighting functions are defined by law in their photometric requirements, position, size, color of light, and many more aspects.

Front exterior lighting includes the:

Low beam headlamp (passing beam)
High beam headlamp (driving beam)
Front fog headlamp
Daytime running light (DRL)
Turn indicator
Front position lamp
In the rear, the lighting includes the:

Taillight position lamp (tail lamp)
Taillight stop-lamp
Turn indicator
Reversing light
Rear fog lamp
Center high-mounted stop light (CHMSL)
Along the sides of a vehicle, there may be:

A side turn indicator (fender or side mirror)
Side marker lights
![image](https://user-images.githubusercontent.com/98815258/164146707-cbde619f-3bbf-4472-ae29-5d0d0fd9db07.png)

Special Lighting
In addition to the lighting mentioned, there are other special lights that may be on a vehicle.
License plate illumination lights: A special group of lights illuminate the license plate to make sure the legal plates are visible any time in darkness, or visually demanding weather conditions.

Signature lights: In addition to the required lighting functions, some countries also allow signature light elements, such as illuminated logos of the OEM brand to be used on the exterior.  

Other lights include official authority/emergency light functions for:
Firefighters, police, ambulance (blue)
Road maintenance
Extended size vehicles
Hazard transport warning lights (yellow)
 
V2X lights: With the advent of autonomous cars and electrical cars, a very special group of lighting functions has emerged and developed almost silently.  These so-called "vehicle to X" (V2X) lighting functions are a hot topic of interest and research, along with sensor systems (such as cameras, LiDAR, and radar). V2X systems are a means of light-based visual communication to signal to pedestrians or other traffic participants ("X") the status or intention of silent vehicle, or one without a driver.

### Challenges (Automatic lights)
Automotive exterior lighting serves to ensure safety in road traffic. Using vehicle lights help the driver illuminate the lane and recognize the road, obstacles and traffic signs. The headlights with the high beam, low beam and fog light functions are primarily used for this purpose.

For drivers on the road, exterior lighting is used to ensure that road users perceive the presence of the vehicle, recognize a driver's intentions, and can react accordingly to them. Daytime running lights, turn lights, and brake lights are used for this purpose.

### specific functions of automotive exterior lighting
Signal lamps are designed to directly shine into the eyes of traffic participants. They are a major element of the visibility of a vehicle and therefore an important aspect of road safety. The purpose of these lamps is to signal a position or action, like taking a turn or braking. They also create an impression of the outer dimensions of the vehicle by correct placement of position lights.

Headlamps (low beam and high beam) what makes it possible for any vehicle to be driven at night. They are designed to illuminate the road ahead so drivers can see where they are going. They create contrast in case any obstacles or other vehicles a in the driving path of you vehicle. 
Low beams utilize a cut-off line in the beam pattern to avoid glaring oncoming traffic. They illuminate mostly the road and a bit left and right of it, but do not shine light into oncoming traffic.

High beams are also called driving beams. These are the headlights with the most range and create the best driver view at night. However, these headlights must only be used when there is no oncoming traffic since it would be blinding to the drivers of the oncoming traffic. For that reason, high beam headlights must be deactivated manually or must be controlled by an adaptive driving beam (ADB) system.

