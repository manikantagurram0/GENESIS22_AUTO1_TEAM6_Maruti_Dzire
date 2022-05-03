## Abstract
## Air Conditioning System
The air conditioning system in the car works by connecting the refrigerant between the state of liquid and gas. As the refrigerant changes conditions, it absorbs heat and moisture from the vehicle and allows the system to release cool, dry air. To change the refrigerant between liquid and gaseous state, the air conditioning system works to control the pressure and temperature.

In the past, automotive air conditioning systems used the R-12 as a refrigerant. R-12 (aka Freon) is a highly effective CFC based (chlorofluorocarbon) refrigerant that is non-flammable and non-toxic to humans. In the late 1980's, scientists discovered that widespread use of R-12 was damaging the Earth's ozone layer. Manufacturers modified the R-134a in the mid-1990s. R-134a is an HFC-based (hydrofluorocarbon) refrigerant that does not have the ozone-depleting properties of R-12 / Freon. The latest refrigerant is R-1234yf, which produces less greenhouse gases. Europe needs to use the R-1234yf, and in the near future it is likely to be the new standard in the United States.
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
| HLR_1 | It shall have ignition on.|
| HLR_2 | It shall have air condition on  . |
| HLR_3 | It shall have change the temperature while changing knob .  |
| HLR_4 | It shall display the value of temperature on display.  |
---------------------------------




## LOW LEVEL REQUIREMENTS:- ##
| HLR_ID |LLR_ID | Design_consideration | 
| - | -| -| 
| HLR_1 | LLR_1.1 | It shall have ignition 'on' by prressing 's'  |
| | LLR_1.2 | It shall have ignition 'off' by prressing 's' again|  
| HLR_2 | LLR_2.1 | It shall have air condition on/off by pressing 'a' |
| | LLR_2.2 |  AC cannot be 'on' while ignition is off | 
| HLR_3 | LLR_3.1 | it shall change  the values of temperature of knob by pressing 'i' and 'd'  |
| | LLR_3.2 | Knob value cannot be change while AC and Ignition is off |  
| HLR_4 | LLR_4.1 | It shall increase the values of temperture by pressing 'i' |
| | LLR_4.2 |  it shall decrease the values of temperature by pressing 'd'  |  
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
## Market analysis
Air conditioning is an important part of the car air conditioning system. In your car's air conditioning system, a refrigerant is used to cool the air as it passes. The role of condenser is to convert the refrigerant from high temperature vapor to liquid by thickening.

If the condenser fails, your entire air conditioning system will be affected. The condenser may need to be replaced or repaired to restore proper functioning to your car's air conditioning system.

Symptoms of faulty AC condenser: Cold air does not come out, noticeable leakage ... etc.
![main orig](https://user-images.githubusercontent.com/98829237/164154833-629ccca6-2763-46c1-a7ee-b93ab2aa993f.jpg)

Replacing the car air conditioning conditioner will allow your vents to always blow cool air.
Maruti Suzuki Swift Dzire is a compact sedan made by domestic manufacturer Maruti. It plays the manual air cooling and heating option in its lower and mid-range terms and has a fully automatic climate control system at the top. There is no rear AC vent in any of the trims of this model available in the market. Fully automated climate control is essential in the car, as it allows the driver to focus on his basic driving task and not be bothered by things like repeatedly adjusting the cabin temperature.

 

Among the competitors in the market, TATA Zest is the only car that comes with automatic climate control system. Others, such as the TATA Manza, Toyota Etios and Volkswagen Polo only operate standard air cooling and heating systems manually.
