/*
 ============================================================================
 Name        : mylang3.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char * month_name(int n);

char * month_name(int n){

	static char *name[] = {
			"Illegal month",
			"January",
			"February",
			"March",
			"April",
			"May",
			"June",
			"July",
			"August",
			"September",
			"October",
			"November",
			"December"
	};
	return ( n<1 || n>12 )? name[0] : name[n];
}

int main(void) {




	return EXIT_SUCCESS;
}
