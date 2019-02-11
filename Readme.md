# Synthetica

The basic idea is to create a simple instrument, with on one side the chord selection, and on the other side the note selection (within that chord). 

I will use a teensy as main board for a few reason:

* Teensy are awesome
* Teensy audio library is awesome
* Teensy 3.6 has lots of input so it makes the whole build simpler

Ok, so let's get started! 

## BOM

#### Power

Will use battery. To avoid using a tranformer, I will use 3 AAA battey (for a voltage between 3.6V and 4.5V, which fits into the 3.6V to 6V of the teensy VIN pin. Also will have a three position button: battery, zero and USB. Will have to protect the battery from usb power. A diode? Use [this](https://forum.pjrc.com/printthread.php?t=25937&pp=25&page=1) for power source selection. Use [that switch](https://fr.farnell.com/c-k-components/os203012mu5qp1/commutateur-lateral-dp3t/dp/2435090?ost=OS203012&ddkey=https%3Afr-FR%2FElement14_France%2Fsearch), to select both power and pin up/down for dac selection. DO NOT FORGET TO CUT VUSB POWER BEFORE SOLDERING

#### Main Board

The teensy 3.6 will do:

* I2S output (Pin 9,11,22,23)
* I2C to touch chip
* More than 6 analog pin (good for potentiometers)
* More than 3 digital pin (good for root chord selection)

#### DAC circuit

Will use the CS4344.

#### Potentiometers and DIP switch and other hardware

Will use [those pot](https://fr.farnell.com/bourns/ptv09a-4020u-b104/potentiom-rotatif-100kohm-9mm/dp/2469526?scope=partnumberlookahead&ost=PTV09A-4020U-B104&searchref=searchlookahead&exaMfpn=true&ddkey=https%3Afr-FR%2FElement14_France%2Fw%2Fsearch)
Will use [those switch](https://fr.farnell.com/c-k-components/js102011saqn/commutateur-spdt-0-6a-6vdc-lateral/dp/2320017?st=JS102011SAQN)
Will use [this](https://fr.farnell.com/c-k-components/sda03h1bd/commutateur-raised-3-voies-tht/dp/2320098) for chord slection, and [this](https://fr.farnell.com/lumberg/klbr-4/embase-femelle-chassis-3-5mm/dp/1217016) for headphone

Add a led

#### Capacitive sensor

Will get inspiration from [this guide](http://www.patternagents.com/news/2013/11/24/eagle-touch-widgets-library.html) for design.
Will be major only, minor by transposition as with the harmonica. Choice of chords, look [here](https://www.hooktheory.com/blog/i-analyzed-the-chords-of-1300-popular-songs-for-patterns-this-is-what-i-found/)

add bare gnd surface on the back for grounding. Or check if it's ok with only ground plane.

[Chip](http://ww1.microchip.com/downloads/en/DeviceDoc/doc9634.pdf) used for that


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