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



