#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if(0)
int main(void) {
	char passWordAdd[] = "jkdii88@>ckkpp";
	printf("%d\n", strlen(passWordAdd));
	printf("%d\n", strlen("88@>"));
	char passWord[strlen(passWordAdd)-10];
	int i = 0;
	for (i = 5; i < 9; i++) {
		passWord[i-5] = (char) (passWordAdd[i] - 8);
		printf("%d\n", i-5);
	}
	int j = 0;
	for (j = 0; passWord[j] != '\0'; j++) {
		printf("%c", passWord[j]);
	}
	return EXIT_SUCCESS;
}
#endif
#if(0)
int main(void) {
	char ac[] = "liuqx";

	int k = 0;
	for (k = 0; ac[k] != '\0'; k++) {
		printf("%c", (char)(ac[k]+2));
	}
	printf("\n");

	char userNameAdd[] = "oijklnkwszmnkjh";
	printf("%d\n", strlen(userNameAdd));
	printf("%d\n", strlen("liuqx"));
	char userName[strlen(userNameAdd) - 10];
	int i = 0;
	for (i = 5; i < 10; i++) {
		userName[i - 5] = (char) (userNameAdd[i] - 2);
		printf("%d\n", i - 5);
	}
	int j = 0;
	for (j = 0; userName[j] != '\0'; j++) {
		printf("%c", userName[j]);
	}
	return EXIT_SUCCESS;
}
#endif

int main(void) {
	char a[] = "pcabcdb8360";
	int k = 0;
	for (k = 0; a[k] != '\0'; k++) {
		if (k % 2 == 0) {
			printf("%c", (char) (a[k] + 8));
		} else {
			printf("%c", (char) (a[k] - 2));
		}
	}
	printf("\n");
	char b[] = "xai`kbj6;48";
	int i = 0;
	for (i = 0; b[i] != '\0'; i++) {
		if (i % 2 == 0) {
			printf("%c", (char) (b[i] - 8));
		} else {
			printf("%c", (char) (b[i] + 2));
		}
	}
	return EXIT_SUCCESS;
}
