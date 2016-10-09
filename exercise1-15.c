/*
 ============================================================================
 Name        : exercise1-15.c
 Author      : Tilemachos Bontzorlos
 Version     : 1.0
 Copyright   :
 Description : This is a program to convert a Fahrenheit to Celcius
 temperature using a function. This is  exercise 1.15 from "The C programming
 language", BRIAN W. KERNIGHAN, DENNIS M. RITCHIE, second edition.
 ============================================================================
 */

#include <stdio.h>

void convertFahrenheitToCelcius(float fahrenheit);

int main() {

	float fahrenheit = 100.0;

	convertFahrenheitToCelcius(fahrenheit);

	return 0;
}

void convertFahrenheitToCelcius(float fahrenheit) {
	float celcius;

	celcius = (5.0/9.0) * (fahrenheit - 32);
	printf("The %.1f Fahrenheit equal to %.1f Celcius.", fahrenheit, celcius);
}
