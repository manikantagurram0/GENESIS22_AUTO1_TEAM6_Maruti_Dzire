# AUTOMATIC WINDOW OPENING AND SUNROOF
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

----------
# Introduction
Automotive power windows derive power from the battery electrical system. Typically, battery voltage is routed to the fuse panel where a fuse, relay, or 
circuit breaker is used to transfer voltage to the power window master switch (or control module). The master switch is usually located in the driver door or the 
console. It is called a master switch because it operates all the power windows in the vehicle and contains the window lock-out switch (if applicable). 
Additionally, each door which houses a power window assembly is equipped with a single switch that operates only that window.Many late model vehicles also route 
window control systems through some type of general electrical module (GEM), body control module (BCM) or window control module (WCM). This is a typical system and 
some vehicle power window control systems will be different.

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
