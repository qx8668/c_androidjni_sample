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
	//	if ((fp = fopen("C:\\test.txt", "r")) == NULL) /* 打开一个由argv[1]所指的文件*/
	//	{
	//		printf("not open");
	//		exit(0);
	//	}
	//	while ((ch = fgetc(fp)) != EOF) /* 从文件读一字符，显示到屏幕*/
	//		putchar(ch);
	//	fclose(fp);

	FILE *fp;
	if ((fp = fopen("C:\\test.txt", "wr")) == NULL) /*以只写方式打开文件*/
	{
		printf("cannot open file!\n");
		exit(0);
	}
//	char ch;
//	int j = 0;
//	while ((ch = fgetc(fp)) != '\n') {
//		j++;
//		fputc('d', fp); /*写入文件一个字符*/
//		if (j == 100) {
//			break;
//		}
//	}
	fputc('d', fp);
	fclose(fp);
	return EXIT_SUCCESS;
}
