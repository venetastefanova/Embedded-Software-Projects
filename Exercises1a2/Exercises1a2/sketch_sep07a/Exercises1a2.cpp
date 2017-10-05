/*
Title: Exercise1a2
Authors: Joshua Scott and Veneta Stefanova
Description: Blinks 'TUAS' in Morse code.
*/

#include <Arduino.h>

void setup() {
	pinMode(LED_BUILTIN, OUTPUT);
}

void dot() {
	digitalWrite(LED_BUILTIN, HIGH);
	delay(300);
	digitalWrite(LED_BUILTIN, LOW);
	delay(300);
}

void dash() {
	digitalWrite(LED_BUILTIN, HIGH);
	delay(900); // dash is 3 dots
	digitalWrite(LED_BUILTIN, LOW);
	delay(300);
}

void letterSpace() {
	delay(900); // space between letters is 3 dots
}

void wordSpace() {
	delay(2100); //space between words is 7 dots
}

void loop() {
	// T
	dash();
	letterSpace();
	
	// U
	dot();
	dot();
	dash();
	letterSpace();
	
	// A
	dot();
	dash();
	letterSpace();
	
	// S
	dot();
	dot();
	dot();
	
	wordSpace();
}