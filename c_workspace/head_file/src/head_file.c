/*
 ============================================================================
 Name        : head_file.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 #include <assert.h>
 #include <complex.h>
 #include <errno.h>
 #include <fenv.h>
 #include <float.h>
 #include <inttypes.h>
 #include <iso646.h>
 #include <limits.h>
 #include <locale.h>
 #include <math.h>
 #include <setjmp.h>
 #include <setjmp.h>
 #include <signal.h>
 #include <stdarg.h>
 #include <stdbool.h>
 #include <stddef.h>
 #include <stdint.h>
 #include <string.h>
 #include <tgmath.h>
 #include <time.h>
 #include <wchar.h>
 #include <wctype.h>
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	int i = 0;
	int the_ascii[255];
	for (i = 0; i <= 255; i++) {
		the_ascii[i] = i;
	}
	int j = 0;
	puts("\n###### 255 #######\n");
	for (j = 0; j <= 255; j++) {
		printf("%c,", the_ascii[j]);
	}
	puts("\n\n###### Ӣ����ĸ������  #######");
	for (j = 0; j <= 255; j++) {
		if (isalnum(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
			printf("%d,", j);
		}
	}
	puts("\n\n###### Ӣ����ĸ  #######");
	for (j = 0; j <= 255; j++) {
		if (isalpha(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
			//printf("%d,", j);
		}
	}
	puts("\n\n###### ascii�ַ�  #######");
	for (j = 0; j <= 255; j++) {
		if (isascii(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
			//printf("%d,", j);
		}
	}

	puts("\n\n###### �հ��ַ�  #######");
	for (j = 0; j <= 255; j++) {
		if (isblank(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
			printf("%d,", j);
		}
	}

	puts("\n\n###### �հ��ַ�  #######");
	for (j = 0; j <= 255; j++) {
		if (isspace(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
			printf("%d,", j);
		}
	}

	puts("\n\n###### ascii�����ַ�   #######");
	for (j = 0; j <= 255; j++) {
		if (iscntrl(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
			printf("%d,", j);
		}
	}

	puts("\n\n###### ����������   #######");
	for (j = 0; j <= 255; j++) {
		if (isdigit(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
		}
	}

	puts("\n\n###### �ɴ�ӡ�ַ�   #######");
	for (j = 0; j <= 255; j++) {
		if (isgraph(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
		}
	}

	puts("\n\n###### �ɴ�ӡ�ַ�   #######");
	for (j = 0; j <= 255; j++) {
		if (isprint(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
		}
	}

	puts("\n\n###### СдӢ����ĸ   #######");
	for (j = 0; j <= 255; j++) {
		if (islower(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
		}
	}

	puts("\n\n###### ��дӢ����ĸ   #######");
	for (j = 0; j <= 255; j++) {
		if (isupper(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
		}
	}

	puts("\n\n###### �����������   #######");
	for (j = 0; j <= 255; j++) {
		if (ispunct(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
		}
	}

	puts("\n\n###### ʮ������   #######");
	for (j = 0; j <= 255; j++) {
		if (isxdigit(the_ascii[j])) {
			printf("%c,", the_ascii[j]);
		}
	}
	return EXIT_SUCCESS;
}
