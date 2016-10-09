/*
 ============================================================================
 Name        : exercise1-9.c
 Author      : Tilemachos Bontzorlos
 Version     : 1.0
 Copyright   : 
 Description : This is a program to copy input to output from a text stream
 input by replacing one or more blanks by one blank character. This is
 exercise 1.9 from "The C programming language", BRIAN W. KERNIGHAN, DENNIS
 M. RITCHIE, second edition.
 ============================================================================
 */

#include <stdio.h>


int main() {
	int c, numberOfBlanks = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (numberOfBlanks == 0) {
				putchar(c);
			}
			numberOfBlanks++;
		} else {
			putchar(c);
			numberOfBlanks = 0;
		}
	}
}
