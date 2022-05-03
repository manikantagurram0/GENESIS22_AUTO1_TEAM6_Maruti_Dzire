# AUTOMATIC WINDOW & DOOR SYSTEM
# Introduction
Automotive power windows derive power from the battery electrical system. Typically, battery voltage is routed to the fuse panel where a fuse, relay, or 
circuit breaker is used to transfer voltage to the power window master switch (or control module). The master switch is usually located in the driver door or the 
console. It is called a master switch because it operates all the power windows in the vehicle and contains the window lock-out switch (if applicable). 
Additionally, each door which houses a power window assembly is equipped with a single switch that operates only that window.Many late model vehicles also route 
window control systems through some type of general electrical module (GEM), body control module (BCM) or window control module (WCM). This is a typical system and 
some vehicle power window control systems will be different.
<br>

## Requirements:
### High Level Requirements 
LLR ID	| Description
-|-
HLR01 | Doors shall close when car speed is more than 20kmph
HLR02 | Windows should get closed on the command of driver through switch
HLR03 | Windows should open on the command of driver through switch
HLR04 | Windows shall stop closing when obstacle detected in between
HLR05 | Each Window open on user interest switch
HLR06 | Each Window close on user interest switch
HLR07 | All windows should get closed when its raining

### Low Level Requirements
HLR ID| LLR ID	| Description | 
-|-|-
HLR01| LLR01.1 |	Ignition must be ON|
||LLR01.2| Car speed should be more than 20kmph | 
|HLR02|LLR02.1| Ignition must be ON|
||LLR02.2| driver should switch ON  |
|HLR03|LLR03.1| Ignition must be ON|
||LLR03.2| driver should switch OFF  |
|HLR04|LLR04.1| Ignition must be ON
||LLR04.2| Switch should be ON  |
||LLR04.3| object not detected --> close the window|
||LLR04.3| object detected --> stop closing the window|
HLR05|LLR05.1| User should turn on the switch|
HLR06|LLR06.1| User should turn off the switch|
|HLR07|LLR07.1| Ignition must be ON
||LLR07.2| Switch should be ON  |
||LLR07.3| Rain not detected --> default mode of the window|
||LLR07.4| Rain detected -->  close the window|


### Advantages 
1) It allows the driver to control the windows with just switching ON 
2) Drivers can easily control the windows even while driving.
3) The master power panel in the front also allows the driver to operate all 
4) can be protected from rain
5) can be protected from overspeed
6) allows users to operate on their interest at each window
7) 
### Disadvantages
1) Many a times, the window regulator also known as the window track, might stop functioning. This causes a power window failure.
2) Power windows might also stop working because of a broken motor, a broken cable pulley, or a broken switch.
3) Worn off window regulators might also be a reason behind a dysfunctional power window.
4) 
### SWOT Analysis

![vinay](https://user-images.githubusercontent.com/98829237/166516040-0fad7bb7-ee6c-4d2c-87b8-ec3bea428f08.jpeg)

### 4W's and 1 H
##### WHY
They're easier to use than traditional crank windows and many systems offer driver control over rear windows for safety reasons, rainy seasons
##### WHO
Can be used by the drivers and passengers to automate the window locking 
##### WHEN
Can be used when safety is the main concern while travelling in the car & when its raining
##### WHERE 
Can be used in the car which are capable of having sensors to detect the opening and closing of windows.
##### HOW
can be used with different switches for different modes, some operated manually and some are working automatically

----------

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
