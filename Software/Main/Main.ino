#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include "notes.h"
#include <CapacitiveV2.h>


/////SYNTH SETUP\\\\
// GUItool: begin automatically generated code
AudioSynthWaveform       lfo;            //xy=1308,1516
AudioAnalyzePeak         peak1;          //xy=1374.9999999999998,1343.333333333333
AudioSynthWaveform       voice4a;        //xy=1837,1269
AudioSynthWaveform       voice4b;        //xy=1838,1307
AudioSynthNoiseWhite     voice4n;        //xy=1838,1342
AudioSynthWaveform       voice3b;        //xy=1859,1059
AudioSynthNoiseWhite     voice3n;        //xy=1859,1094
AudioSynthWaveform       voice3a;        //xy=1864,1016
AudioSynthWaveform       voice1b;        //xy=1889,593
AudioSynthNoiseWhite     voice1n;        //xy=1892,637
AudioSynthWaveform       voice2b;        //xy=1892,827
AudioSynthNoiseWhite     voice2n;        //xy=1892,862
AudioSynthWaveform       voice1a;        //xy=1894,550
AudioSynthWaveform       voice2a;        //xy=1894,789
AudioSynthWaveformDc     voice4filterenv; //xy=1966,1453
AudioSynthWaveformDc     voice4env;      //xy=1980,1392
AudioMixer4              voice4mix;      //xy=1983,1327
AudioSynthWaveformDc     voice3filterenv; //xy=1987,1205
AudioSynthWaveformDc     voice3env;      //xy=2001,1144
AudioMixer4              voice3mix;      //xy=2004,1079
AudioSynthWaveformDc     voice1filterenv; //xy=2018,729
AudioSynthWaveformDc     voice2filterenv; //xy=2020,973
AudioMixer4              voice1mix;      //xy=2034,613
AudioSynthWaveformDc     voice2env;      //xy=2034,912
AudioSynthWaveformDc     voice1env;      //xy=2035,678
AudioMixer4              voice2mix;      //xy=2037,847
AudioEffectMultiply      voice4multiply; //xy=2147,1365
AudioMixer4              voice4filtermodmixer; //xy=2157,1481
AudioEffectMultiply      voice3multiply; //xy=2168,1117
AudioMixer4              voice3filtermodmixer; //xy=2185,1227
AudioEffectMultiply      voice1multiply; //xy=2198,651
AudioEffectMultiply      voice2multiply; //xy=2201,885
AudioMixer4              voice2filtermodmixer; //xy=2211,1001
AudioMixer4              voice1filtermodmixer; //xy=2215,761
AudioFilterStateVariable voice4filter;   //xy=2330,1388
AudioFilterStateVariable voice3filter;   //xy=2348,1161
AudioFilterStateVariable voice2filter;   //xy=2384,908
AudioFilterStateVariable voice1filter;   //xy=2401,703
AudioMixer4              first4premix;   //xy=2809,1554
AudioFilterStateVariable delayFilter2;        //xy=3193.75,1705
AudioFilterStateVariable delayFilter;    //xy=3215.5001220703125,1815.5
AudioMixer4              mainOutMixer;   //xy=3329,1631
AudioMixer4              mainOutMixerLeft;         //xy=3339.16650390625,1554.583251953125
AudioEffectDelay         delay1;         //xy=3480.7501220703125,1753
AudioOutputI2S           i2s1;           //xy=365,94
AudioConnection          patchCord1(lfo, 0, voice1filtermodmixer, 1);
AudioConnection          patchCord2(lfo, 0, voice2filtermodmixer, 1);
AudioConnection          patchCord3(lfo, 0, voice3filtermodmixer, 1);
AudioConnection          patchCord4(lfo, 0, voice4filtermodmixer, 1);
AudioConnection          patchCord5(lfo, peak1);
AudioConnection          patchCord6(voice4a, 0, voice4mix, 0);
AudioConnection          patchCord7(voice4b, 0, voice4mix, 1);
AudioConnection          patchCord8(voice4n, 0, voice4mix, 2);
AudioConnection          patchCord9(voice3b, 0, voice3mix, 1);
AudioConnection          patchCord10(voice3n, 0, voice3mix, 2);
AudioConnection          patchCord11(voice3a, 0, voice3mix, 0);
AudioConnection          patchCord12(voice1b, 0, voice1mix, 1);
AudioConnection          patchCord13(voice1n, 0, voice1mix, 2);
AudioConnection          patchCord14(voice2b, 0, voice2mix, 1);
AudioConnection          patchCord15(voice2n, 0, voice2mix, 3);
AudioConnection          patchCord16(voice1a, 0, voice1mix, 0);
AudioConnection          patchCord17(voice2a, 0, voice2mix, 0);
AudioConnection          patchCord18(voice4filterenv, 0, voice4filtermodmixer, 0);
AudioConnection          patchCord19(voice4env, 0, voice4multiply, 1);
AudioConnection          patchCord20(voice4mix, 0, voice4multiply, 0);
AudioConnection          patchCord21(voice3filterenv, 0, voice3filtermodmixer, 0);
AudioConnection          patchCord22(voice3env, 0, voice3multiply, 1);
AudioConnection          patchCord23(voice3mix, 0, voice3multiply, 0);
AudioConnection          patchCord24(voice1filterenv, 0, voice1filtermodmixer, 0);
AudioConnection          patchCord25(voice2filterenv, 0, voice2filtermodmixer, 0);
AudioConnection          patchCord26(voice1mix, 0, voice1multiply, 0);
AudioConnection          patchCord27(voice2env, 0, voice2multiply, 1);
AudioConnection          patchCord28(voice1env, 0, voice1multiply, 1);
AudioConnection          patchCord29(voice2mix, 0, voice2multiply, 0);
AudioConnection          patchCord30(voice4multiply, 0, voice4filter, 0);
AudioConnection          patchCord31(voice4filtermodmixer, 0, voice4filter, 1);
AudioConnection          patchCord32(voice3multiply, 0, voice3filter, 0);
AudioConnection          patchCord33(voice3filtermodmixer, 0, voice3filter, 1);
AudioConnection          patchCord34(voice1multiply, 0, voice1filter, 0);
AudioConnection          patchCord35(voice2multiply, 0, voice2filter, 0);
AudioConnection          patchCord36(voice2filtermodmixer, 0, voice2filter, 1);
AudioConnection          patchCord37(voice1filtermodmixer, 0, voice1filter, 1);
AudioConnection          patchCord38(voice4filter, 0, first4premix, 3);
AudioConnection          patchCord39(voice3filter, 0, first4premix, 2);
AudioConnection          patchCord40(voice2filter, 0, first4premix, 1);
AudioConnection          patchCord41(voice1filter, 0, first4premix, 0);
AudioConnection          patchCord42(first4premix, 0, mainOutMixer, 0);
AudioConnection          patchCord43(first4premix, 0, mainOutMixerLeft, 0);
AudioConnection          patchCord44(delayFilter2, 0, mainOutMixer, 1);
AudioConnection          patchCord45(delayFilter, 0, mainOutMixerLeft, 1);
AudioConnection          patchCord46(mainOutMixer, delay1);
AudioConnection          patchCord47(mainOutMixer, 0, i2s1, 1);
AudioConnection          patchCord48(mainOutMixerLeft, 0, i2s1, 0);
AudioConnection          patchCord49(delay1, 0, delayFilter, 0);
AudioConnection          patchCord50(delay1, 1, delayFilter2, 0);
// GUItool: end automatically generated code

AudioSynthWaveformDc *voicefilterenv[4] = {
  &voice1filterenv, &voice2filterenv, &voice3filterenv, &voice4filterenv
};
AudioSynthWaveformDc *voiceenv[4] = {
  &voice1env, &voice2env, &voice3env, &voice4env
};
AudioMixer4 *voicemix[4] = {
  &voice1mix, &voice2mix, &voice3mix, &voice4mix
};
AudioSynthWaveform *voicea[4] = {
  &voice1a, &voice2a, &voice3a, &voice4a
};
AudioSynthWaveform *voiceb[4] = {
  &voice1b, &voice2b, &voice3b, &voice4b
};

/////SYNTH DEFAULT VALUES\\\\
float mainVolume = 0.9;
float vcoOneLevel = 1;
float vcoTwoLevel = 1;
int vcoOneOct = 1;
int vcoTwoOct = 1;
float deTune = 1;
int waveShapeOneIndex = 1;
int waveShapeTwoIndex = 1;
int lfoWaveShapeIndex = 1;
float tempPeak=0;
float deTuneLfo=1;
float LFODetuneEffect=0.5;
int octOneIndex = 1;
int octTwoIndex = 1;
short waveShapes[4] = {
  WAVEFORM_SINE,
  WAVEFORM_SAWTOOTH,
  WAVEFORM_SQUARE,
  WAVEFORM_PULSE,
};
short lfoWaveShapes[5] = {
  WAVEFORM_SINE,
  WAVEFORM_SAWTOOTH,
  WAVEFORM_SAWTOOTH_REVERSE,
  WAVEFORM_SQUARE,
  WAVEFORM_SAMPLE_HOLD
};
int attackTime = 100;
int decayTime = 100;
float sustainLevel = 0.2;
int releaseTime = 100;
int attackTimeFilter = 100;
int decayTimeFilter = 100;
float sustainLevelFilter = 0.2;
int releaseTimeFilter = 100;

//Note Timing
bool noteTrigFlag[4];
bool prevBtnState[4];
bool btnState[4];
float voiceFreq[4];
unsigned long attackWait[4];

int l = 0;

//NOTES VALUES
int scale[] = {0, 2, 3, 5, 7, 8, 10, 12};
int levelinscale = 0;
int la=69; //LA 440
int rootpin[]={4,3,2};
//HARDWARE
int potsave[]={0,0,0,0,0};
int pot[]={6,1,0,3,2};
int notekeys[]={8,9,10,7};
int chordkeys[]={3,5,0,2,4,1,6};

CapacitiveV2 sensor;

void setup() {
  AudioMemory(160);
  Serial.begin(115200);
  //mix
  first4premix.gain(0, .25);
  first4premix.gain(1, .25);
  first4premix.gain(2, .25);
  first4premix.gain(3, .25);
  //float delayFeedBack, float delayTime, float filtermod, float lfomod, float resonnance, float frequencyfilter, float noise, float LFOfreq, int LFOSHAPE, int BSHAPE, int ASHAPE, float vcoOneLevel, float vcoTwoLevel
  sensor.InitCapacitive();
  for (int i = 0; i < 4; i++) {
    sensor.SetPinToKey(notekeys[i]);
    sensor.SetThreshold(notekeys[i],10);
  }
  for (int i = 0; i < 7; i++) {
    sensor.SetPinToKey(chordkeys[i]);
    sensor.SetThreshold(chordkeys[i],10);
  }
  for (int i=0; i<3; i++){
     pinMode(rootpin[i], INPUT_PULLUP);
  }
  

}

float mapfloat(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
float mapint(int x, int in_min, int in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}



void loop() {
     setupVariable(potsave[0],potsave[1],potsave[2],potsave[3],potsave[4]);

   for (int i=0; i<5; i++){
    if(abs(analogRead(pot[i])-potsave[i])>10){
     potsave[i]= analogRead(pot[i]);
     if(i==0){//SPECIAL FOR DELAY
        delay1.disable(0);
        delay1.disable(1);
      
     }
    }
   }

  Serial.println( analogRead(1));
  int rootnote=la;
  int var=0;
  for (int i=0; i<3; i++){
      var+=pow(2,i)*!digitalRead(rootpin[i]);
  }
  rootnote+=scale[var];
   for (int i = 0; i < 7; i++) {
    if(sensor.ReadKey(chordkeys[i])){
      levelinscale=i;
    }
  }

  for (int i = 0; i < 4; i++) {
      if(sensor.ReadKey(notekeys[i])){
        btnState[i]=HIGH;
      }else{
        btnState[i]=LOW;
      }
    if ( btnState[i] != prevBtnState[i]) {
      if (btnState[i] == HIGH && prevBtnState[i] == LOW) {
        Serial.println("note");
        voiceenv[i]->amplitude(1, attackTime);
        voicefilterenv[i]->amplitude(1, attackTimeFilter);
        noteTrigFlag[i] = true;
        attackWait[i] = millis();
      } else {
        noteTrigFlag[i] = false;
        voiceenv[i]->amplitude(0, releaseTime);
        voicefilterenv[i]->amplitude(-1, releaseTimeFilter);
      }
    }else{
    if (btnState[i] == LOW) {
        if (millis() - attackWait[i] > attackTime && noteTrigFlag[i]) {
          voiceenv[i]->amplitude(sustainLevel, decayTime);
        }
        if (millis() - attackWait[i] > attackTimeFilter && noteTrigFlag[i]) {
          voicefilterenv[i]->amplitude(sustainLevelFilter, decayTimeFilter);
        }
    }else{
         float goal=tune_frequencies2_PGM[getNote(rootnote,levelinscale,i)];
         voiceFreq[i]= voiceFreq[i]+(goal-voiceFreq[i])*1;
         voicea[i]->frequency(voiceFreq[i]* pow(2,vcoOneOct));
         voiceb[i]->frequency(voiceFreq[i]*pow(2,vcoTwoOct) * deTune*deTuneLfo);
    }
    }
    prevBtnState[i] = btnState[i];
  }
  if(peak1.available()){
    tempPeak = peak1.read();
  }
  for (int i = 0; i < 4; i++) {
    voicea[i]->pulseWidth((tempPeak/2));
  }
  deTuneLfo = 1+((tempPeak-1)/(5+100*LFODetuneEffect));
}

int getNote(int rootNote, int levelInScale, int levelInChord ){
    int semitoneMap[]={0,2,4,5,7,9,11};
    boolean thirdMajorMap[]= {true,false,false,true,true,false,false};
    int inChordMap[]={0,3,7,12};
    if(levelInChord!=1){
      return rootNote+semitoneMap[levelInScale]+inChordMap[levelInChord];
    }else{
      return rootNote+semitoneMap[levelInScale]+inChordMap[levelInChord]+thirdMajorMap[levelInScale];
    }
}



void setupVariable(int pot1,int pot2,int pot3,int pot4,int pot5) {
  int delayFilterValue=4000;  //0-5000
  int delayTime=int(mapint(pot1,1,1023,10,200)); //0-200
  float feedbackDelay=mapint(pot2,1,1023,0,0.7); //0-1
  vcoOneOct=0; //-3-+2
  vcoTwoOct = -1; //-3-+3
  deTune = mapint(pot3,1,1023,0.5,1); // 0.5-1
  float ABbalance=0.3; //0-0.5
  float ALEVEL=(0.5-ABbalance)*2; //0-1
  float BLEVEL=ABbalance*2; //0-1
  int ASHAPE=0; //0-3
  int BSHAPE=0; //0-3
  LFODetuneEffect=mapint(pot5,1,1023,1,0.);  //0-1
  int LFOshape=0; //0-4
  int LFOfreq=int(mapint(pot4,1,1023,0,50)); //0-50
  Serial.println(LFOfreq);
  float LFOlevel=1; //0-1 Probably not usefull
  float LFOmix=mapint(pot5,1,1023,0,0.5); // 0-0.5
  float filterResonnance=0.8; //0.8-1.5
  int filterFrequency=1500; //100-10000
  float noiseValue=0.;//0-0.5
  //ADSR
  attackTime = 100;
  decayTime =10;
  sustainLevel = 0.9;
  releaseTime = 200;
  //Filter ADSR
  attackTimeFilter = 10;
  decayTimeFilter = 30;
  sustainLevelFilter = 0.9;
  releaseTimeFilter = 100;

  //DELAY SETUP, FREQUENCY,RESONANCE,CHANNEL(always 0), MILLISECONDS, AND FEEDBACK
  delayFilter.frequency(delayFilterValue);
  delayFilter.resonance(1);
  delayFilter2.frequency(delayFilterValue);
  delayFilter2.resonance(1);
  delay1.delay(0, delayTime);
  delay1.delay(1, delayTime*2);
  mainOutMixer.gain(1, feedbackDelay);
  mainOutMixerLeft.gain(1,feedbackDelay);



  for (int i = 0; i < 4; i++) {
    voicea[i]->amplitude(1);
    voiceb[i]->amplitude(1); 
    voicea[i]->begin(waveShapes[ASHAPE]);
    voiceb[i]->begin(waveShapes[BSHAPE]); 
    voicemix[i]->gain(1, BLEVEL);
    voicemix[i]->gain(0, ALEVEL);
  }
  //LFO SETUP, LEVEL, FREQUENCY AND WAVEFORM, and PROEMINENCE
  lfo.begin(LFOlevel, LFOfreq, lfoWaveShapes[LFOshape]);
  voice1filtermodmixer.gain(1, LFOmix*2);
  voice2filtermodmixer.gain(1, LFOmix*2);
  voice3filtermodmixer.gain(1, LFOmix*2);
  voice4filtermodmixer.gain(1, LFOmix*2);
  //here passtrhough for DC
  voice1filtermodmixer.gain(0, (0.5-LFOmix)*2);
  voice2filtermodmixer.gain(0,(0.5-LFOmix)*2);
  voice3filtermodmixer.gain(0, (0.5-LFOmix)*2);
  voice4filtermodmixer.gain(0, (0.5-LFOmix)*2);
  //FILTER, WITH RESONNANCE AND CORNER FREQUENCY
  //resonance
  voice1filter.resonance(filterResonnance);
  voice2filter.resonance(filterResonnance);
  voice3filter.resonance(filterResonnance);
  voice4filter.resonance(filterResonnance);
  //frequency
  voice1filter.frequency(filterFrequency);
  voice2filter.frequency(filterFrequency);
  voice3filter.frequency(filterFrequency);
  voice4filter.frequency(filterFrequency);
  //NOISE
  voice1n.amplitude(noiseValue);
  voice2n.amplitude(noiseValue);
  voice3n.amplitude(noiseValue);
  voice4n.amplitude(noiseValue);
  //GLOBAL VOLUME
  mainOutMixer.gain(0,  0.7);
  mainOutMixerLeft.gain(0, 0.7);


}
