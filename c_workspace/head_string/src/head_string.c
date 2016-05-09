/*
 ============================================================================
 Name        : head_string.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	puts("string");

	char *c = "a123456789abbbaccca";
	char *p;
	p = index(c, '1');
	printf("%s\n", p);
	p = index(c, 'y');
	if (p == NULL) {
		printf("no found \n");
	}
	p = index(c, 'a');
	printf("%s\n", p);

	printf("\n\nloop...\n\n");
	p = c;
	while ((p = index(p, 'a')) != NULL) {
		printf("%s\n", p);
		p++;
	}

	puts("memchr");

	p = memchr(c, '9', 8); // 8 个字节前面有没有 '9'

	printf("memchr %s\n", p);

	puts("memcmp");

	char *x = "abcdef";
	char *y = "aBcdEf";

	int z = memcmp((void *) x, (void *) y, 3);

	printf("memcmp(x,y) : %d\n", z);

	z = memcmp(x, y, 3);

	printf("memcmp(x,y) : %d\n", z);

	z = strcasecmp(x, y);

	printf("strcasecmp(x,y) : %d\n", z);

	z = strcmp(x, y);

	printf("strcmp(x,y) : %d\n", z);

	z = strcoll(x, y);

	printf("strcoll(x,y) : %d\n", z); //根据环境变量LC_COLLATE指定的文字排列顺序来对比


	char ww[40] = "www.goolge.com";
	char yy[] = "->android";

	char *result = strcat(ww,yy);

	printf("result : %s\n", result);

	char *c1 = "a123456789abbbaccca";
	char *p1;
	p1 = strchr(c1,'b');
	printf("strchr result : %s\n", p1);

	return EXIT_SUCCESS;
}
