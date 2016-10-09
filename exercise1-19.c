/*
 ============================================================================
 Name        : exercise1-19.c
 Author      : Tilemachos Bontzorlos
 Version     : 1.0
 Copyright   :
 Description : This is a program to that reverses every input line. This is
 exercise 1.19 from "The C programming language", BRIAN W. KERNIGHAN, DENNIS
 M. RITCHIE, second edition.
 ============================================================================
 */

#include <stdio.h>

const int MAXLINE = 1000; /* Maximum input line size. */

void reverseString(char input[], char output[], int length);

int main() {
	char input[MAXLINE],reversed[MAXLINE], c;
	int i;

	i = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			input[i] = '\0';
			printf("Input: %s\n", input);
			reverseString(input, reversed, i);
			printf("Reversed: %s\n", reversed);
			i = 0;
		} else {
			input[i] = c;
			i++;
		}
	}
	return 0;
}

/* reverseString: reverse a string*/
void reverseString(char from[], char to[], int length) {
	int i;

	i = 0;
	while ((to[length - i] = from[i]) != '\0') {
		i++;
	}
	to[length - i] = ' '; /* erase the line ending character */
	to[length + 1] = '\0'; /* add the missing line ending character*/
}
