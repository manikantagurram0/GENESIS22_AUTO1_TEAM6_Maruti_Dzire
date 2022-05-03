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

# Output

![Screenshot (101)](https://user-images.githubusercontent.com/98815258/166528059-72be1788-8d22-4ce7-a775-19537415f537.png)
![Screenshot (100)](https://user-images.githubusercontent.com/98815258/166528181-6c068ac6-93da-4602-b5d4-4e52491de37b.png)
![Screenshot (99)](https://user-images.githubusercontent.com/98815258/166528212-28a1a136-8345-4c5e-8f68-db4b68d7a555.png)
![Screenshot (102)](https://user-images.githubusercontent.com/98815258/166528239-3f7dffaf-b77e-44a8-982f-19dbeb08d8b1.png)
