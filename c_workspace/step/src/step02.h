#if(0)
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, sum = 0;
	i = 1;
	loop: if (i <= 100) {
		sum = sum + i;
		i++;
		goto loop;
	}
	printf("%d\n", sum);

	return EXIT_SUCCESS;
}
#endif
