#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int i;

	for (i = 1; i <= 10; i++) {
		printf("%.2f ", sqrt(i));
	}
	printf("\n");
	system("Pause");
	return 0;
}