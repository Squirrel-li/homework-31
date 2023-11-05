#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	unsigned seed;

	printf("enter seed:");
	scanf("%u", &seed);

	srand(seed);
	for (i = 1; i <= 10; i++) {
		printf("%10d", 1 + (rand() % 6));
		if (i % 5 == 0) {
			printf("\n");
		}
	}
	system("Pause");
	return 0;
}