/*
 * DebuggerTest.cpp
 *
 * Author: Sanna Maatta
 * This is a test program for learning how to use Atmel ICE debugger
 */ 

 #include <Arduino.h>

 int countingDashes = 0;

 void BlinkThreeDashes() {

 	for (int i = 0; i < 3; i++) {

	 	digitalWrite(13, HIGH);
	 	delay(1000);
	 	digitalWrite(13, LOW);
	 	delay(1000);

		countingDashes = countingDashes + 1;

 	}
 }