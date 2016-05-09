/*
 ============================================================================
 Name        : file_head.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	puts("file operation");
	//	FILE *fp;
	//	if ((fp = fopen("C:\\test.txt", "wr")) == NULL) /*以只写方式打开文件*/
	//	{
	//		printf("cannot open file!\n");
	//		exit(0);
	//	}
	char *file_path = "C:\\test1.txt";
	int fh = access(file_path, F_OK);
	printf("F_OK the result %d \n", fh);
	fh = access(file_path, R_OK);
	printf("R_OK the result %d \n", fh);
	fh = access(file_path, W_OK);
	printf("W_OK the result %d \n", fh);
	fh = access(file_path, X_OK);
	printf("X_OK the result %d \n", fh);
	fh = access(file_path, R_OK + W_OK);
	printf("R_OK+W_OK the result %d \n", fh);

	FILE *fp;
	if (!access(file_path, F_OK)) {
		// 存在文件
		printf("had\n");
		if ((fp = fopen(file_path, "a")) == NULL) {
			printf("cannot open file!\n");
		} else {
			char x[] = "I Love You";
			//write(handle, x, strlen(x));
		}
	} else {
		// 不存在文件
		printf("did not have\n");

	}

	return EXIT_SUCCESS;
}
