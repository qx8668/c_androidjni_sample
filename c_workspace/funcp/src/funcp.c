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
 * �Ƚ�a , b�Ĵ�С
 */

#include <stdio.h>
#include <stdlib.h>

#if(0) //��#��ͷ�Ķ���Ԥ����ģ��൱�ں괦���ڱ���Ĺ����а���Щ����һ�¡�
int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	int max(int, int);////������һ������
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = max(a, b);
	printf("a = %d,b = %d,max = %d", a, b, c);
	return EXIT_SUCCESS;
}
#endif

#if(1) //#if(0)�൱��ע��
int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	int max(int, int);
	int (*p)(); //������һ������ָ��
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

