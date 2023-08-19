#include <stdio.h>

int main () {
    double price, percent, amount;
    scanf("%lf %lf %lf", &price, &percent, &amount);
    printf("%.2lf", (price - price * percent / 100) * amount);
}
