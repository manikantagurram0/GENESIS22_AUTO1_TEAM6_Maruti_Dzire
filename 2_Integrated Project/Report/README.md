
---------------------------------------------------------------------------
#### Air Conditioning System
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
| 01 | it shall read temperature from sensor  | temperature sensor given 28| temperature shown 28 | temperature shown 28 |
| 02 | It shall have temperature sensor to detect | input temperature by user| it is displaying temperature |  it detects the temperature |
| 03 | It shall switch off the coolent when temperature is matches with input temperature. | input temperature by user | switch off the coolant | switch off the coolant |
| 04 |  It shall switch on the coolent when temperature is dismatch with input temperature. | input temperature by user| switch off the coolant | switch off the coolant| 
-----------------------------------------------------------------------
