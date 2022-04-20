
# GENESIS AUTO1 TEAM6 BODY CONTROL SYSTEM
------------------------------------------------------------------------
   #                                                    Feature_1
--------------------------------------------------------------------------
## AUTOMATIC WINDOW OPENING AND SUNROOF
### Abstract
Power windows or electric windows are automobile windows which can be
raised and lowered by pressing a button or switch, as opposed to using a crank handle.
### Requirements
#### High level requirements
1. The window has to start moving after the command is issued.
2. The window has to be fully opened and fully closed.
3. The driver command has priority over the passenger command.
#### Low level requirements
1. The force to detect when an object is present should be less than 100 [N].
2. If the up or down command is issued for at least 200 [ms] and at most 1 [s], the window has to be fully opened
or closed, respectively.
3. When an object is present, the window should be lowered by approximately 10 [cm].

### Features Of Power Windows:
Keeping aside the generic feature of the windows being rolled up and down with just the touch of a button, 
the power windows come with some unique features that make them more user-friendly and convenient. These features can be summed up as follows:

#### Automatic Down: 
This is a very common feature in almost all power windows. This feature allows the user to make the windows go all the way 
down by just tapping the button once. The system uses a circuit to monitor the amount of time that the switch was held down.
If the switch is held down for less than a second, the window goes down all the way to hit the limit switch and stops there.
In case the button is held down for a longer time, the circuit analyses the time and stops rolling the window down as soon as the button is released.

#### Automatic Up:
This feature is not very common as it has certain complications. The automatic up works in the same way as the automatic down.
But, the automatic up feature poses a risk. While the window goes up, if anything gets in the way of the window, like a child’s 
hand or a pet dog or cat’s paw, it is highly likely to injure them. As the window won’t stop until it hits the limit switch,
it engages a risk of an accident. The only way out of this problem is the introduction of another circuit into the system, that 
can monitor the speed at which the window rolls up. As the speed is slowed down due to an obstruction, the circuit reverses the 
power back to the motor and the window goes down.

### Advantages 
1) It allows the driver to control the windows with just the touch of his fingers.
2) It allows people with hand injuries or other physical complications to easily operate the windows.
3) Drivers can easily control the windows even while driving.
4) The master power panel in the front also allows the driver to operate all 
5) the windows simultaneously, without leaving his seat. This feature is very helpful in case there are children in the back seat.
6) 
### Disadvantages
1) Many a times, the window regulator also known as the window track, might stop functioning. This causes a power window failure.
2) Power windows might also stop working because of a broken motor, a broken cable pulley, or a broken switch.
3) Worn off window regulators might also be a reason behind a dysfunctional power window.
4) 
### SWOT Analysis
![window swot](https://user-images.githubusercontent.com/98832333/160218982-7179e7c9-2cec-4ca0-bf4c-bfd1cb8ffef5.PNG)

### 4W's and 1 H
##### WHY
They're easier to use than traditional crank windows and many systems offer driver control over rear windows for safety reasons.
##### WHO
Can be used by the drivers and passengers to automate the window locking 
##### WHEN
Can be used when safety is the main concern while travelling in the car
##### WHERE 
Can be used in the car which are capable of having sensors to detect the opening and closing of windows.
##### HOW
You tap and release the down switch and the window goes all the way down. 
This feature uses a circuit that monitors the amount of time you hold the switch down.
---------------------------------------------------------------------------

------------------------------------------------------------------------
   #                                                    Feature_2
--------------------------------------------------------------------------
## Air Conditioning System
The air conditioning system in the car works by connecting the refrigerant between the state of liquid and gas. As the refrigerant changes conditions, it absorbs heat and moisture from the vehicle and allows the system to release cool, dry air.
To change the refrigerant between liquid and gaseous state, the air conditioning system works to control the pressure and temperature.

In the past, automotive air conditioning systems used the R-12 as a refrigerant. R-12 (aka Freon) is a highly effective CFC based (chlorofluorocarbon) refrigerant that is non-flammable and non-toxic to humans. In the late 1980's, scientists discovered that widespread use of R-12 was damaging the Earth's ozone layer.
Manufacturers modified the R-134a in the mid-1990s. R-134a is an HFC-based (hydrofluorocarbon) refrigerant that does not have the ozone-depleting properties of R-12 / Freon. The latest refrigerant is R-1234yf, which produces less greenhouse gases. Europe needs to use the R-1234yf, and in the near future it is likely to be the new standard in the United States.

## SWOT Analysis
#### STRENGTH 
1) Eliminate human error that can occur with attempting to control temperatures manually. 
2) Save time. 
3) Minimize costs. Automate your process from start to finish.
#### Weaknesses
1) Recalibration is difficult
2) As output voltage is very small so it needs amplification
3) Require expensive TC wire from the sensor to recording device
#### Opportunities
1) Good reproducibility
2) High-speed response
3) They are rugged
4) They are a self-power active device
#### Threads
1) The cold junction and lead compensation is essential
2) Less sensitivity
3) They require a reference for operation
4) The stray voltage pick up is possible
## 4W's and 1 H
#### Who.
#### When
If it falls below the set temperature, it sends a signal to activate the heater to raise the temperature back to the setpoint.
#### Where
We commonly use temperature control systems in Air Conditioners, Refrigerators, geysers, etc. 
where the temperature is automatically adjusted as per the input settings.
#### What
The controller takes an input from a temperature sensor and has an output that is connected to a control element such as a heater or fan.
#### How
A temperature controller is an instrument used to control temperature calculating the difference between a setpoint and a measured temperature.


----------------------------------------
##  Requirements:
##  High Level Requirements ##

|ID| Description|
-- |-
| HLR_1 | It shall have temperature sensor to detect .|
| HLR_2 | It shall set the temperature to which user want  . |
| HLR_3 | It shall switch off the coolent when temperature is matches with input temperature.  |
| HLR_4 | It shall switch on the coolent when temperature is dismatch with input temperature.  |
---------------------------------




## LOW LEVEL REQUIREMENTS:- ##
| HLR_ID |LLR_ID | Design_consideration | 
| - | -| -| 
| HLR_1 | LLR_1.1 | It shall temperature sensor to detecct temperature  |
| | LLR_1.2 | it shall have proper logic to match with input temperature |  
| HLR_2 | LLR_2.1 | It shall read input from user |
| | LLR_2.2 | it shall set temperature which reads from user | 
| HLR_3 | LLR_3.1 | It shall switch on ac when temperature inside car is mismatch with input temperature by user |
| | LLR_3.2 | it switch on coolent temperature inside car is mismatch with input temperature by user |  
| HLR_4 | LLR_4.1 | It shall switch off ac when temperature inside car is mismatch with input temperature by user |
| | LLR_4.2 |  it switch off coolent temperature inside car is mismatch with input temperature by user  |  
-----------------------------------------------------------------------------------
#
| HLR_Test ID | Description | Input | Expected output | Actual Output | 
| --- | --- | --- | --- | --- | 
| 01 | it shall read temperature from sensor  | temperature sensor given 28| temperature shown 28 | Yet to do |
| 02 | It shall have temperature sensor to detect | input temperature by user| it is displaying temperature |  Yet to do |
| 03 | It shall switch off the coolent when temperature is matches with input temperature. | input temperature by user | switch off the coolant | Yet to do |
| 04 |  It shall switch on the coolent when temperature is dismatch with input temperature. | input temperature by user| switch off the coolant | Yet to do| 
-----------------------------------------------------------------------
---------------------------------------------------------------------------

------------------------------------------------------------------------
   #                                                    Feature_3
--------------------------------------------------------------------------

# Automatic wiper system

####  introduction:

* we are doing a project on body control system in that i have taken a feature of wiper system. A windshield wiper system comprises a wiper drive and two wiper arms. The drive moves the two wiper arms at a certain angle across the windshield, providing a clear view for the driver and passenger. A specially-shaped rubber wiping lip ensures an optimal wiping result.




#### Applications: -
* The wiper serves to clean the windshield of the car at the front and rear, although not all cars have wipers on the rear side.
* Wiper works by removing oil, dust, rainwater, and dirt that get stuck to the windshield.
* It is used in four wheelers
* It is used in aircrafts


--------------------------------------------------------

----------------------------------------------------------
##   4W's & 1H
| Sl.No | Questions | Description | 
| :-----: | :-----: | ----- |
| 1. | What | automatic wipers use a sensor that is placed behind the windshield.. |
| 2. | Who | Automatic wipers can use in buses,cars etc . | 
| 3. | When | When it rains, the sensor beams out infrared light that is reflected back at different angles based upon the intensity of water droplets falling on the windshield.  . |
| 4. | Where | Automatic wipers are can use in automobiles . | 
| 5. | How | The rain sensor monitors the amount of moisture on the windshield and automatically turns the wipers on. . |
--------------------------------------------------------



---------------------------------------------------------


##  Requirements:
##  High Level Requirements ##
|ID| Description|
| :-------: |----------------------------------------------------------------------------------------------------------------------------------|
| HLR_1 | It shall have optical sensor.|
| HLR_2 |  It shall have rain sensor  |
---------------------------------
## LOW LEVEL REQUIREMENTS:- ##
| HLR_ID |LLR_ID | Design_consideration | 
| - | -| -| 
| HLR_1 | LLR_1 | optical sensor to detecct the moisture  |
| HLR_2| LLR_2 | rain sensor is used to detect the speed |  
## Advantages:
* Low cost automation project.
* Free from wear adjustment.
* Less power consumption.
* Operating principle is very easy Installation is simple. 
---------------------------------------------------------------------------

------------------------------------------------------------------------
   #                                                    Feature_4
--------------------------------------------------------------------------

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

