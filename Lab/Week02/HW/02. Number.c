#include <stdio.h>

int main() {
    char input[5];
    scanf("%s", &input);
    printf("%s%.2s", input + 2, input);
}
