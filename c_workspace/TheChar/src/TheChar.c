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
 * ��ʹ���ַ�ָ��������ַ����������
 * 1.���ַ�������ַ�ָ���������ʵ���ַ����Ĵ洢������
 * �ַ����������ɸ�Ԫ����ɣ�ÿ��Ԫ���з�һ���ַ������ַ�ָ�������ŵ��ǵ�ַ
 * �ַ�����һ��Ԫ�صĵ�ַ��
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
 * ��������ĳ�ʼ����
 * char str[20] = {"study c"};
 * ���ȼ���
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
	//	char *a; //������Ȼ���ԣ�����Σ�յģ�aû�г�ֵ�����ָ���
	//	scanf("%s",*a);
	/////
	char *h = "123456789";
	printf("%s\n", h);
	h += 3;
	printf("%s\n", h);
	/////�±���ʽ����ָ�����
	char *g = "abcdefghijklmn";
	int i;
	printf("�������ַ���%c\n\n", g[5]);
	for (i = 0; g[i] != '\0'; i++) {
		printf("%c", g[i]);
	}
	printf("\n");

	//////ָ������ָ��
	//������ָ�����ָ�����ͱ������ַ��������飬Ҳ����ָ��һ������
	//һ�������ڱ���ʱ�������һ����ڵ�ַ�������������ڵ�ַ�ͳ�Ϊ������ָ��

	//�ַ��������ʽ������һ���ַ���
	char aStr[] = "come on !!!"; ///�����峤���ñ������Լ����㳤��

	printf("%s\n", aStr); //���ַ�������׵�ַ����ӡ��  '\0'


	//�ַ�ָ�����ʽ������һ���ַ���
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
	copyString(power, yPower); //��д�����������

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
//// '\0' == 0 ������ '\0' �ж�����Ϊfalse;
#endif
