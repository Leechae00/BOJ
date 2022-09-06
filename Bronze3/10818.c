#include <stdio.h>

int main(void) {
	int total = 0;
	int max_value = -100000000;
	int min_value = 100000000;
	int input = 0;
	int i = 0;

	scanf("%d", &total);

	for (i = 0; i < total; i++) {
		scanf("%d", &input);
		if (input > max_value) {
			max_value = input;
		}
		if (min_value > input) {
			min_value = input;
		}
	}
	
	printf("%d ", min_value);
	printf("%d", max_value);

	return 0;
}