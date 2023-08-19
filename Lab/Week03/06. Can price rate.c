#include <stdio.h>
#include <math.h>

int main () {
    double price, center, height;
    scanf("%lf %lf %lf", &price, &center, &height);
    printf("Volume : %.2lfml\n", height * 3.14159265359 * pow(center / 2, 2));
    printf("Baht/ml : %.4lf", price / (height * 3.14159265359 * pow(center / 2, 2)));
}
