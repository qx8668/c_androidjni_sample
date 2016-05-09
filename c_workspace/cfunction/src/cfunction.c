/*
 ============================================================================
 Name        : cfunction.c
 Author      : liuquanxing
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#define COUNT 90

int main(void) {
	// char str2[4] = {'a','b','c'};
	char *str = "abc";
	printf("%d", strlen(str)); //内部自带计算长度的函数
	printf("\n");

	//	atof(将字符串转换成浮点型数)
	//	atoi(将字符串转换成整型数)
	//	atol(将字符串转换成长整型数)
	//	strtod(将字符串转换成浮点数)
	//	strtol(将字符串转换成长整型数)
	//	strtoul(将字符串转换成无符号长整型数)
	//	toascii(将整型数转换成合法的ASCII 码字符)
	//	toupper(将小写字母转换成大写字母)
	//	tolower(将大写字母转换成小写字母)

	// c d f 表示字符型、整型和浮点型
	char *a = "-100.23";
	char change = '\n';
	float c = atof(a) - 0.02;
	printf("c = %f\n", c);
	printf("COUNT = %d", COUNT);
	printf("%c",'%');

	//没有提供二进制数的表达方法
	int a8 = 056;
	int a16 = 0x2080;
//	printf("\n");
//	char input = getchar();//从终端得到一个字符
//	printf("input %c", input);
//	printf("\n");
//	putchar(input);
//	ff();
//	printf("\n");
	return EXIT_SUCCESS;
}
int ff(void) {
	printf("void");
	return 0;
}
