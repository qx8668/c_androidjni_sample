/*
 ============================================================================
 Name        : sss.c
 Author      : liuquanxing
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[]) {
	int base;
	char *endptr, *str;
	long val;

//	if (argc < 2) {
//		fprintf(stderr, "Usage: %s str [base]/n", argv[0]);
//		exit(EXIT_FAILURE);
//	}

	str = "wwww11";
	base = 10;

	/* To distinguish success/failure after call */
	errno = 0;
	val = strtol(str, &endptr, base);

	/* Check for various possible errors */
	if ((errno == ERANGE && (val == LONG_MAX || val == LONG_MIN)) || (errno
			!= 0 && val == 0)) {
		perror("strtol");
		exit(EXIT_FAILURE);
	}

	if (endptr == str) {
		fprintf(stderr, "No digits were found/n");
		exit(EXIT_FAILURE);
	}

	/* If we got here, strtol() successfully parsed
	 a number */

	printf("strtol() returned %ld\n", val);
	/* Not necessarily an error... */
	if (*endptr != '/0')
		printf("Further characters after number: %s\n", endptr);
	exit(EXIT_SUCCESS);
}

