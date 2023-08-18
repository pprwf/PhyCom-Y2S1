#include <stdio.h>

int main() {
    char input[5];
    scanf("%s", &input);
    printf("%-81.1s", input);
    printf("%-81.2s", input);
    printf("%-81.3s", input);
    printf("%-81.4s", input);
    printf("%s", input);
}
