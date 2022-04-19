
#
| HLR_Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 01 | It shall have fuel range in between 0 to 100 | fuel sensor given 50| fuel remaining 25L | fuel remaining 25L | ✅ |
| 02 | It shall have fuel tank capacity of 50L | fuel sensor given 28| fuel remaining 14L it is b\w 0-50L |  fuel remaining 14L it is b\w 0-50L | ✅ |
| 03 | It shall have mileage of 20Kmp/h | fuel sensor given 50| it will travel 500kmph with remaing fuel | it will travel 500kmph with remaing fuel|✅ |
| 04 | It shall have fuel indication alert if fuel range is less than 10% | fuel sensor given 9| fuel_range_low | fuel_range_low| ✅ |
-----------------------------------------------------------------------
