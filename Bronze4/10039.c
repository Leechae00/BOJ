#include <stdio.h>

int main(void) {
	int score[5];
	int res = 0;
	int i = 0;

	for (i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
		if (score[i] < 40) {
			score[i] = 40;
			res += score[i];
		}
		else
			res += score[i];
	}
	res = res / 5;
	printf("%d", res);
}