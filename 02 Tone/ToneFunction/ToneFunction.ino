/*
  ++ TONE ++
  
  DESCRIPTION:
  Uses the tone library to generate a sound at a specific frequency, 500Hz by default.
  The tone function accepts two parameters: tone(pin, frequency).
  Change the frequency value to change the tone pitch!
  
  CIRCUIT:
  Connect a speaker or piezo to pin number 12 and to ground
 
  This example code is in the public domain.

  Author: Alessandro Contini
  
 */
 
int speaker = 12;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(speaker, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  int freq = 500;
  tone(speaker, freq);
}
