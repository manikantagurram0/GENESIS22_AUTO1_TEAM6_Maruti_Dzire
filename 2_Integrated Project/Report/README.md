
---------------------------------------------------------------------------
#### Air Conditioning System
The air conditioning system in the car works by connecting the refrigerant between the state of liquid and gas. As the refrigerant changes conditions, it absorbs heat and moisture from the vehicle and allows the system to release cool, dry air.
To change the refrigerant between liquid and gaseous state, the air conditioning system works to control the pressure and temperature.

In the past, automotive air conditioning systems used the R-12 as a refrigerant. R-12 (aka Freon) is a highly effective CFC based (chlorofluorocarbon) refrigerant that is non-flammable and non-toxic to humans. In the late 1980's, scientists discovered that widespread use of R-12 was damaging the Earth's ozone layer.
Manufacturers modified the R-134a in the mid-1990s. R-134a is an HFC-based (hydrofluorocarbon) refrigerant that does not have the ozone-depleting properties of R-12 / Freon. The latest refrigerant is R-1234yf, which produces less greenhouse gases. Europe needs to use the R-1234yf, and in the near future it is likely to be the new standard in the United States.


#
| HLR_Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 01 | it shall be  | fuel sensor given 50| fuel remaining 25L | fuel remaining 25L | ✅ |
| 02 | It shall have fuel tank capacity of 50L | fuel sensor given 28| fuel remaining 14L it is b\w 0-50L |  fuel remaining 14L it is b\w 0-50L | ✅ |
| 03 | It shall have mileage of 20Kmp/h | fuel sensor given 50| it will travel 500kmph with remaing fuel | it will travel 500kmph with remaing fuel|✅ |
| 04 | It shall have fuel indication alert if fuel range is less than 10% | fuel sensor given 9| fuel_range_low | fuel_range_low| ✅ |
-----------------------------------------------------------------------
