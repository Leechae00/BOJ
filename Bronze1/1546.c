#include <stdio.h>

int main(void) {
	double N = 0;
	double M[1000];
	double total = 0;
	double Max_value = 0;
	int i = 0;

	scanf("%lf", &N);
	for (i = 0; i < N; i++) {
		scanf("%lf", &M[i]);

		if (Max_value < M[i]) {
			Max_value = M[i];
		}
	}

	for (i = 0; i < N; i++) {
		total += ((M[i] / Max_value) * 100);
	}
	total = total / N;
	printf("%lf", total);
}