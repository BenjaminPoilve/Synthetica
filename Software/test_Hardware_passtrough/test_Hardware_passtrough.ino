#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

AudioInputUSB            usb1;           //xy=200,69  (must set Tools > USB Type to Audio)
AudioOutputI2S           i2s1;           //xy=365,94
AudioConnection          patchCord1(usb1, 0, i2s1, 0);
AudioConnection          patchCord2(usb1, 1, i2s1, 1);

void setup() {                
  AudioMemory(12);

}

void loop() {
  

  // use the scaled volume setting.  Delete this for fixed volume.

  delay(100);
}

// Teensyduino 1.35 & earlier had a problem with USB audio on Macintosh
// computers.  For more info and a workaround:
// https://forum.pjrc.com/threads/34855-Distorted-audio-when-using-USB-input-on-Teensy-3-1?p=110392&viewfull=1#post110392
