/*
 ============================================================================
 Name        : file_head2.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *fp;
	char ch, filename[20];

	printf("Please input the filename you want to write: ");
	scanf("%s", filename);

	if (!(fp = fopen(filename, "wt+"))) {
		printf("Cannot open the file!\n");
		exit(0); // ��ֹ����
	}

	printf("Please input the sentences you want to write: ");
	// ch = getchar();  // ��˼������
	ch = getchar();
	while (ch != EOF) // ctrl + z
	{
		fputc(ch, fp);
		ch = getchar();
	}

	fclose(fp);
	return EXIT_SUCCESS;
}
