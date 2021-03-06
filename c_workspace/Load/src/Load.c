/*
 ============================================================================
 Name        : Load.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 1

struct student {
	char name[10];
	int num;
	int age;
	char addr[15];
} stu[SIZE];

void load();
/*
 void save() {
 FILE *fp;
 int i;

 if (!(fp = fopen("student-list", "wb"))) {
 printf("Cannot open the file!\n");
 return;
 }

 for (i = 0; i < SIZE; i++) {
 if (fwrite(&stu[i], sizeof(struct student), 1, fp) != 1) {
 printf("File write error!\n");
 fclose(fp);
 }
 }
 }
 */

int main(void) {
	/*int i;
	 printf("Please input the student's name, num, age and address: \n");
	 for (i = 0; i < SIZE; i++) {
	 scanf("%s %d %d %s", stu[i].name, &stu[i].num, &stu[i].age,
	 &stu[i].addr);
	 }
	 save();*/

	int i;

	load();
	printf("      name   num   age     address\n\n");
	for (i = 0; i < SIZE; i++) {
		printf("%10s %5d %5d %10s\n", stu[i].name, stu[i].num, stu[i].age,
				stu[i].addr);
	}

	return EXIT_SUCCESS;
}

void load() {
	FILE *fp;
	int i;

	if (!(fp = fopen("student-list", "r"))) {
		printf("Cannot open the file!\n");
		return;
	}

	for (i = 0; i < SIZE; i++) {
		fread(&stu[i], sizeof(struct student), 1, fp);
	}
	fclose(fp);
}
