/*
 ============================================================================
 Name        : exercise1-16.c
 Author      : Tilemachos Bontzorlos
 Version     : 1.0
 Copyright   :
 Description : This is a program to print the maximum length and the text of
 the longest input line. This is  exercise 1.16 from "The C programming
 language", BRIAN W. KERNIGHAN, DENNIS M. RITCHIE, second edition.
 ============================================================================
 */

#include <stdio.h>

const int MAXLINE = 1000; /* Maximum input line size. */

int getLine(char s[], int lim);
void copy(char to[], char from[]);

int main() {
	int len; /* current line length */
	int max; /* maximum length seen so far */
	char line[MAXLINE]; /* current input line */
	char longest[MAXLINE]; /* longest line saved */

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0) {
		printf("%d: %s", len, line);
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0) {
		printf("Longest length: %d\n", max);
		printf("Longest line: %s\n", longest);
	}

	return 0;
}

/* geLline: read a line into s, return length*/
int getLine(char s[], int lim) {
	int c, i, counter;

	for (i = 0, counter = 0;i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++ ) {
		if (i < lim -1) {
			s[i] = c;
			counter++;
		}
	}

	if (c == '\n') {
		s[counter] = c;
		counter++;
	}

	s[counter] = '\0';

	return i;
}

/* copy: copy "from" into "to", assuming "to" is big enough*/
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}
