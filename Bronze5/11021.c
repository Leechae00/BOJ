#include <stdio.h>

int main(void) {
    int T = 0;
    int a = 0;
    int b = 0;
    int i;

    scanf("%d", &T);
    for (i = 1; i <= T; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);
    }
    return 0;
}