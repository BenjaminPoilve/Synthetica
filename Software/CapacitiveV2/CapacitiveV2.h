/*
 * Library for Arduino interface with QT2120 Capacitive Touch Sensor.
 * Written by Phillip Dupree
 * cargocollective.com/phillipdupree
 * For more information please see readme.txt.
 
QT2120 must be wired in COMMS Mode. 
*/

#ifndef CapacitiveV2_h
#define CapacitiveV2_h

#include <Arduino.h>
#include <Wire.h>

class CapacitiveV2
{
  public:
    CapacitiveV2(void);
    void SetSlider(void);
    byte ReadSlider(void);
    byte ReadRegister(byte addr);
    void WriteRegister(byte addr, byte writer);
 	
	void SetPinToKey(int pin);
	void SetPinToOutput(int pin);
	void SetOutput(int pin, int state);
	boolean ReadKey(int pin);
	void SetThreshold(int pin, byte threshold);
	unsigned int ReadSignal(int pin);
	void InitCapacitive();
	
  private:
    
};

#endif
