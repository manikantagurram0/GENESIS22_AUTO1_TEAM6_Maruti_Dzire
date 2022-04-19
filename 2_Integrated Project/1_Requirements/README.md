# Fire Detecting System
## Abstract
Fire Deduction System are designed to discover fires early in their development when time will still be available 
for the safe evacuation of occupants. Early detection also plays a significant role in protecting the safety of 
emergency response personnel. Property loss can be reduced and downtime for the operation minimized through early 
detection because control efforts are started while the fire is still small. Most alarm systems provide information to 
emergency responders on the location of the fire, speeding the process of fire control.
## Introduction
Alarm systems provide notice to at least the building occupants and usually transmit a signal to a
staffed monitoring station either on or off site. In some cases, alarms may go directly to the fire department, 
although in most locations this is no longer the typical approach.These systems have numerous advantages as discussed above. 
The one major limitation is that they do nothing to contain or control the fire. Suppression systems such as automatic sprinklers act to 
control the fire. They also provide notification that they are operating, so they can fill the role of a heat detection-based system if 
connected to notification appliances throughout the building.
## Fire Detection and Alarm System
1) To detect fire in the area during the initial stage.
2) To alert occupants, so that they escape the building safely.
3) Summon trained personnel to take charge of controlling the fire as quickly as possible.
4) To initiate automatic fire control and suppression system.
5) To support and supervise the fire control and suppression system.
## Fire Detection and Protection System
1) All the circuits from the detectors to the panels and the circuits from the panels to the actuating 
  devices (such as solenoid valves, deluge valves, push buttons etc) shall be in closed loop type and in close watch for open-and-short-circuiting.
2) Facilities shall be provided on the main fire alarm panel for sensitivity adjustment, isolation of detectors etc from the panel.
3) Panel of fire detection, alarm monitoring and annunciation system shall operate on DC-supply, 
   along with associated rectifier bank. Further each panel shall have the provision for batteries for charging.
4) Each set of battery shall have the capacity for a period of 12 hours from the instant of charger/AC failure.
## SWOT Analysis
![swot fire](https://user-images.githubusercontent.com/98832333/162891407-f9654df9-7853-42bf-b469-22e4adc16ab5.PNG)
## 4W's and 1 H
##### When
A fire alarm system warns people when smoke, fire, carbon monoxide or other fire-related emergencies are detected.
##### Where
Install smoke alarms inside each bedroom, outside each sleeping area and on every level of the home, including the basement
##### who
Used by those who need to be aware of fire accidents in buildings like malls,apartments,etc
##### What
Fire Alarm System is designed to alert us to an emergency so that we can take action to protect ourselves, staff and the general public
##### How
These alarms may be activated automatically from smoke detectors and heat detectors or may also be activated via manual fire alarm activation devices such as manual call points or pull stations.
## High Level Requirements
| ID | Description |
|-----|------------|
| HR01 | Each set of battery shall have the capacity for a period of 12 hours from the instant of charger |
| HR02 | Exit signs shall be painted o 18 gauge cold rolled sheet steel.|
| HR03 | Panel of fire detection, alarm monitoring and annunciation system shall operate on DC-supply |
| HR04 | All the circuits from the detectors to the panels and the circuits from the panels to the actuating devices |
## Low Level Requirements
| ID | Description | Status |
|----|-------------|-------------------------------------------- |
| LR01 | Connect the flame sensor to the breadboard.| Implemented |
| LR02 | Connect the positive terminal of the flame sensor to the GND pin of the Arduino Uno | Implemented |
| LR03 | Again connect the negative terminal of the flame sensor to the Analog pin of the Arduino board | Implemented |
| LR04 | Now connect the other end of the resistor to the 5V pin of the Arduino Pin | Implemented |
| LR05 | Connect the Active buzzer, connect the positive end of the buzzer to digital pin 8 , and the negative terminal of the buzzer to the GND | Implemented |
# Automatic light System
### Automatic Lights
#### Working principle: -

* The PIR sensor senses the movement of the human body through changes in the ambient temperature as the human body passes through it.

* Then it turns on the lighting load to which it is connected.

* The load of light will remain on until it senses movement.

* Once the motion is caught, it stops the lighting load.

* At night, the LUX adjustment knob allows you to adjust the light based on which the light load will either turn on / off automatically.


#### Brief introduction:

* The PIR motion sensor switch can detect infrared rays emitted from the human body. The active presence of the human body in the detection range / coverage area of light or any other electronic device can be activated automatically and when it is not there, the light will automatically become inactive.

#### Power:
* It is estimated that one unit of energy saved at the point of final use is equal to 2.3 units of energy produced.

* If energy saving practices are properly implemented, the equivalent of about 25,000 MW of electricity can be generated through the promotion of energy efficient measures.

#### PIR motion sensor for automatic light control

* The PIR Motion Sensor is a fully automatic indoor and outdoor security / courtesy light controller capable of controlling 2000W incandescent or 30W x 20 fluorescent light day and night. The built-in PC infrared (PIR) motion sensor turns on the attached lighting system as it detects movement in its coverage area. During the day, the sensor built into the photo cell saves electricity by disabling the lights. You can reduce your electricity bills by using PIR motion sensors and occupancy sensors.

* An adjustable time knob lets you choose how long the light lasts after activation and thus prevents power loss. In the evening or at night, you can also manage when the lights should be on through the LUX adjustment knob provided in the sensor.

#### Energy saving sensor:

* Using PIR sensors can save a lot of energy by turning off the lights when the space is not in use. Savings are huge in large facilities.

* It is estimated that one unit of energy saved at the point of final use is equal to 2.3 units of energy produced.

* Approximately 25,000 MW of electricity equivalent capacity can be saved by promoting energy efficient measures if energy saving methods are implemented properly.

* PIR motion sensors for home security

* If PIR motion sensors are installed in the front or backyard of your home, they serve as security sensors at night. In case any body jumps or sneaks into its detection range, the attached lights / siren or beep may automatically turn on to intimidate the intruder.



#### Applications: -

* Common toilets, for lights & exhaust fans
* Common staircase / Entrance / Basements
* Parking areas / garden lights
* Living room, Malls, ATMS
* Changing rooms in shops
* Offices / Conference Room
* Corridors & many more!


--------------------------------------------------------

----------------------------------------------------------
##   4W's & 1H
| Sl.No | Questions | Description | 
| :-----: | :-----: | ----- |
| 1. | What | Automatic lights on or off by using motion sensor. |
| 2. | Who | Automatic lights can use in hospital, Schools, college and offices . | 
| 3. | When | it detects the motion of human ad switch on the lights . |
| 4. | Where | Automatic lights are can use in bedrooms bathrooms and street lights . | 
| 5. | How | Then it turns on the lighting load to which it is connected the load of light will remain on until it senses movement. |
-------------------------------------------------------



---------------------------------------------------------


##  Requirements:
##  High Level Requirements ##
|ID| Description|
| :-------: |----------------------------------------------------------------------------------------------------------------------------------|
| HLR_1 | It shall have pir motion sensor .|
| HLR_2 | It shall have led to switch on/off  . |
| HLR_3 | It shall switch on when motion detects.  |
| HLR_4 | It shall switch off when motion not detects.  |
---------------------------------




## LOW LEVEL REQUIREMENTS:- ##
| HLR_ID |LLR_ID | Design_consideration | 
| - | -| -| 
| HLR_1 | LLR_1.1 | It shall pir sensor to detecct motion  |
| | LLR_1.2 | it shall have proper connection to board |  
| HLR_2 | LLR_2.1 | It shall have led to switch on/off |
| | LLR_2.2 | it shows the led to on/off | 
| HLR_3 | LLR_3.1 | It shall switch on when motion detects |
| | LLR_3.2 | it switch on when motion detect on pir sensor |  
| HLR_4 | LLR_4.1 | It shall switch on when motion detects |
| | LLR_4.2 | it switch off when motion detect on pir sensor  |  


