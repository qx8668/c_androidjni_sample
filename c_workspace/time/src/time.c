/*
 ============================================================================
 Name        : time.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	puts("time");
	clock_t ct = clock();
	printf("cpu time %ld\n", ct);
	time_t tt;
	time(&tt);
	//1312984185179 java
	//1312984213    c
	//1312984255691 java
	//1312986424    c
	printf("time() : %ld\n", tt);
	time_t tt2 = 1312984213;
	//struct tm *p = gmtime(&tt);
	struct tm *p = localtime(&tt2);
	printf("%4d-%02d-%02d %02d:%02d:%02d\n", (1900 + p->tm_year), (1
			+ p->tm_mon), p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec);
	char c[20];
	char *d = c;
	sprintf(d, "%4d-%02d-%02d %02d:%02d:%02d", (1900 + p->tm_year), (1
			+ p->tm_mon), p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec);
	printf("%s", c);
	return EXIT_SUCCESS;
}
