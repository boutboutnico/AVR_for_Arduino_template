/*
 * main.cpp
 *
 *  Created on: 4 avr. 2014
 *      Author: Nico_user
 */

#include "Arduino.h"

void setup(void)
{
	Serial.begin(9600);
}

void loop(void)
{
	Serial.print("Hello World\n");

	delay(500);
}
