/*
 ============================================================================
 Name        : androidLinux.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[] = "root:x::0:root:/root:/bin/bash:";
		char *token;

		token = strtok(str, ":");
		printf("%s\n", token);
		while ( (token = strtok(NULL, ":")) != NULL)
			printf("%s\n", token);

		return 0;
}

unsigned int strLen(const char *str)
{
    const char *p = str;
    while(*p) p ++;
    return (unsigned int)(p - str);
}

//size_t strlen1(const char *str)
//{
//    const char *p = str;
//    while(*p) p ++;
//    return (size_t)(p - str);
//}


void *memmove(void *dest, const void *src, size_t n)
{
	char temp[n];
	int i;
	char *d = dest;
	const char *s = src;

	for (i = 0; i < n; i++)
		temp[i] = s[i];
	for (i = 0; i < n; i++)
		d[i] = temp[i];

	return dest;
}
