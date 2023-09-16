#include <stdio.h>

int main () {
    int num, total;
    do {
        total += num;
        scanf("%d", &num);
    } while (num != -9);
    printf("%d", total);
}
