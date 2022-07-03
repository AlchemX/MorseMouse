MorseMouse
==========

This code runs on an [Arduino Leonardo](https://docs.arduino.cc/hardware/leonardo) or any Leonardo clone or board with a [Microchip ATmega32u4](https://www.microchip.com/en-us/product/ATmega32U4) and emulates a USB mouse. Once you connect your CW key or keyer between pin 11 and ground (GND), the board will press and release the emulated mouse button according to your CW code. This is useful for CW practice sessions using training programs such as [HB9HQX Morse](https://hb9htc.clubdesk.com/hb9htc6/morsen/hb9hqx_morse_v7) or [LCWO](https://lcwo.net/).

Setup is straight forward: Load `MorseMouse.ino` into your Arduino IDE, select the Leonardo board as target and flash the program. 
