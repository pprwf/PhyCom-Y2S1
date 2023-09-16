#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char txt[2000];
    int check = 0;
    scanf("%[^\n]s", txt);
    for (int i = 0; i < strlen(txt); i ++) {
        txt[i] = tolower(txt[i]);
    }
    for (int i = 0; i < strlen(txt) - 2; i ++) {
        if (txt[i] == 'c' && txt[i + 1] == 'a' && txt[i + 2] == 't') {
            if (check == 1) {
                printf(", ");
            }
            printf("%d", i);
            check = 1;
        }
    }
}
