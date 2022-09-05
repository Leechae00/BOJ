#include<stdio.h>
int main(void) {
	int top = 0;
	int mid = 0;
	int bottom = 0;
	int coke = 0;
	int cider = 0;
	int res = 0;

	scanf("%d", &top);
	scanf("%d", &mid);
	scanf("%d", &bottom);
	scanf("%d", &coke);
	scanf("%d", &cider);

	if ((top < mid)&&(top < bottom)) {
		res += top;
	}
	else if ((mid < top) && (mid < bottom)) {
		res +=mid;
	}
	else  
		res += bottom;
	

	if (coke > cider) {
		res += cider;
	}
	else
		res += coke;

	printf("%d", res - 50);
	return 0;
}
