#include <stdio.h>

int main () {
    char first, second, third, forth, fifth;
    scanf("%c %c %c %c %c", &first, &second, &third, &forth, &fifth);
    printf("%c\n%c\n%c\n%c\n%c", first + 1, second, third + 1, forth, fifth + 1);
}
