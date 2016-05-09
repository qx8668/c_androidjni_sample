/*
 * step3.c
 *
 *  Created on: 2011-8-2
 *      Author: liuquanxing
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;
	printf("input a string:\n");
	while (getchar() != '\n'){
		n++;
	}
	printf("%d", n);
	return EXIT_SUCCESS;
}
