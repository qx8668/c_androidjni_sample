/*
 ============================================================================
 Name        : mylang.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define M 97
#define max(a,b) ((a)>(b)?(a):(b))

int power(int m, int n);//function

int main(void) {
	puts("###### c_lang start #######");
	printf("define %d\n", M);
	printf("define %c\n", M);
	printf("--------\n");
	printf("%d,%d\n", power(2, 2), power(2, 3));
	int u = max(1,2);
	printf("define max %d\n",u);
	//undef max;

	int x=1,y=2,z[10]={1,2,3,4,5};

	printf("x=%d,y=%d,z[0]=%d\n",x,y,z[0]);

	int *ip; //指向整数的指针
	ip = &x; //ip 现在指向 x
	y = *ip; //y的值现在为1
	*ip = 0; //x的值现在为0
	ip = &z[0]; //ip现在指向z[0]
	printf("x=%d,y=%d,z[0]=%d\n",x,y,z[0]);
	printf("z[2]=%d\n",z[2]);
	printf("z[2]=%d\n",*(ip+2));
	return EXIT_SUCCESS;
}

int power(int base, int n) {
	int i, p = 1;
	for (i = 1; i <= n; i++) {
		p = p * base;
	}
	return p;
}
