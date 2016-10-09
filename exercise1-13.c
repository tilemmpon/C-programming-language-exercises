/*
 ============================================================================
 Name        : exercise1-13.c
 Author      : Tilemachos Bontzorlos
 Version     : 1.0
 Copyright   :
 Description : This is a program to to print the histogram of the lengths of
 input words from a text stream input. This is exercise 1.13 from "The C
 programming language", BRIAN W. KERNIGHAN, DENNIS M. RITCHIE, second
 edition.
 ============================================================================
 */

#include <stdio.h>


int main() {
	const int IN = 1, OUT = 0; // Inside or outside a word
	int c, state = OUT, numberOfSpecialChars = 0, lengthsOfWords[15],
			lengthOfCurrentWord = 0, i, j;

	for (i = 0; i < 15; i++) {
		lengthsOfWords[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if ((c == '\t') || (c == ' ') || (c == '\n')) {
			state = OUT;
			numberOfSpecialChars++;
			lengthsOfWords[lengthOfCurrentWord]++;
			lengthOfCurrentWord = 0;
		} else if (state == OUT) {
			state = IN;
			numberOfSpecialChars = 0;
			lengthOfCurrentWord++;
		} else {
			lengthOfCurrentWord++;
		}
	}
	printf("this is a histogram of the lengths of the input words.\n");
	for (i = 0; i < 15; i++) {
		printf("%d : ", i);
		for (j = 0; j < lengthsOfWords[i]; j++) {
			printf("-");
		}
		printf("\n");
	}
	return 0;
}
