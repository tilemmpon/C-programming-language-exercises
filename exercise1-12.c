/*
 ============================================================================
 Name        : exercise1-12.c
 Author      : Tilemachos Bontzorlos
 Version     : 1.0
 Copyright   :
 Description : This is a program to to print input words from a text stream
 input one word at a line. This is exercise 1.12 from "The C programming
 language", BRIAN W. KERNIGHAN, DENNIS M. RITCHIE, second edition.
 ============================================================================
 */

#include <stdio.h>

//#define IN 1;
//#define OUT 0;

int main() {
	const int IN = 1, OUT = 0; // Inside or outside a word
	int c, state = OUT, numberOfSpecialChars = 0;

	while ((c = getchar()) != EOF) {
		if ((c == '\t') || (c == ' ') || (c == '\n')) {
			state = OUT;
			if (numberOfSpecialChars == 0){
				putchar('\n');
			}
			numberOfSpecialChars++;
		} else if (state == OUT) {
			state = IN;
			numberOfSpecialChars = 0;
			putchar(c);
		} else {
			putchar(c);
		}
	}
	return 0;
}
