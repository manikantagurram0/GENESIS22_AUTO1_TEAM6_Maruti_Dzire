---------------------------------
![Screenshot (22)](https://user-images.githubusercontent.com/98829237/164151542-6dba4b48-1944-4d16-b661-759bf9b52901.png)
--

![Screenshot (23)](https://user-images.githubusercontent.com/98829237/164151684-daa17582-9ba0-46bd-98f7-ca8dcacec3fc.png)

---
![Screenshot (24)](https://user-images.githubusercontent.com/98829237/164151758-3e2cf8f4-cf2e-4490-a9e6-234b5589fb9e.png)
----
![Screenshot (25)](https://user-images.githubusercontent.com/98829237/164151855-393f20e8-bfd7-49d8-8e4b-50170e029eae.png)

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
But, the automatic up feature poses a risk. While the window goes up, if anything gets in the way of the window, like a child???s 
hand or a pet dog or cat???s paw, it is highly likely to injure them. As the window won???t stop until it hits the limit switch,
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
# Requirements
## High Level Requirements
* The window has to start moving within specified milliseconds after the command has been issued.
* The window has to be fully opened and closed within specified milliseconds
* Power windows can detect an object if interferred and stop at that place as soon as it detects the object.

## Low Level Requirements
* The driver command can also have a priority over the passenger command
* If the up or down command has been issued for at least one second then the window should enter the auto behaviours where the window opens or closes completely.
* The window object sensor should detect and make stop the window as soon as possible within the specified milliseconds.
  
# Market Analysis
The global automotive power window market has been segmented into vehicle type, market, and region. By vehicle type, further, the market has been segmented into 
passenger cars and commercial vehicles. The passenger car segment is expected to dominate the market over the forecast period owing to the rise in the adoption of 
the advanced technologies in the passenger cars owing to safety and convenient features. The commercial vehicle segment is expected to show steady growth in the 
market over the forecast period. By market, the global automotive power window market is segmented into the aftermarket and OEMs. The OEM segment is expected to show 
exponential growth in the market over the forecast period. The increasing adoption of a power window in the mid-level entry segment cars by OEMs is expected to drive 
the growth of this segment in the market. The aftermarket segment is expected to show steady growth in the market over the forecast period owing to the high cost of 
power window replacement in the car after accidents.

## KEY PLAYERS COVERED IN THE AUTOMOTIVE POWER WINDOW MARKET:
Some of the major companies that are present in the automotive power window market include Robert Bosch GmbH, Denso Corporation, AISIN SEIKI Co., Ltd., Valeo, Johnson Electric Holdings Ltd., Grupo Antolin, Continental AG, among others.  

## SEGMENTATION

| ATTRIBUTE| Details|
|----------|--------|
| By Vehicle Type| Passenger and Commercial|
| By Market| Aftermarket and OEM's|


## History
Packard had introduced hydraulic window lifts (power windows) in fall of 1940, for its new 1941 Packard 180 series cars.[1] [2] This was a hydro-electric system. In 1941, the Ford Motor Company followed with the first power windows on the Lincoln Custom (only the limousine and seven-passenger sedans).[3] Cadillac had a straight-electric divider window (but not side windows) on their series 75.

Power assists originated in the need and desire to move convertible body-style tops up and down by some means other than human effort. The earliest power assists were vacuum-operated and were offered on Chrysler Corporation vehicles, particularly the low-cost Plymouth convertibles in the late 1930s.

Shortly before World War II, General Motors developed a central hydraulic pump for working convertible tops.[4] This system was introduced on 1942 convertibles built by GM. Previously, GM had used a vacuum system which did not have the power to handle increasingly larger and complex (four side-windows vs. only two) convertible top mechanisms.

# Test Plan and Output


### High Level Test Plans
----------------------------------------------------------------------------------------------------------------------
| SR.NO  | TEST                                         |   INPUT      | EXP. OUTPUT     | OUTPUT        |Type of test |
|--------|--------------------------------------------  |--------------|-----------------|---------------|-------------|
|    1)  | Check if system is working as expected       |              |                 |               |             |          
|    2)  | Check if system is able to handle conditions |              |                 |               |             |
|    3)  | Check for sensors and working                |              |                 |               |             |


### Low Level Test Plans

| TEST ID | Input_Specification | Output_Specification | Expected_Output |Observed_Output| TEST PASS/FAIL|
| ----- | ----- | ------- | ------- | ------ |------ |  
|TC_1| Check if window up command is working properly  | Window Close| Window Close| Window close | p/f|
|TC_2|  Check if window down command is working properly | Window open | Window down| Window down | p/f|
|TC_3|  Check if driver has commands over passenger windows | give commands to passenger windows | give commands to passenger windows | give command to windows | p/f|
|TC_4| Check if the window object sensor is working propery| Object interferes window should stop| object interferes window should stop| object interferes window should stop| p/f
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



## Market analysis
Air conditioning is an important part of the car air conditioning system. In your car's air conditioning system, a refrigerant is used to cool the air as it passes. The role of condenser is to convert the refrigerant from high temperature vapor to liquid by thickening.

If the condenser fails, your entire air conditioning system will be affected. The condenser may need to be replaced or repaired to restore proper functioning to your car's air conditioning system.

Symptoms of faulty AC condenser: Cold air does not come out, noticeable leakage ... etc.
![main orig](https://user-images.githubusercontent.com/98829237/164154833-629ccca6-2763-46c1-a7ee-b93ab2aa993f.jpg)

Replacing the car air conditioning conditioner will allow your vents to always blow cool air.
Maruti Suzuki Swift Dzire is a compact sedan made by domestic manufacturer Maruti. It plays the manual air cooling and heating option in its lower and mid-range terms and has a fully automatic climate control system at the top. There is no rear AC vent in any of the trims of this model available in the market. Fully automated climate control is essential in the car, as it allows the driver to focus on his basic driving task and not be bothered by things like repeatedly adjusting the cabin temperature.

Among the competitors in the market, TATA Zest is the only car that comes with automatic climate control system. Others, such as the TATA Manza, Toyota Etios and Volkswagen Polo only operate standard air cooling and heating systems manually.

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




## Market Analysis
What types of exterior lighting are there?
Automotive exterior lighting cover the front, rear, and sides of a vehicle, although some special functions may be on the roof as well. For the two main purposes of illumination and signaling, various lighting functions are defined by law in their photometric requirements, position, size, color of light, and many more aspects.
The global Automotive Lighting Market is estimated to be USD 27.0 billion in 2020 to USD 34.9 billion in 2025, at a CAGR of 5.3% during the forecast period. An increase in premium and SUV sales and advancements in lighting technology are some of the major factors driving the growth of the automotive lighting industry.

![image](https://user-images.githubusercontent.com/98815258/164147451-2bc348fb-0c89-4562-86a7-fdf4906d70cd.png)


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






