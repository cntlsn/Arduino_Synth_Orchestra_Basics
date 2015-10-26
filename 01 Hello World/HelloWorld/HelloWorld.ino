/*
  ++ HELLO WORLD ++
  
  DESCRIPTION:
  Sends an impulse to a speaker/piezo for one second, then off for one second, repeatedly.
  Decrease the delay time to make noise!
  TIP - try different values for the two delays
  TIP2 - try delayMicroseconds(xx)
  
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
  digitalWrite(speaker, HIGH);   // turn on the Speaker (HIGH is the voltage level)
  delay(1000);                   // wait for a second
  digitalWrite(speaker, LOW);    // turn off the Speaker (by making the voltage LOW)
  delay(1000);                   // wait for a second
}
