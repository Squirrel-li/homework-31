#include <stdio.h>
#include <stdlib.h>

int maximum(int a, int b, int c);

int main() {
	int num1, num2, num3;
	printf("輸入3整數:\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("最大數為:%d\n", maximum(num1, num2, num3));
	system("Pause");
	return 0;
}

int maximum(int a, int b, int c) {
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	return max;
}