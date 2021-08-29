# Laser_based_communication_system
![image](https://user-images.githubusercontent.com/52691060/131262680-9a4e4734-d777-483a-9164-486a5320f3fd.png)

## About Project
 
 It is a IoT-based project that uses a high bandwidth and long-distance reliable mode of Analog-Digital conversion using pulsating laser beams, and data is transmitted in encrypted form from sender to receiver, and when data is receiver in reciver end then data is again decrypted to get original data.
 
 ## Project Description
 
We are thinking of implementing this design as a High-Bandwidth & Long Distance Reliable Mode of Analog-Digital Conversion using pulsating LASER Beams. The transmitter will include an Arduino & the receiver can be another microcontroller like Arduino, NodeMCU or Raspberry Pi. We can transmit sensor data / preset data / user custom data and maybe multimedia content over long distances at extremely-high power efficiency & ultra-low cost margins to generate a complete IOT Network without cabling or a dedicated Networking system like WIFI. 
We initially thought of using an LDR in the Receiver section but the LDR is usually biased by the power supply & usually slow to react to changing intensity of light patters so we required a more reliable approach.
Solar panel was the best candidate, since it was extremely accurate & it generates voltage on its own when excited by charged photons. We just amplified that little current it generated just from a simple laser beam (we used a Focussed Torch since we have damaged our Laser Beam) using 2 High Gain and 2 Power Transistors to create a fast-accurate signal. With little calibration with capacitors, shunt resistances and signal diodes, we could isolate noise from the circuit as well.
 
 
 
 

