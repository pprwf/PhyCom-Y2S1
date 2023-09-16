#include <stdio.h>

int main () {
    double least, middle, most;
    scanf("%lf %lf %lf", &least, &middle, &most);
    if (least > middle & least > most) {
        least, most = most, least;
    }
    printf("%.2lf", middle);
}
