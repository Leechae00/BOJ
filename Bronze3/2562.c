#include <stdio.h>

int main(void) {
	int nine[9];
	int i = 0;
	int total = 0;
	int rjsk = 0;

	for (i = 0; i < 9; i++) {
		scanf("%d", &nine[i]);
		
		if (total < nine[i]) {
			total = nine[i];
			rjsk = i;
		}
	}
	
	printf("%d\n",total);
	printf("%d\n", rjsk+1);

	return 0;
}
