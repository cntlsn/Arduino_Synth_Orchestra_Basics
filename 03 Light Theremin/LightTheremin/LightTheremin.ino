/*
  ++ LIGHT THEREMIN ++
  
  DESCRIPTION:
  Reads a light value from a Light Dependent Resistor (LDR) and turns it into sound.
  It works like a Theremin, but taking light as an input.
  TIP - uncomment the commented rows to show the values coming from the LDR into the Serial Monitor
  TIP2 - calibrate your LDR sensor with the following steps
          Step 1, open the Serial Monitor
          Step 2, cover the LDR with your hand and read the lowest value in the Serial Monitor
          Step 3, put the LDR close to a light source and read the max value in the Serial Monitor
          Step 4, change the values in the map function as follow: map(lightVal, min sensor val, max sensor val, min frequency, maximum frequency)
  TIP 3 - don't forget to change the second parameter in the tone function to play the desired frquency: tone(speaker, freq)
  
  CIRCUIT:
  Connect a speaker or piezo to pin number 12 and to ground;
  Connect one lead of an LDR to 5v, the other to Analog Input pin 0 and to ground through a 10k resistor. 
  
 
  This example code is in the public domain.

  Author: Alessandro Contini
  
 */
 
int speaker = 12;
int LDR = A0;
int lightVal;
int freq;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(speaker, OUTPUT);
  //  Serial.begin(9600);  
}

// the loop routine runs over and over again forever:
void loop() {
  //  lightVal = analogRead(LDR);                         // read value from LDR
  //  Serial.println(lightVal);
  //  freq = map(lightVal, 100, 1023, 200, 5000);         // map the light value into a frequency in the range 100 - 5000 Hz
  tone(speaker, analogRead(LDR));                         // play the tone on speaker with the current frequency 
}
