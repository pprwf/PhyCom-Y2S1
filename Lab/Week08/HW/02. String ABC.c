#include <stdio.h>
#include <string.h>

int main () {
    char txt[200];
    scanf("%s", txt);
    for (int i = 0; i < strlen(txt) - 1; i ++) {
        for (int j = i; j < strlen(txt); j ++) {
            if (txt[i] > txt[j]) {
                char temp = txt[i];
                txt[i] = txt[j];
                txt[j] = temp;
            }
        }
    }
    printf("%s", txt);
}
