# sugar
A miniature hand wired macropad with 5 keys and a rotary encoder, powered by a RP2040 microcontroller. Based on the [Bento macropad](https://github.com/Dwin17/bento) originally designed by Dwin17, featuring a custom knob and without LED underglow. 

Turn the knob to control volume, press the knob to pause/play media. 

Pink - Media previous 
Yellow - Media next 
Green - Mission Control
Blue - Launchpad
Purple - Mute

I made this macropad so I could easily carry it with me and quickly open various applications and use shortcuts on my Mac. 

**DEMO: https://www.youtube.com/shorts/_mDDtd0E8uY**

![](https://github.com/ordinarydairy/sugar-keypad/blob/main/images/build%203.jpeg?raw=true)
![zine](https://github.com/ordinarydairy/sugar-keypad/blob/main/zine/zine%20-%20built.png?raw=true)


## Build instructions
- Print out all parts (case, bottom, knob)
- Push switches into rectanglular holes in case and push rotary encoder through circular hole. Use the nut to secure the rotary encoder in place.
    - You can put the keycaps and knob cap on or wait until later
- Turn upside down (hollow side up), connect a single pin on each switch as well as the ground pins on the rotary encoder (see schematic) together.
- Solder a wire to all other pins vertically

![](https://github.com/ordinarydairy/sugar-keypad/blob/main/images/build%201.jpeg?raw=true)
- Connect a wire from the connected ground pins to GND on the microcontroller
- Connect other wires to their respective pins on the microcontroller (see schematic)
    - switch 1: gp1
    - 2: gp0
    - 3: gp4
    - 4: gp3
    - 5: gp2
    - s1/clk: gp28
    - a: gp16
    - c: gp17

a and c are NOT connected to the correct pins in this image, connect them to gp16 and gp17 (bottom two pins on right) or the code controlling the volume knob won't work
![](https://github.com/ordinarydairy/sugar-keypad/blob/main/images/build%202.jpeg?raw=true)
- Push the microconcontroller down and align the usb port with the hole on the side of the case
- Glue the case bottom to the bottom of the case
- If you haven't already, put on keycaps and knob cap

## Assembly


![hi](https://github.com/ordinarydairy/sugar-keypad/blob/main/images/macropad%20assembly.png?raw=true)
![](https://github.com/ordinarydairy/sugar-keypad/blob/main/images/macropad%20view1.png?raw=true)
![](https://github.com/ordinarydairy/sugar-keypad/blob/main/images/macropad%20view2.png?raw=true)
![](https://github.com/ordinarydairy/sugar-keypad/blob/main/images/macropad%20view3.png?raw=true)
![](https://github.com/ordinarydairy/sugar-keypad/blob/main/images/macropad%20view4.png?raw=true)

### Case
![](https://github.com/ordinarydairy/sugar-keypad/blob/main/images/pad%20v2.png?raw=true)

### Knob
![](https://github.com/ordinarydairy/sugar-keypad/blob/main/images/knob.png?raw=true)

## Schematic
![](https://github.com/ordinarydairy/sugar-keypad/blob/main/schematic.png?raw=true)

## BOM
|Item               |Description                   |Quantity|Price ($)|URL                                                                                                              |Running Total|
|-------------------|------------------------------|--------|---------|-----------------------------------------------------------------------------------------------------------------|-------------|
|Raspberry Pi Pico  |MCU                           |1       |$3.95    |https://www.pishop.us/product/raspberry-pi-pico/?srsltid=AfmBOor29YDlRob1JJph2Q1QT-VeA2uOIgOy5Yc6gBU_7IDCbvj4NdHE|$3.95        |
|MOA Profile Keycaps|Keycaps                       |5       |$2.53    |https://www.aliexpress.us/item/3256811424441007.html                                                             |$6.48        |
|Cherry MX Switches |Key Switches                  |5       |$0.99    |https://www.aliexpress.us/item/3256804099108371.html                                                             |$7.47        |
|24 AWG Wires       | For hand wiring              | 1      | $3.24   |https://www.aliexpress.us/item/3256805264231583.html                                                             |$10.71       |
|EC11 Rotary Encoder|15MM Half Shaft Rotary Encoder|1       |$1.71    |https://www.aliexpress.us/item/3256804241801182.html                                                             |$12.42      
|Shipping | PiShop shipping | - |$6.76 ||$19.18
||| **TOTAL**|$19.18

(Aliexpress shipping to USA is free.)
