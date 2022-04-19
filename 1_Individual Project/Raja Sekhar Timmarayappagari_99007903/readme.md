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


## Test Plan 

Test ID |Input | ExpectedOutput | Actual Output | Status 
-|-|-|-|-
T01 | Break Applied | Red Light Glows | Yet to | Yet to
T02 | Break get released | Red Light Gos off | Yet to  | Yet to
T03 | On Right turn of car tyres |  right indicator light glows | Yet to | Yet to
T04 | On left turn of car tyres |  left indicator light glows | Yet to | Yet to
T05 | Switch on | Front Lights get on | Yet to | Yet to


