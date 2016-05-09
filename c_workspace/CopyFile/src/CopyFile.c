/*
 ============================================================================
 Name        : CopyFile.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define LEN 20

int main(void) {

	puts("Copy File");

	FILE *f_file, *f_pic, *f_finish;

	char ch, pic_name[20], file_name[20], finish_name[20];

	printf("������Ҫ�ϳɵ�ͼƬ���ļ�����: \n");
	printf("ͼƬ: ");
	scanf("%s", pic_name);
	printf("�ļ�: ");
	scanf("%s", file_name);
	printf("���: ");
	scanf("%s", finish_name);
	/////////fgets(finish_name, 20, stdin);

	if (!(f_pic = fopen(pic_name, "rb"))) {
		printf("Cannot open the ficture %s!\n", pic_name);
		exit(0); // ��ֹ����
	}
	if (!(f_file = fopen(file_name, "rb"))) {
		printf("Cannot open the file %s!\n", file_name);
		exit(0); // ��ֹ����
	}
	if (!(f_finish = fopen(finish_name, "wb"))) {
		printf("Cannot open the file %s!\n", finish_name);
		exit(0); // ��ֹ����
	}

	while (!feof(f_pic)) {
		ch = fgetc(f_pic);
		fputc(ch, f_finish);
	}
	fclose(f_pic);

	while (!feof(f_file)) {
		ch = fgetc(f_file);
		fputc(ch, f_finish);
	}
	fclose(f_file);
	fclose(f_finish);

	return EXIT_SUCCESS;
}