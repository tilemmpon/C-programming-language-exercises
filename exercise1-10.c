/*
 ============================================================================
 Name        : exercise1-10.c
 Author      : Tilemachos Bontzorlos
 Version     : 1.0
 Copyright   :
 Description : This is a program to copy input to output from a text stream
 input by replacing tab with \t, backspace by \b and backslash by \\. This is
 exercise 1.10 from "The C programming language", BRIAN W. KERNIGHAN, DENNIS
 M. RITCHIE, second edition.
 ============================================================================
 */

#include <stdio.h>


int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\b') {
			putchar('\\');
			putchar('b');
		} else if (c == '\t'){
			putchar('\\');
			putchar('t');
		} else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		} else {
			putchar(c);
		}
	}

	return 0;
}
