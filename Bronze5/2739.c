#include <stdio.h>

int main(void) {
	int a = 0;
	int i = 0;

	scanf("%d", &a);

	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", a, i, a * i);
	}
	return 0;
}