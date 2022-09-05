#include <stdio.h>

int main(void) {
	int N = 0;
	int K = 0;
	int X[1000];
	int i = 0, j = 0;
	int temp=0;

	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++) {
		scanf("%d", &X[i]);
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (X[i] > X[j]) {
				temp = X[i];
				X[i] = X[j];
				X[j] = temp;
			}
		}
	}
	printf("%d", X[K - 1]);
	return 0;
}