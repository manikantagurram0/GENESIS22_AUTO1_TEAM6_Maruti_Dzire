## Abstract
Temperature control becomes an important task in many of automatic operations.There are sensors, right from simple 
to smart sensors that are used for detecting thetemperature. The environmental monitoring application, room temperature 
controlare few of popular examples of temperature control. Now, with the advent of newtechnologies—hardware and software support—temperature 
can be controlled,monitored, and recorded more ﬂexibly and with the programmable ways.
## Introduction
Automatic temperature control system is an important application usedin almost all modern 
gadgets and smart homes. The system for controlling tem-perature automatically is achieved by using Arduino Uno-based 
microcontrollersystem. Arduino Uno due to its increased popularity ﬁnds its varied range ofapplications.
## Temperature and Humidity
Use dehumidifiers and air conditioners, especially in hot, humid climates, to reduce moisture in the air, 
but be sure that the appliances themselves don't become sources of biological pollutants. Raise the temperature 
of cold surfaces where moisture condenses. Use insulation or storm windows
## Features
Irrespective of the temperature outside, the cabin temperature will constantly remain at the level you've set. 
The onboard sensors regulate the hot and cool cabin air according to the ambient temperature and humidity outside to 
match the levels you've set inside.
## Working of temperature Control
Warm temperatures are controlled as they are in a standard car heater, but to cool the air, the car is fitted with an additional 
compressor under the bonnet that directs air to a condenser. This then charges the air with refrigerant to cool it down, and the air 
is then sent through the air vents in its chilled state.

-------------------------
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
#### Who
who feel good cimate for the occupants.
#### When
If it falls below the set temperature, it sends a signal to activate the heater to raise the temperature back to the setpoint.
#### Where
We commonly use temperature control systems in Air Conditioners, Refrigerators, geysers, etc. 
where the temperature is automatically adjusted as per the input settings.
#### What
The controller takes an input from a temperature sensor and has an output that is connected to a control element such as a heater or fan.
#### How
A temperature controller is an instrument used to control temperature calculating the difference between a setpoint and a measured temperature.
