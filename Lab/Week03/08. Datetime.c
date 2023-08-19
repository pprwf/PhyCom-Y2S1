#include <stdio.h>


int main () {
    int time;
    scanf("%d", &time);
    printf("%d s = %d d %d h %d m %d s", time, time / 86400, time % 86400 / 3600, time % 3600 / 60, time % 60);
}
