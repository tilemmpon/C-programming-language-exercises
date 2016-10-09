/*
 ============================================================================
 Name        : exercise1-14.c
 Author      : Tilemachos Bontzorlos
 Version     : 1.0
 Copyright   :
 Description : This is a program to print a histogram of the frequencies
 of different characters of input words from a text stream input. This is
 exercise 1.13 from "The C programming language", BRIAN W. KERNIGHAN, DENNIS
 M. RITCHIE, second edition.
 ============================================================================
 */

#include <stdio.h>


int main() {
	int c, characters[26], i, j;

	for (i = 0; i < 26; i++) {
		characters[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if ((c >= 'a') && (c <= 'z')) {
			characters[c - 'a']++;
		}
	}
	printf("This is a histogram of the frequencies of different characters of "
			"input words.\n");
	for (i = 0; i < 26; i++) {
		printf("%c : ", 'a' + i);
		for (j = 0; j < characters[i]; j++) {
			printf("-");
		}
		printf("\n");
	}
	return 0;
}
