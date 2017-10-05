/*Title: Exercise2a3
Description: Traffic Lights implemented with LEDs and arduino 
Authors: Veneta and Joshua
*/
#include <Arduino.h>

#define RED 8
#define YELLOW 9
#define GREEN 10

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}
void redLight(){
	digitalWrite(RED, HIGH);   // turn the LED on (HIGH is the voltage level)
	delay(3000);				// wait for 3 seconds
	digitalWrite(RED, LOW);    // turn the LED off by making the voltage LOW
}

void yellowLight(){
	digitalWrite(YELLOW, HIGH);   
	delay(1000);                      
	digitalWrite(YELLOW, LOW);  
}

void redAndYellow(){
	digitalWrite(RED, HIGH);   
	digitalWrite(YELLOW, HIGH);  
	delay(1000);                      
	digitalWrite(RED, LOW);   
	digitalWrite(YELLOW, LOW);   
	
}

void greenLight(){
	digitalWrite(GREEN, HIGH);   
	delay(3000);                 
	digitalWrite(GREEN, LOW); 
}

// the loop function runs over and over again forever
void loop() {
    redLight();
	redAndYellow();
	greenLight();
	yellowLight();
}
