# Synthetica

**Read about this project [here](https://www.benjaminpoilve.com/projects/synthetica.html)**

The basic idea is to create a simple instrument, with on one side the chord selection, and on the other side the note selection (within that chord). 

I will use a teensy as main board for a few reason:

* Teensy are awesome
* Teensy audio library is awesome

Will be major only, minor by transposition as with the harmonica. Choice of chords, look [here](https://www.hooktheory.com/blog/i-analyzed-the-chords-of-1300-popular-songs-for-patterns-this-is-what-i-found/)


## BOM

The teensy 3.2 will do:

* I2S output (Pin 9,11,22,23)
* I2C to touch chip (Pin 18, 19)
* 5 setting potentiometer (Pin 14, 16, 17 ,20)
* 3 switch for fondamental select (Pin 2, 3, 4)
* 1 calibrate switch (Pin 5)
* 1 select switch (automatically go from jack to USB) (Pin 6)


#### Summing Up

| Part Name  |  Value | Reference document | Count |   
|---|---|---|---|
|  Teensy 3.2  | None  | [:link:](https://www.mouser.fr/ProductDetail/Adafruit/2756?qs=sGAEpiMZZMuSK2mCDyT9crBR9UUNDPltQqpZaqADC8g%3d)   | 1  |   
| Potentiometer |  100K  | [:link:](https://www.mouser.fr/ProductDetail/Bourns/PTV09A-4020U-B104?qs=%2fha2pyFaduhvapXs4is1IL5MTuddxsTCkr0fc6JrD7g2QA59By%252bflw%3d%3d)  | 5  |  
| 3 DIP switch | None  | [:link:](https://www.mouser.fr/ProductDetail/CK/SDA03H1BD?qs=%2fha2pyFadujO%252bD1d0%2fA%252bWLFkqEV%2fBrm6lAVSO35a%2fyM%3d)  | 1  |  
| DP3T switch | None  | [:link:](https://www.mouser.fr/ProductDetail/CK/OS203012MU5QP1?qs=%2fha2pyFaduixNo%252bc4UFQdwKaLaiPJgx8VDniAIBXV%2fi9XId9YW60xA%3d%3d)  | 1  |  
|CS4344| None  | [:link:](https://www.mouser.fr/ProductDetail/Cirrus-Logic/CS4344-CZZ?qs=sGAEpiMZZMuYaq4aOfOV%252bEKBckiASbBM)  | 1  |  
| QT2120 | None  | [:link:](https://www.mouser.fr/ProductDetail/Microchip-Technology-Atmel/AT42QT2120-XUR?qs=sGAEpiMZZMsVh0scArXy39GoFU3Q6EzjtRsYSCRuHwE%3d)  | 1  | 
|KMR2 switch | None  | [:link:](https://www.mouser.fr/ProductDetail/CK/KMR231NGLFS?qs=sGAEpiMZZMsgGjVA3toVBPoYbSFtFlEEZ%2foF5FrvAI8%3d)  | 1  | 
|AAA Holder | None  | [:link:](https://www.mouser.fr/ProductDetail/Keystone-Electronics/82?qs=sGAEpiMZZMsQtlBhqKq43YbiTvCk46ni)  | 6  | 
| Jack Connector | None | [:link:](https://www.mouser.fr/ProductDetail/Switchcraft/35RAPC4BHN2?qs=sGAEpiMZZMv0W4pxf2HiV3fTUvSc3cBd2jSbOSYtPwc%3d) | 1|
| Capacitor | 0.1uf | [:link:](https://www.mouser.fr/ProductDetail/KEMET/C1206C104MMREC7210?qs=sGAEpiMZZMsh%252b1woXyUXj6NiChfwzFayyr7622zgSs8%3d) | 2|
| Polarised capacitor | 1uf | [:link:](https://www.mouser.fr/ProductDetail/AVX/F971E105MAAHT3?qs=sGAEpiMZZMukHu%252bjC5l7Yco8kKEM9uRbb54cngRv8Go%3d) | 1|
| Polarised capacitor | 3.3uf | [:link:](https://www.mouser.fr/ProductDetail/AVX/F971C335MAAHT3?qs=sGAEpiMZZMukHu%252bjC5l7Yco8kKEM9uRb9xft%252bS%252bywL0%3d) | 3|
| Polarised capacitor | 10uf | [:link:](https://www.mouser.fr/ProductDetail/KEMET/T491A106K016AT7280?qs=sGAEpiMZZMukHu%252bjC5l7YfojpQgWN8ePgdsBtgcMwmI%3d) | 1|
| Diode | None | [:link:](https://www.mouser.fr/ProductDetail/ROHM-Semiconductor/RB160MM-40TFTR?qs=sGAEpiMZZMtQ8nqTKtFS%2fE7Jc%252bkgrGbhyaeUfQeErNAgcMoCDuX0KA%3d%3d) | 1|
| Resistor | 470 | [:link:](https://www.mouser.fr/ProductDetail/KOA-Speer/SG73G2BTTD4700D?qs=sGAEpiMZZMukHu%252bjC5l7YW4TDpT9cCWZ7Y3pXreM%2fjU%3d) | 2|
| Resistor | 2k2 | [:link:](https://www.mouser.fr/ProductDetail/TE-Connectivity-Holsworthy/CRGP1206F2K2?qs=sGAEpiMZZMve4%2fbfQkoj%252bNpsGoFOGLriQenFA4%2f97jM%3d) | 2|
| Resistor | 10k | [:link:](https://www.mouser.fr/ProductDetail/Yageo/AC1206FR-1010KL?qs=sGAEpiMZZMve4%2fbfQkoj%252bO7jQjGJ2PPFatQsu75yNqQ%3d) | 13|

## Issues, and feedbacks

#### From First PCB

* Get longer pad traces for chips. This version is reflow friendly, but hard to hand solder
* The interruptor is backward, issue with trace
* The voltage drop of the diode is too high! Wrong part? Had to bypass it.
* Pots are too big. Should change version
* Should use two AAA, use a voltage converter
* Should put component more to the center to make the side more easy to cover
* Issue with jack trace, does not go through PCB hole.
* See if there is feeback on the sensors.
* Should really try to avoid vias on capacitive lines. At least put them closer to the center


#### Other

* Issue with [USB](https://forum.pjrc.com/threads/54239-USB-Audio-Clicking-Noise/page3?highlight=noise+audio)
* Probably needs to have a status led


## Thanks and people that helped

* Everybody that helped me on [that thread](https://forum.pjrc.com/threads/55137-I2S-output-with-CS4344) 
* @otem for its polysynth
