/*
 ============================================================================
 Name        : process.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	int max(int, int);
	int min(int, int);
	int sum(int, int);
	void process(int x, int y, int(*fun)());

	int a, b;
	scanf("%d %d", &a, &b);

	printf("max = ");
	process(a, b, max);

	printf("min = ");
	process(a, b, min);

	printf("sum = ");
	process(a, b, sum);

	return EXIT_SUCCESS;
}

void process(int x, int y, int(*fun)()) {
	int result = (*fun)(x, y);
	printf("%d\n", result);
}

int max(int x, int y) {
	int z;
	if (x > y) {
		z = x;
	} else {
		z = y;
	}
	return z;
}

int min(int x, int y) {
	int z;
	if (x < y) {
		z = x;
	} else {
		z = y;
	}
	return z;
}

int sum(int x, int y) {
	int z = x + y;
	return z;
}
