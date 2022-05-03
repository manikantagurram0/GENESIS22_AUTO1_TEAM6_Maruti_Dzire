# Test Plan

## Assuming Ignition is ON
| TestID | Input_Specification | Expected_Output |Actual_Output| Test Status|
-|-|-|-|-
T01|Car speed is more than 20kmph | Doors automatically closed | Doors automatically closed | Passed
T02| Dedicated switch Turned ON by driver| All windows closed | all windows closed| Passed
T03|Dedicated switch Turned ON by driver| All windows should open | All windows should open | Passed
T04| while closing windows, object not detected| close the windows|  close the windows| Passed
T05| while closing windows, object detected | stop closing the windows| stop closing the windows|Passed
T06|Rain detected | close the window | close the window|  Passed
T07| Rain not detected | default mode of the window|default mode of the window| Passed

## Ignition ON/OFF
| TestID | Input_Specification | Expected_Output |Actual_Output| Test Status|
-|-|-|-|-
T08| User turns on the switch| close the widows | close the widows| Passed
T09| User turns off the switch| open the widows|open the widows|Passed

