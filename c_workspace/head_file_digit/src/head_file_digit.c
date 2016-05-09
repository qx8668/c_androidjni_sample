/*
 ============================================================================
 Name        : head_file_digit.c
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
	puts("######数据转换函数######");

	puts("字符串转换成浮点数");
	char *a = "-100.23";
	char *b = "200e-2";
	double c = atof(a) + atof(b);
	printf("c = %f\n", c);
	printf("c = %.2f\n", c);
	puts("字符串转换成浮点数strtod");
	c = strtod(a, NULL) + strtod(b, (char**) NULL);
	printf("_c = %f\n", c);
	a = "1100.23";
	b = "200e-2";
	c = strtod(a, NULL) + strtod(b, (char**) NULL);
	printf("__c = %f\n", c);
	printf("errno = %d\n", errno);
	if ((errno == ERANGE && (c == DBL_MAX_EXP || c == DBL_MIN_EXP)) || (errno
			!= 0 && c == 0)) {
		perror("strtol");
		exit(EXIT_FAILURE);
	}

	puts("字符串转换成整数");
	char aa[] = "-100";
	char bb[] = "   456";
	int cc = atoi(aa) + atoi(bb);
	printf("cc = %d\n", cc);

	return EXIT_SUCCESS;
}
