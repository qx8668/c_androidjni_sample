/*
 ============================================================================
 Name        : mylang4.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//	int ff = 0;
	//	char arr[1024];
	//	char *c = "C:\\test.txt";
	//	printf("%s",c);
	//	FILE fp;
	//
	//	memset(arr,0,sizeof(arr));
	//	ff = fp->open(c);
	//	if(ff){
	//
	//	}

	//	char ch;
	//	FILE *fp;
	//	if ((fp = fopen("C:\\test.txt", "r")) == NULL) /* ��һ����argv[1]��ָ���ļ�*/
	//	{
	//		printf("not open");
	//		exit(0);
	//	}
	//	while ((ch = fgetc(fp)) != EOF) /* ���ļ���һ�ַ�����ʾ����Ļ*/
	//		putchar(ch);
	//	fclose(fp);

	FILE *fp;
	if ((fp = fopen("C:\\test.txt", "wr")) == NULL) /*��ֻд��ʽ���ļ�*/
	{
		printf("cannot open file!\n");
		exit(0);
	}
//	char ch;
//	int j = 0;
//	while ((ch = fgetc(fp)) != '\n') {
//		j++;
//		fputc('d', fp); /*д���ļ�һ���ַ�*/
//		if (j == 100) {
//			break;
//		}
//	}
	fputc('d', fp);
	fclose(fp);
	return EXIT_SUCCESS;
}
