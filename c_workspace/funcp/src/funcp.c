/*
 ============================================================================
 Name        : funcp.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/**
 * 比较a , b的大小
 */

#include <stdio.h>
#include <stdlib.h>

#if(0) //以#开头的都是预编译的，相当于宏处理，在编译的过程中把这些翻译一下。
int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	int max(int, int);////先声明一个函数
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = max(a, b);
	printf("a = %d,b = %d,max = %d", a, b, c);
	return EXIT_SUCCESS;
}
#endif

#if(1) //#if(0)相当于注释
int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	int max(int, int);
	int (*p)(); //声明了一个函数指针
	int a, b, c;
	p = max;
	scanf("%d %d", &a, &b);
	c = (*p)(a, b);
	printf("a = %d,b = %d,max2 = %d", a, b, c);
	return EXIT_SUCCESS;
}
#endif

int max(int x, int y) {
	int z;
	if (x > y) {
		z = x;
	} else {
		z = y;
	}
	return z;
}

void sub(int(*x1)(int), int(*x2)(int, int)) {
	int a,b,i,j;
	a = (*x1)(i);
	b = (*x2)(i,j);
}

