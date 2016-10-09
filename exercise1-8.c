/*
 ============================================================================
 Name        : exercise1-8.c
 Author      : Tilemachos Bontzorlos
 Version     : 1.0
 Copyright   : 
 Description : This is a program to count blanks, tabs and newlines from a
 text stream input. This is exercise 1.8 from "The C programming language",
 BRIAN W. KERNIGHAN, DENNIS M. RITCHIE, second edition.
 ============================================================================
 */

#include <stdio.h>


int main() {
	long numberOfTabs = 0, numberOfBlanks = 0, numberOfNewlines = 0;
	int c ;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			numberOfNewlines++;
		} else if (c == '\t') {
			numberOfTabs++;
		} else if (c == ' ') {
			numberOfBlanks++;
		}
	}
	printf("Number of blanks = %d\n", numberOfBlanks);
	printf("Number of tabs = %d\n", numberOfTabs);
	printf("Number of newlines = %d\n", numberOfNewlines);
	return 0;
}
