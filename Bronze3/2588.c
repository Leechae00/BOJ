#include <stdio.h>

int main(void) {
	int a = 0, b = 0;
	int c = 0, d = 0, e = 0;
	scanf("%d %d", &a, &b);
	e = b * 0.01;
	d = b * 0.1 - (e * 10);
	c = b - ((e * 100)+(d * 10));
	printf("%d\n", a * c);
	printf("%d\n", a * d);
	printf("%d\n", a * e);
	printf("%d", a * b);
	
	return 0;
}

