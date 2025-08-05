### Electrical components used in the roller coaster model

[Fake Arduino Uno (keyestudio)](https://www.keyestudio.com/products/keyestudio-uno-r3-atmega328p-development-board-usb-cable-for-arduino)

[Red Board A4988 Stepper Motor Driver for 3D Printer with Heat Sink and Pin Header](https://www.alibaba.com/product-detail/Red-Board-A4988-Stepper-Motor-Driver_1601160855848.html)

[CNC Shield](https://makerstore.cc/product/cnc-shield/)

MD0444 LM2596 DC-DC Power Converter [data sheet](https://www.ti.com/lit/ds/symlink/lm2596.pdf) [store page](https://tronic.lk/product/lm2596s-display-3-40v-to-1-5-35v-3a-dc-to-dc-adjustable)


The Lay7 PBCY090 Lay35 pushbutton has 2 sides. [Green](https://media.discordapp.net/attachments/1182326605901746307/1344845571583774860/20250227_203456.jpg?ex=67c2648a&is=67c1130a&hm=53c13586249a02fd9a5361e1098ee2e895f2ce6855eae9c7655da87b537f2ba3&=&format=webp&width=351&height=468) and [Red](https://media.discordapp.net/attachments/1182326605901746307/1344845572296806431/20250227_203502.jpg?ex=67c2648a&is=67c1130a&hm=aeb36c496492eaa5e35ff5cf621c73771e6b1f099a021fc97fba5169b7cb1a94&=&format=webp&width=351&height=468) often times referred to as NO (normally open) and NC (normally closed) in that order. In order to get the button working, connect one of the wires connected to NO to pin 2 and the other connected to ground. The NC side, one connected to ground and the other connected to pin 13. 

The [SGX-120](https://media.discordapp.net/attachments/1182326605901746307/1344847658996600842/20250227_204416.jpg?ex=67c2667b&is=67c114fb&hm=3b9dfb5978affaa54bac5179d3e3be4d03ae6ca6091e270b4a6a8ae81d7538ba&=&format=webp&width=351&height=468) is a display capabale of printing text. To connect it to the board, the 5 pins go in the following order from a top down [perspective](https://media.discordapp.net/attachments/1182326605901746307/1344847502167244810/20250227_204342.jpg?ex=67c26656&is=67c114d6&hm=9f0ba81d9a6eb44a1e4be6979af249c75233d507131cdd34cbca87ebe385baed&=&format=webp&width=351&height=468): 5V, GND, SERIAL, GND, 5V. Connect the 5V and GND to their respective terminals and connect SERIAL to the TX port.
