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
	printf("%d", strlen(str)); //�ڲ��Դ����㳤�ȵĺ���
	printf("\n");

	//	atof(���ַ���ת���ɸ�������)
	//	atoi(���ַ���ת����������)
	//	atol(���ַ���ת���ɳ�������)
	//	strtod(���ַ���ת���ɸ�����)
	//	strtol(���ַ���ת���ɳ�������)
	//	strtoul(���ַ���ת�����޷��ų�������)
	//	toascii(��������ת���ɺϷ���ASCII ���ַ�)
	//	toupper(��Сд��ĸת���ɴ�д��ĸ)
	//	tolower(����д��ĸת����Сд��ĸ)

	// c d f ��ʾ�ַ��͡����ͺ͸�����
	char *a = "-100.23";
	char change = '\n';
	float c = atof(a) - 0.02;
	printf("c = %f\n", c);
	printf("COUNT = %d", COUNT);
	printf("%c",'%');

	//û���ṩ���������ı�﷽��
	int a8 = 056;
	int a16 = 0x2080;
//	printf("\n");
//	char input = getchar();//���ն˵õ�һ���ַ�
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
