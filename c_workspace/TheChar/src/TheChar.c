/*
 ============================================================================
 Name        : TheChar.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * 对使用字符指针变量和字符数组的讨论
 * 1.用字符数组和字符指针变量都能实现字符串的存储和运算
 * 字符数组由若干个元素组成，每个元素中放一个字符，而字符指针变量存放的是地址
 * 字符串第一个元素的地址。
 * char str[20];
 * str = ".."; //wrong
 * char *theStr;
 * theStr = "study c";
 * --------
 * char *a = "study c";
 * ==
 * char *a;
 * a = "study c";
 * --------
 * 而对数组的初始化：
 * char str[20] = {"study c"};
 * 不等价于
 * char str[20];
 * str[] = "study c";
 */

#include <stdio.h>
#include <stdlib.h>

#if(0)
int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	/////
	//	char str[10];
	//	scanf("%s",str);
	//	char *a; //方法虽然可以，但是危险的，a没有初值是随机指向的
	//	scanf("%s",*a);
	/////
	char *h = "123456789";
	printf("%s\n", h);
	h += 3;
	printf("%s\n", h);
	/////下标形式引用指针变量
	char *g = "abcdefghijklmn";
	int i;
	printf("第六个字符是%c\n\n", g[5]);
	for (i = 0; g[i] != '\0'; i++) {
		printf("%c", g[i]);
	}
	printf("\n");

	//////指向函数的指针
	//可以用指针变量指向整型变量，字符串，数组，也可以指向一个函数
	//一个函数在编译时被分配给一个入口地址。这个函数的入口地址就称为函数的指针

	//字符数组的形式，定义一个字符串
	char aStr[] = "come on !!!"; ///不定义长度让编译器自己计算长度

	printf("%s\n", aStr); //给字符数组的首地址，打印到  '\0'


	//字符指针的形式，定义一个字符串
	char *bStr = "come on !!!";

	printf("%s\n", bStr);

	char srcStr[] = "char copy";
	char copyStr[40];
	int j;
	for (j = 0; *(srcStr + j) != '\0'; j++) {
		*(copyStr + j) = *(srcStr + j);
	}
	*(copyStr + j) = '\0';

	printf("srcStr is : %s\n", srcStr);
	printf("copyStr is : ");
	for (j = 0; copyStr[j] != '\0'; j++) {
		printf("%c", copyStr[j]);
	}
	printf("\n");

	char theChar[] = "hello world !!";
	char theCharb[40];
	char *p1;
	char *p2;
	int k;
	p1 = theChar;
	p2 = theCharb;
	for (; *p1 != '\0'; p1++, p2++) {
		*p2 = *p1;
	}
	*p2 = '\0';

	printf("String theChar is : %s\n", theChar);
	printf("String b is : ");
	for (k = 0; theCharb[k] != '\0'; k++) {
		printf("%c", theCharb[k]);
	}

	return EXIT_SUCCESS;
}
#endif

#if(0)
int main(void) {
	puts("!!!Hello World!!!");
	void copyString(char from[], char to[]);
	char yPower[] = "y-power123";
	char power[] = "y-power";

	printf("yPower = %s , power = %s\n", yPower, power);
	printf("copy\n");
	copyString(power, yPower);

	printf("yPower = %s , power = %s\n", yPower, power);

	return EXIT_SUCCESS;
}

void copyString(char from[], char to[]) {
	int i = 0;
	while (from[i] != '\0') {
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}
#endif

#if(1)
int main(void) {
	puts("!!!Hello World!!!");
	void copyString(char *from, char *to);
	char yPower[] = "y-power123";
	char *power = "y-power";

	printf("yPower = %s , power = %s\n", yPower, power);
	printf("copy\n");
	copyString(power, yPower); //被写的最好是数组

	printf("yPower = %s , power = %s\n", yPower, power);

	return EXIT_SUCCESS;
}

//void copyString(char *from, char *to) {
//	//	while (*from != '\0') {
//	//		*to = *from;
//	//		from++;
//	//		to++;
//	//	}
//	//	*to = '\0';
//	for (; *from != '\0'; from++, to++) {
//		*to = *from;
//	}
//	*to = '\0';
//}
#endif
#if(0)
void copyString(char *from, char *to) {
	while ((*to = *from) != '\0') {
		from++;
		to++;
	}
}
#endif

#if(1)
void copyString(char *from, char *to) {
	while (*to++ = *from++) {
		;
	}
}
//// '\0' == 0 当等于 '\0' 判定条件为false;
#endif
