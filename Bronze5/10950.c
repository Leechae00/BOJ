#include <stdio.h>

int main(void)
{
	int X = 0;
	int A = 0;
	int B = 0;
	int young = 0;

	scanf("%d", &X);

	while (young < X)
	{
		scanf("%d %d", &A ,&B);
		young++;
		printf("%d\n", A + B);
	}
	
	return 0;
}