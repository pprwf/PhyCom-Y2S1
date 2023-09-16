#include <stdio.h>

int main () {
    int num, num2;
    scanf("%d %d", &num, &num2);
    if (num == num2) {
        printf("%d + %d = %d", num, num2, (num + num2));
    }
    else {
        printf("%d - %d = %d", num, num2, (num - num2));
    }
}
