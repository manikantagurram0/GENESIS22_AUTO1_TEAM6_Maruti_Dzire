## Research


 # Modern Automotive Headlamp Systems
Modern automotive headlamp systems will rely on use of sensors and actuators in the very near future. While various bus networks are workable the Local Interconnect Network (LIN) bus network may be the most workable because of its relative cost and performance advantages over the other contenders.

Modern automotive headlamp systems will rely on use of sensors and actuators in the very near future. While various bus networks are workable the Local Interconnect Network (LIN) bus network may be the most workable because of its relative cost and performance advantages over the other contenders.

A LIN is used as an in-vehicle networking and communications serial bus between “smart” sensors and actuators operating at 12V. The LIN utilizes a masterslave configuration with one master control unit and one or more slave units. The LIN master initiates communications and only one slave will respond. Only one message is allowed on the bus at a time, so there is no need to resolve bus collisions. A slave cannot initiate communication, only respond if correctly addressed. Maximum communication speed on a LIN bus is 19200 baud. Every 10ms, a LIN node can send a full 8-byte command with shorter commands being able to run every 5 ms. With this bandwidth the LIN bus can support leveling, bending, AFS (Adaptive Front-lighting System) and ballast functions of a headlamp. Additionally, accurate diagnostic feedback can be provided from the slave unit.

There are multiple architectures that can be utilized for headlamp wiring. The architectures vary depending upon the headlamp type, how the sensors are wired, the physical location of the Lighting Control Units (LCUs), type of actuators and the method used connect all together. There are two wiring architectures used most often for each type of headlamp: Halogen and High Intensity Discharge (HID). Note that both have the LCU in the cabin because of their proximity to the chassis sensors. Figure 1 below represents the wiring architecture for the Halogen headlamp. The LIN bus connection from the LCU to the lamp is a single wire connection, as it is today using the manual controls, but adds the additional opportunity for bending on the same single wire connection.


# Automatic Lights
## Introduction:
The lighting system of a motor vehicle consists of lighting and signalling devices mounted or integrated at the front, rear, sides, and
in some cases, the top of a motor vehicle. They illuminate the roadway ahead for the driver and increase the vehicle's visibility,
allowing other drivers and pedestrians to see its presence, position, size, and direction of travel, and its driver's intentions.
Emergency vehicles usually have distinctive lighting equipment to warn drivers and indicate priority of movement in traffic.

Features: Lighting controls according to our need 

Strength: Lighting regulations for better visibility & safety
Strict lighting regulations in developed nations of Europe and North America have driven the automotive lighting market. Vehicle lighting plays a crucial role, especially when driving on roads with heavy traffic. Road accidents are a major concern for governments across the world. According to the World Health Organization (WHO), 1.3 million people die each year due to road traffic collisions. Road traffic crashes cost most countries 3% of their gross domestic product. Therefore, it is important to better the driving conditions, which can be achieved partially by improving the lighting system. In 2011, with an aim to increase road safety, the European Union mandated daytime running lights (DRLs) on all new types of motor vehicles. The function of DRL is not to help the driver to see the road but to help other road-users to see the vehicle. According to the National Highway Traffic Safety Administration (NHTSA) of the US Department of Transportation, DRL has reduced fatal road accidents by approximately 13.8%. Regulatory legislation like this is expected to influence the automotive lighting industry.

Weakness: High cost of LED lights
The high cost of LED lights is a key concern for the automotive lighting market. Halogen and Xenon/HID, which were used earlier, have become less popular with the introduction of new technologies. Halogen lights have the major disadvantage of heating and energy-wasting, whereas Xenon light is more complex and requires some time to achieve full brightness. The LED, on the other hand, is small and allows great manipulation for various shapes and designs. It consumes less energy and emits a brighter light than halogen. However, as LED is more expensive than other technologies, the use of LED is confined to high-end or premium vehicles. The high cost of LED can be attributed to its high production cost. Materials such as Indium gallium nitride, Aluminum gallium indium phosphide, and Aluminum gallium arsenide are the major cost incurring substrates for manufacturers. Nowadays, LEDs are used with a projector as compared with conventional lights that required reflectors. Projector headlights are more expensive than reflector headlights and require more space within the vehicle. While the use of LED in automotive is currently low, it is expected to increase in the coming years, which in turn would help reduce its price.

Opportunity: Evolution of new technologies
Matrix LED, OLED, and laser lighting are some of the new and promising technologies for automotive lighting manufacturers. In matrix LED headlights, the high-beam unit is made up of 25 individual segments. The small LEDs work in conjunction with lenses, and reflectors connected in series are activated and deactivated or dimmed individually according to the situation. This enables the system to react precisely to other cars. It recognizes other cars using a camera and illuminates the road brightly. For instance, Audi’s Matrix LED headlights get the information they need from a camera, the navigation system, and other sensors.

Challenges: Less penetration of advanced lighting in the commercial vehicle segment
Commercial vehicles such as freight trucks operate thousands of miles every day. Therefore, the use of advanced lighting technologies may not be feasible. High cost discourages manufacturers from providing advanced lighting systems in this vehicle segment. Thus, only a few commercial vehicle manufacturers have introduced advanced lighting systems in their vehicles.

LED light technology is estimated to grow at the fastest CAGR during the forecast period
Premium vehicles are typically installed with LED lights due to their numerous benefits such as low power consumption, more adaptive features, and high aesthetic value. Moreover, LED headlights have less impact on the driver who is on the opposite side in comparison to xenon lights, and hence, this technology is accepted widely in the market. An increasing number of newl

## 4Ws & 1H
### What 
# 
## Requirements:
### High Level Requirements 
LLR ID	| Description
-|-
HLR01 | Lights shall ON when switch gets ON
HLR02 | Lights shall glow with high beam on mode1 of another button 
HLR03 | Lights shall glow with low beam on mode2 of another switch
HLR04 | Lights shall blink on button press
HLR05 | Lights shall OFF when switch gets OFF

### Low Level Requirements
HLR ID| LLR ID	| Description | 
-|-|-
HLR01| LLR01.1 |	Ignition must be ON|
||LLR01.2| Switch should be ON | 
|HLR02|LLR02.1| Ignition must be ON|
||LLR02.2| Switch should be ON  |
||LLR02.3| Another switch should be on Mode 1  |
|HLR03|LLR03.1| Ignition must be ON|
||LLR03.2| Switch should be ON  |
||LLR03.3| Another switch should be on Mode 2 |
HLR04|LLR04.1| Ignition must be ON|
||LLR04.2| Blink should press once |
HLR05|LLR05.1| Switch should be OFF |

## Test Plan 

Test ID |Input | ExpectedOutput | Actual Output | Status 
-|-|-|-|-
T01 | Lights goes ON when Switch ON while Ignition is ON | Lights ON | Passed
T02 | Switch is ON while Ignition is ON and another switch on mode1|Lights glow with high beam | Lights ON with high beam| Passed
T03 | Switch is ON while Ignition is ON and another switch on mode2 | Lights glow with low beam | Lights ON with low beam| Passed
T04 |  flicker button pressed while Ignition is ON| Lights blink|  Lights Blinks | Passed
T05 | Switch is OFF| lights go OFF| lights go OFF  | Passed

## Market Analysis
What types of exterior lighting are there?
Automotive exterior lighting cover the front, rear, and sides of a vehicle, although some special functions may be on the roof as well. For the two main purposes of illumination and signaling, various lighting functions are defined by law in their photometric requirements, position, size, color of light, and many more aspects.
The global Automotive Lighting Market is estimated to be USD 27.0 billion in 2020 to USD 34.9 billion in 2025, at a CAGR of 5.3% during the forecast period. An increase in premium and SUV sales and advancements in lighting technology are some of the major factors driving the growth of the automotive lighting industry.

![image](https://user-images.githubusercontent.com/98815258/164147451-2bc348fb-0c89-4562-86a7-fdf4906d70cd.png)


Front exterior lighting includes the:

Low beam headlamp (passing beam)
High beam headlamp (driving beam)
Front fog headlamp
Daytime running light (DRL)
Turn indicator
Front position lamp
In the rear, the lighting includes the:

Taillight position lamp (tail lamp)
Taillight stop-lamp
Turn indicator
Reversing light
Rear fog lamp
Center high-mounted stop light (CHMSL)
Along the sides of a vehicle, there may be:

A side turn indicator (fender or side mirror)
Side marker lights
![image](https://user-images.githubusercontent.com/98815258/164146707-cbde619f-3bbf-4472-ae29-5d0d0fd9db07.png)

Special Lighting
In addition to the lighting mentioned, there are other special lights that may be on a vehicle.
License plate illumination lights: A special group of lights illuminate the license plate to make sure the legal plates are visible any time in darkness, or visually demanding weather conditions.

Signature lights: In addition to the required lighting functions, some countries also allow signature light elements, such as illuminated logos of the OEM brand to be used on the exterior.  

Other lights include official authority/emergency light functions for:
Firefighters, police, ambulance (blue)
Road maintenance
Extended size vehicles
Hazard transport warning lights (yellow)
 
V2X lights: With the advent of autonomous cars and electrical cars, a very special group of lighting functions has emerged and developed almost silently.  These so-called "vehicle to X" (V2X) lighting functions are a hot topic of interest and research, along with sensor systems (such as cameras, LiDAR, and radar). V2X systems are a means of light-based visual communication to signal to pedestrians or other traffic participants ("X") the status or intention of silent vehicle, or one without a driver.

### Challenges (Automatic lights)
Automotive exterior lighting serves to ensure safety in road traffic. Using vehicle lights help the driver illuminate the lane and recognize the road, obstacles and traffic signs. The headlights with the high beam, low beam and fog light functions are primarily used for this purpose.

For drivers on the road, exterior lighting is used to ensure that road users perceive the presence of the vehicle, recognize a driver's intentions, and can react accordingly to them. Daytime running lights, turn lights, and brake lights are used for this purpose.

### specific functions of automotive exterior lighting
Signal lamps are designed to directly shine into the eyes of traffic participants. They are a major element of the visibility of a vehicle and therefore an important aspect of road safety. The purpose of these lamps is to signal a position or action, like taking a turn or braking. They also create an impression of the outer dimensions of the vehicle by correct placement of position lights.

Headlamps (low beam and high beam) what makes it possible for any vehicle to be driven at night. They are designed to illuminate the road ahead so drivers can see where they are going. They create contrast in case any obstacles or other vehicles a in the driving path of you vehicle. 
Low beams utilize a cut-off line in the beam pattern to avoid glaring oncoming traffic. They illuminate mostly the road and a bit left and right of it, but do not shine light into oncoming traffic.

High beams are also called driving beams. These are the headlights with the most range and create the best driver view at night. However, these headlights must only be used when there is no oncoming traffic since it would be blinding to the drivers of the oncoming traffic. For that reason, high beam headlights must be deactivated manually or must be controlled by an adaptive driving beam (ADB) system.

## History
Now, until the 1980s when the reflector headlight system was the only kind of headlight system offered on cars, there came a more advanced form of headlight system in the form of projectors, which changed the illumination technique in cars once and for all. So, as already mentioned before, the new modern era cars mainly have two different types of headlight system. They are reflector headlight system and projector headlight system. Both these headlight systems have the same kind of exterior construction, however, the projector headlight system uses a more complex construction involving a lens. So, here is what all you need to know about the two main types of headlights system used in cars.

'
