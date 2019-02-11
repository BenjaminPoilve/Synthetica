#include <Arduino.h>
#include "CapacitiveV2.h"
#include <Wire.h>

#define BIT0HI    0x00000001
#define BIT1HI    0x00000002
#define BIT2HI    0x00000004
#define BIT3HI    0x00000008
#define BIT4HI    0x00000010
#define BIT5HI    0x00000020
#define BIT6HI    0x00000040
#define BIT7HI    0x00000080

#define slidervalreg    0x05
#define slideroptreg    0x0E
#define detectstatreg   0x02
#define calibratereg    0x06
#define keystatreg0to7	0x03
#define keystatreg8to11	0x04

#define K0Control 0x1C
#define K1Control 0x1D
#define K2Control 0x1E
#define K3Control 0x1F
#define K4Control 0x20
#define K5Control 0x21
#define K6Control 0x22
#define K7Control 0x23
#define K8Control 0x24
#define K9Control 0x25
#define K10Control 0x26
#define K11Control 0x27

#define K0Threshold 0x0F
#define K1Threshold 0x11
#define K2Threshold 0x12
#define K3Threshold 0x13
#define K4Threshold 0x14
#define K5Threshold 0x15
#define K6Threshold 0x16
#define K7Threshold 0x17
#define K8Threshold 0x18
#define K9Threshold 0x19
#define K10Threshold 0x1A
#define K11Threshold 0x1B


#define K0Signal 0x24
#define K1Signal 0x26
#define K2Signal 0x28
#define K3Signal 0x3A
#define K4Signal 0x3C
#define K5Signal 0x3E
#define K6Signal 0x40
#define K7Signal 0x42
#define K8Signal 0x44
#define K9Signal 0x46
#define K10Signal 0x48
#define K11Signal 0x4A




CapacitiveV2::CapacitiveV2(){}

CapacitiveV2 Capacitive;

//Complex Functions

void CapacitiveV2::SetPinToKey(int pin){
  byte addr;
  boolean pingood;
  pingood = true;
  switch (pin){
    case 0:
        addr = K0Control;
        break;
    case 1:
        addr = K1Control;
        break;
    case 2:
        addr = K2Control;
        break;
  	case 3:
  		addr = K3Control;
  		break;
  	case 4:
  		addr = K4Control;
  		break;
  	case 5:
  		addr = K5Control;
  		break;
  	case 6:
  		addr = K6Control;
  		break;
  	case 7:
  		addr = K7Control;
  		break;
  	case 8:
  		addr = K8Control;
  		break;
  	case 9:
  		addr = K9Control;
  		break;
  	case 10:
  		addr = K10Control;
  		break;
  	case 11:
  		addr = K11Control;
  		break;
  	default:
  		Serial.println("Pin Number Error.");
  		pingood = false;
  		break;
  }
  	
  if (pingood == true){	
  	Capacitive.WriteRegister(addr, 0x00);
  	//Wire.beginTransmission(0x1C); //address of qt2120
  	//Wire.write(addr); //Memory Address. 14. 
  	//Wire.write(0x00); 
  	//Wire.endTransmission();
  } 
  else {Serial.println("Error in SetPinToKey.");}	 	
}

void CapacitiveV2::SetPinToOutput(int pin){
//Note. This Sets the output low
  byte addr;
  boolean pingood;
  pingood = true;
  switch (pin){
    case 0:
        addr = K0Control;
        break;
    case 1:
        addr = K1Control;
        break;
    case 2:
        addr = K2Control;
        break;
  	case 3:
  		addr = K3Control;
  		break;
  	case 4:
  		addr = K4Control;
  		break;
  	case 5:
  		addr = K5Control;
  		break;
  	case 6:
  		addr = K6Control;
  		break;
  	case 7:
  		addr = K7Control;
  		break;
  	case 8:
  		addr = K8Control;
  		break;
  	case 9:
  		addr = K9Control;
  		break;
  	case 10:
  		addr = K10Control;
  		break;
  	case 11:
  		addr = K11Control;
  		break;
  	default:
  		Serial.println("Pin Number Error.");
  		pingood = false;
  		break;	
  }
  	
  if (pingood == true){	
  	Capacitive.WriteRegister(addr, 0x01);
  	//Wire.beginTransmission(0x1C); //address of qt2120
  	//Wire.write(addr); //Memory Address. 14. 
  	//Wire.write(0x01); 
  	//Wire.endTransmission();
  } 
  else {Serial.println("Error in SetPinToOutput.");}	
}

void CapacitiveV2::SetOutput(int pin, int state){
  byte addr;
  boolean pingood;
  pingood = true;
  switch (pin){
    case 0:
        addr = K0Control;
        break;
    case 1:
        addr = K1Control;
        break;
    case 2:
        addr = K2Control;
        break;
  	case 3:
  		addr = K3Control;
  		break;
  	case 4:
  		addr = K4Control;
  		break;
  	case 5:
  		addr = K5Control;
  		break;
  	case 6:
  		addr = K6Control;
  		break;
  	case 7:
  		addr = K7Control;
  		break;
  	case 8:
  		addr = K8Control;
  		break;
  	case 9:
  		addr = K9Control;
  		break;
  	case 10:
  		addr = K10Control;
  		break;
  	case 11:
  		addr = K11Control;
  		break;
  	default:
  		Serial.println("Pin Number Error.");
  		pingood = false;
  		break;
  }
  	
  if (pingood == true){	
  	//Wire.beginTransmission(0x1C); //address of qt2120
  	//Wire.write(addr); //Memory Address. 14. 
  	//if (state == 0){Wire.write(0x01);}
  	//else if (state == 1){Wire.write(0x03);}
  	if (state == 0){Capacitive.WriteRegister(addr, 0x01);}
  	else if (state == 1){Capacitive.WriteRegister(addr, 0x03);}
  	else {Serial.println("Error. Check Your Argument (state).");} 
  	//Wire.endTransmission();
  } 
  else {Serial.println("Error in SetOutput.");}	
}

void CapacitiveV2::SetThreshold(int pin, byte threshold){
  byte addr;
  boolean pingood;
  pingood = true;
  switch (pin){
    case 0:
        addr = K0Threshold;
        break;
    case 1:
        addr = K1Threshold;
        break;
    case 2:
        addr = K2Threshold;
        break;
  	case 3:
  		addr = K3Threshold;
  		break;
  	case 4:
  		addr = K4Threshold;
  		break;
  	case 5:
  		addr = K5Threshold;
  		break;
  	case 6:
  		addr = K6Threshold;
  		break;
  	case 7:
  		addr = K7Threshold;
  		break;
  	case 8:
  		addr = K8Threshold;
  		break;
  	case 9:
  		addr = K9Threshold;
  		break;
  	case 10:
  		addr = K10Threshold;
  		break;
  	case 11:
  		addr = K11Threshold;
  		break;
  	default:
  		Serial.println("Pin Number Error.");
  		pingood = false;
  		break;
  }
  if (pingood == true){	
  	Capacitive.WriteRegister(addr, threshold);	
  } 
  else {Serial.println("Error in SetThreshold.");}	

}

boolean CapacitiveV2::ReadKey(int pin){
  byte addr;
  byte bitmask;
  boolean pingood;
  pingood = true;
  switch (pin){
    case 0:
        addr = keystatreg0to7;
        bitmask = BIT0HI;
        break;
    case 1:
        addr = keystatreg0to7;
        bitmask = BIT1HI;
        break;
    case 2:
        addr = keystatreg0to7;
        bitmask = BIT2HI;
        break;
  	case 3:
  		addr = keystatreg0to7;
  		bitmask = BIT3HI;
  		break;
  	case 4:
  		addr = keystatreg0to7;
  		bitmask = BIT4HI;
  		break;
  	case 5:
  		addr = keystatreg0to7;
  		bitmask = BIT5HI;
  		break;
  	case 6:
  		addr = keystatreg0to7;
  		bitmask = BIT6HI;
  		break;
  	case 7:
  		addr = keystatreg0to7;
  		bitmask = BIT7HI;
  		break;
  	case 8:
  		addr = keystatreg8to11;
  		bitmask = BIT0HI;
  		break;
  	case 9:
  		addr = keystatreg8to11;
  		bitmask = BIT1HI;
  		break;
  	case 10:
  		addr = keystatreg8to11;
  		bitmask = BIT2HI;
  		break;
  	case 11:
  		addr = keystatreg8to11;
  		bitmask = BIT3HI;
  		break;
  	default:
  		Serial.println("Pin Number Error.");
  		pingood = false;
  		break;
  }
  	
  if (pingood == true){	
  
  	byte data = Capacitive.ReadRegister(addr);
  	//Serial.print("data: ");
  	//Serial.println(data,BIN);
  	//Serial.print("bitM: ");
  	//Serial.println(bitmask,BIN);
  	//Serial.print("data_and_bitmask: ");
  	//Serial.println((data&bitmask),BIN);
  	if ((data&bitmask) != 0x00){return true;}
  	else {return false;}
  	
  } 
  else {
  	Serial.println("Error in Readkey");
  	return false;
  	}	
}

unsigned int CapacitiveV2::ReadSignal(int pin){
  byte addr;
  byte bitmask;
  boolean pingood;
  pingood = true;
  switch (pin){
    case 0:
        addr = K0Signal;
        break;
    case 1:
        addr = K1Signal;
        break;
    case 2:
        addr = K2Signal;
        break;
  	case 3:
  		addr = K3Signal;
  		break;
  	case 4:
  		addr = K4Signal;
  		break;
  	case 5:
  		addr = K5Signal;
  		break;
  	case 6:
  		addr = K6Signal;
  		break;
  	case 7:
  		addr = K7Signal;
  		break;
  	case 8:
  		addr = K8Signal;
  		break;
  	case 9:
  		addr = K9Signal;
  		break;
  	case 10:
  		addr = K10Signal;
  		break;
  	case 11:
  		addr = K11Signal;
  		break;
  	default:
  		Serial.println("Pin Number Error.");
  		pingood = false;
  		break;
  }
  	
  if (pingood == true){	
  	byte lsb = Capacitive.ReadRegister(addr);
  	byte msb = Capacitive.ReadRegister((addr+0x01));
	unsigned int data = (msb << 8) + lsb;
	return data;
	}
   else {
   	Serial.println("Error in ReadSignal.");			
	return 0x0A;
	}
}


//Core Functions
void CapacitiveV2::InitCapacitive(){
	Wire.begin();
	Capacitive.SetSlider();
}

void CapacitiveV2::SetSlider(){ //sets the Qt2120 to Slider Mode
  //Wire.beginTransmission(0x1C); //address of qt2120
  //Wire.write(0x0E); //Memory Address. 14. Slider Control register.
  //Wire.write(0x80); //Bit 7 high. Enable Slider.
  //Wire.endTransmission();
  Capacitive.WriteRegister(slideroptreg, BIT7HI);
  //Serial.println("ended transmission");
}

byte CapacitiveV2::ReadSlider(){
  byte data;
  //Wire.beginTransmission(0x1C);
  //Wire.write(0x05); //Reg 5 is the Slider value.
  //Wire.endTransmission();
  //Wire.requestFrom(0x1c, 1, false);
  Capacitive.ReadRegister(slidervalreg);
  
  while(Wire.available()){
    data = Wire.read();
    }
  return data;
}

byte CapacitiveV2::ReadRegister(byte addr){
  //Reads the data out of one single register.
  //Include register address as argument
  byte data;
  Wire.beginTransmission(0x1C);
  Wire.write(addr); //Reg 5 is the Slider value.
  Wire.endTransmission();
  Wire.requestFrom(0x1c, 1, false);

  //while(Wire.available()){
  //  data = Wire.read();}
  data = Wire.read();
  return data;
}

void CapacitiveV2::WriteRegister(byte addr, byte writer){
 
  //Writes to a register
  //Addr is register address
  //Writer is the byte of data you want to write.
  Wire.beginTransmission(0x1C); //address of qt2120
  Wire.write(addr); //Memory Address. 14. 
  Wire.write(writer); 
  Wire.endTransmission();
}









