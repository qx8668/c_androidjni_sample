/*
 ============================================================================
 Name        : mylang2.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
static char daytab[2][13] = { { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,
		31 }, { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } };

int day_of_year(int year, int month, int day);
void month_day(int year, int yearday, int *pmonth, int *pda);

int day_of_year(int year, int month, int day) {
	int i, leap;
	leap = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
	for (i = 1; i < month; i++) {
		day += daytab[leap][i];
	}
	return day;
}
void month_day(int year, int yearday, int *pmonth, int *pday) {
	int i, leap;
	leap = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);

	for (i = 1; yearday > daytab[leap][i]; i++) {
		yearday -= daytab[leap][i];
	}
	*pmonth = i;
	*pday = yearday;
}
struct point {
	int x;
	int y;
};
struct rect{
	struct point pt1;
	struct point pt2;
};
struct point make_point(int x,int y);

struct point make_point(int x,int y){
	struct point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}


int main(void) {
	//struct point pt;
	struct point pt = make_point(400,600);
	printf("%d , %d\n", pt.x, pt.y);
	struct point maxpt = { 800, 600 };
	printf("%d , %d\n", maxpt.x, maxpt.y);
	printf("the day %d\n", day_of_year(2011, 3, 1));
	printf("int size %d\n",sizeof(int));
	//32 λ windows
	int a = 66000;
	printf("int size %d\n",a);
	char *p = NULL;
	if(p==NULL){
		printf("NULL\n");
	}
	return EXIT_SUCCESS;
}
