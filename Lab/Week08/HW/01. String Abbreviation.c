#include <stdio.h>

int main () {
    char name[200], lastname[200];
    scanf("%s %s", name, lastname);
    printf("%c.%c.", name[0], lastname[0]);
}
