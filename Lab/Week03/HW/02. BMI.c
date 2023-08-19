#include <stdio.h>
#include <math.h>

int main () {
    float height, weight;
    scanf("%f %f", &height, &weight);
    printf("%f", weight / ((height / 100) * (height / 100)));
}
