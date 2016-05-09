/*
 ============================================================================
 Name        : ttt.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <float.h>

int main(void) {
	FILE *fp = fopen("C:\\test1112.txt", "r");
	//strtod("[]", NULL);
	printf("errno = %d\n", errno);
	perror("strtol");
	return 0;
}
