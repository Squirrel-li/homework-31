#include <stdio.h>
#include <stdlib.h>

double power(double, int);
void main(void) {
	int k;
	double ans;
	printf("計算3.5的k次方?請輸入k=");
	scanf("%d", &k);
	ans = power(3.5, k);
	printf("3.5的%d次方=%f\n", k, ans);
	system("Pause");
	return 0;
}

double power(double a, int b) {
	int i;
	double poweran = 1;
	for (i = 1; i <= b; i++) {
		poweran = poweran * a;
	}
	return poweran;
}