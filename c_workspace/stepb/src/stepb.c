/*
 ============================================================================
 Name        : stepb.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
#if(0)
	int n = 0;
	printf("input a string:\n");
	while (getchar() != '\n') {
		n++;
	}
	printf("%d", n);
	getchar();
	return EXIT_SUCCESS;
#endif

#if(0)
	int a = 0, n;
	printf("\n input n:    ");
	scanf("%d", &n);
	while (n--) {
		printf("%d  ", a++ * 2);
	}
	return EXIT_SUCCESS;
#endif

	int a = 15;
	float b = 123.1234567;
	double c = 12345678.1234567;
	char d = 'p';
	printf("a=%d,%5d,%o,%x\n",a,a,a,a);
	printf("b=%f,%lf,%5.4lf,%e\n",b,b,b,b);
	printf("c=%lf,%f,%8.4lf\n",c,c,c);
	printf("d=%c,%8c\n",d,d);
	return 0;
}
