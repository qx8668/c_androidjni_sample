/*
 ============================================================================
 Name        : head_string2.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	/*
	 extern void *memccpy(void *dest, void *src, unsigned char ch, unsigned int count);

	 功能：由src所指内存区域复制不多于count个字节到dest所指内存区域，如果遇到字符ch则停止复制。

	 说明：返回指向字符ch后的第一个字符的指针，如果src前n个字节中不存在ch则返回NULL。ch被复制。
	 */
	puts("memccpy");
	char dest[] = "12345678";
	char src[] = "abcdefgh";

	printf("sizeof : %d\n", sizeof(dest));
	printf("strlen : %d\n", strlen(dest));
	//(void *dest, void *src, unsigned char ch, unsigned int count)
	memccpy(dest, src, 'c', sizeof(src));

	printf("dest : %s\n", dest);
	printf("src  : %s\n", src);

	puts("-------------------");

	char a[10];
	char b[] = "abcdefgh";
	char *p;
	memset(a, '\0', sizeof(a));

	//	int i = 0;
	//	for (i = 0; i < 20; i++) {
	//		if (a[i] == '\0') {
	//			printf("have end 0");
	//		}
	//	}

	printf("sizeof : %d\n", sizeof(a));
	printf("strlen : %d\n", strlen(a));
	//strcpy();
	//	memccpy(a, b, 'c', 2);
	p = memccpy(a, b, 'e', sizeof(b));

	if (p == NULL) {
		puts("no found");
	} else {
		printf("found : %s\n", p);
	}

	printf("a : %s\n", a);
	printf("b : %s\n", b);

	printf("sizeof : %d\n", sizeof(a));
	printf("strlen : %d\n", strlen(a));

	puts("memcpy");

	char xx[30] = "xxxddd";
	char yy[30] = "yyy\0zzz";

	int i;
	// no '\0'
	//yyyzzz
	//yyyzzz
	strcpy(xx, yy);

	for (i = 0; i < 30; i++) {
		printf("%c", xx[i]);
	}

	printf("\n");

	memcpy(xx, yy, 30);

	for (i = 0; i < 30; i++) {
		printf("%c", xx[i]);
	}

	printf("\n");

	memmove(xx, yy, 30);

	for (i = 0; i < 30; i++) {
		printf("%c", xx[i]);
	}
	printf("\n");

	char *ss = "0123456789abc";
	char *pp;
	pp = rindex(ss,'8');

	printf("rindex : %s\n", pp);

	return EXIT_SUCCESS;

	//	main()
	//	      {
	//	        char *s="Golden Global View";
	//	        char d[20],*p;
	//
	//	        clrscr();
	//
	//	        p=memccpy(d,s,'x',strlen(s));
	//	        if(p)
	//	        {
	//	          *p='\0';      // MUST Do This
	//	          printf("Char found: %s.\n",d);
	//	        }
	//	        else
	//	          printf("Char not found.\n");
	//
	//
	//	        getchar();
	//	        return 0;
	//	      }

}
