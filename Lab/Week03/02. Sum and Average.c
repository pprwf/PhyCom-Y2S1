#include <stdio.h>

int main () {
    float f1, f2, f3, f4;
    scanf("%f%f%f%f", &f1, &f2, &f3, &f4);
    printf("Summation is %.2f\n", f1 + f2 + f3 + f4);
    printf("Average is %.3f", (f1 + f2 + f3 + f4) / 4);
}
