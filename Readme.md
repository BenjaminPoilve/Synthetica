# Synthetica

The basic idea is to create a simple instrument, with on one side the chord selection, and on the other side the note selection (within that chord). 

I will use a teensy as main board for a few reason:

* Teensy are awesome
* Teensy audio library is awesome
* Teensy support one-wire touch sensing
* Teensy 3.6 has lots of input so it makes the whole build simpler

Ok, so let's get started! 

##BOM

#### Power

Will use battery. To avoid using a tranformer, I will use 3 AAA battey (for a voltage between 3.6V and 4.5V, which fits into the 3.6V to 6V of the teensy VIN pin

#### Main Board

The teensy 3.6 will do:

* Stereo DAC (Pin A22 and A21)
* 11 touch pin (7 for chords, and 4 for notes)
* More than 6 analog pin (good for potentiometers)
* More than 3 digital pin (good for root chord selection)

#### DAC circuit

Will take inspiration from [here](https://github.com/ghztomash/fasma_drum/blob/master/hardware/Fasma%20Drum%20Schematics.PDF)  for the filter then run it into a [LM4911](https://github.com/ghztomash/fasma_drum/blob/master/hardware/Fasma%20Drum%20Schematics.PDF) to get it to headphone level

I should not forget to run a wire from the split analogue ground part back to the AGND pin 

#### Potentiometers and DIP switch and other hardware

Will use [those pot](https://fr.farnell.com/bourns/ptv09a-4020u-b104/potentiom-rotatif-100kohm-9mm/dp/2469526?scope=partnumberlookahead&ost=PTV09A-4020U-B104&searchref=searchlookahead&exaMfpn=true&ddkey=https%3Afr-FR%2FElement14_France%2Fw%2Fsearch)
Will use [those switch](https://fr.farnell.com/c-k-components/js102011saqn/commutateur-spdt-0-6a-6vdc-lateral/dp/2320017?st=JS102011SAQN)
Will use [this](https://fr.farnell.com/c-k-components/sda03h1bd/commutateur-raised-3-voies-tht/dp/2320098) for chord slection, and [this](https://fr.farnell.com/lumberg/klbr-4/embase-femelle-chassis-3-5mm/dp/1217016) for headphone

#### Capacitive sensor

Will get inspiration from [this guide](http://www.patternagents.com/news/2013/11/24/eagle-touch-widgets-library.html) for design.
Will be major only, minor by transposition as with the harmonica. Choice of chords, look [here](https://www.hooktheory.com/blog/i-analyzed-the-chords-of-1300-popular-songs-for-patterns-this-is-what-i-found/)


#### Summing Up

| Part Name  |  Value | Reference document | Trace Present  |   
|---|---|---|---|
|  Teensy 3.6  | None  | [:link:](https://proxy.duckduckgo.com/iu/?u=https%3A%2F%2Fcdn.solarbotics.com%2Fproducts%2Fdatasheets%2Fks_t_3.6f.png&f=1)   | Yes  |   
| PTV09A-4020U-B104 Pot |  None  | [:link:](https://www.farnell.com/datasheets/2259384.pdf)  | Yes  |  
| DIP SDA03H1BD  | None  | [:link:](https://www.farnell.com/datasheets/2706256.pdf)  | Yes  |   

