/*
 ============================================================================
 Name        : head_file_digitfunction.c
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
#include <ctype.h>

int main(void) {
	puts("######����ת������######");

	puts("�ַ���ת���ɸ�����");
	char *a = "-100.23";
	char *b = "200e-2";
	double c = atof(a) + atof(b);
	printf("c = %f\n", c);
	printf("c = %.2f\n", c);
	puts("�ַ���ת���ɸ�����strtod");
	c = strtod(a, NULL) + strtod(b, (char**) NULL);
	printf("_c = %f\n", c);

	puts("�ַ���ת��������");
	char aa[] = "-100";
	char bb[] = "   17";
	int cc = atoi(aa) + atoi(bb);
	printf("cc = %d\n", cc);
	long ccl = atol(aa) + atol(bb);
	printf("ccl = %ld\n", ccl);
	puts("�ַ���ת���ɸ�����strtol");
	long dd = strtol(bb, NULL, 10);
	printf("dd = %ld\n", dd);
	unsigned long ee = strtoul(bb, NULL, 10); //�޷��ų�����
	printf("ee = %ld\n", ee);
	dd = strtol(bb, NULL, 16); //2 8 16ʮ��ת10
	printf("c16=%ld\n", strtol("ffff", NULL, 16));

	puts("������ת���ɺϷ�ASCII�ַ� ");
	int ta = 200;
	char tb;
	printf("ת��ǰ     a value = %d(%c)\n", ta, ta);
	tb = toascii(ta);
	printf("ת��ǰ     a value = %d(%c)\n", tb, tb);

	char arr[] = "abcDEF";

	int i = 0;
	for (i = 0; i < sizeof(arr); i++) {
		arr[i] = tolower(arr[i]);
	}
	printf("tolower : %s\n", arr);

	for (i = 0; i < sizeof(arr); i++) {
		//�����±�����Ϊchar
		arr[i] = toupper(arr[i]);
	}
	printf("toupper : %s\n", arr);

	puts("#######sprintf#######");

//	char *s;
//
//	sprintf(s, "%d", 123);
//
//	printf("convert dtochar %s",s);

	return EXIT_SUCCESS;
}
