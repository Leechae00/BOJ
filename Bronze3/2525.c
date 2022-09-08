#include <stdio.h>

int main(void) {

    int hour = 0;
    int minute = 0;
    int take = 0;
    int save = 0;
    int hoursave = 0;
    int i = 0;
    
    scanf("%d %d", &hour, &minute);
    scanf("%d", &take);

    minute += take;
    for (i = 0; i < 1; i++) {
        if (minute >= 60) {
            hoursave = minute / 60;
            minute = minute - (60 * hoursave);
        }
    }
    hour = hour + hoursave;

    if (hour >= 24) {
        hour = hour -24;
    }
    printf("%d %d", hour, minute);

    return 0;
}