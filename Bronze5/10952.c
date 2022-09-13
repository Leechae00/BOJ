#include <stdio.h>
int main(void) {
	int A;
	int B;

	while (1) {
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0) {
			break;
		}
		else
			printf("%d\n", A + B);
	}
	return 0;
}