#include <stdio.h>
#include <stdlib.h>

long factorial(long number);

int main(void) {
	int i;
	for (i = 0; i <= 10; i++) {
		printf("%2d!=%1d\n", i, factorial(i));
	}
	system("Pause");
	return 0;
}

long factorial(long number) {
	if (number > 1) {
		return(number = number * factorial(number - 1));
	}
	else {
		return 1;
	}
}