/*Title: Exercise2a4
Description: Traffic Lights implemented with LEDs and arduino. It blinks TUAS when the light is green
Authors: Veneta and Joshua
*/
#include <Arduino.h>
#include "tuas.h"

#define RED 8
#define YELLOW 9
#define GREEN 10

// the setup function runs once when you press reset or power the board
void setup() {
	// initialize digital pins
	pinMode(LED_BUILTIN, OUTPUT); //calls the build-in led
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
	spellTuas(); // write Tuas while green light
	digitalWrite(GREEN, LOW);
}

// the loop function runs over and over again forever
void loop() {
	redLight();
	redAndYellow();
	greenLight();
	yellowLight();
}
