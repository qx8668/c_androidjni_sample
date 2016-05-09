/*
 ============================================================================
 Name        : String.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen(str);
#include <ctype.h> //toupper('a');

int main(void) {
	char str[] = "abc";
	int stringLen = strlen(str);
	char daxie = toupper('a');
	char xiaoxie = tolower('A');
	printf("String Lenght : %d\n", stringLen);
	printf("daxie Char : %c\n", daxie);
	printf("xiaoxie Char : %c\n", xiaoxie);

	return EXIT_SUCCESS;
}
