#include <stdio.h>
#include <math.h>

int main () {
    double d1, d2;
    scanf("%lf%lf", &d1, &d2);
    printf("%.2lf", sqrt(pow(d1, 2) + pow(d2, 2)));
}
