#include <stdio.h>
#include <string.h>

int main () {
    char txt[100];
    scanf("%s", txt);
    int num = strlen(txt), check = 0;
    for (int i = 0; i < num; i ++) {
        int new = strlen(txt);
        for (int j = 0; j < new - 1; j ++) {
            if (txt[j] == txt[j + 1]) {
                char dup[3] = {txt[j], txt[j], '\0'};
                char *cat = strstr(txt, dup) + 2;
                txt[j] = '\0';
                strcpy(txt, strcat(txt, cat));
                check ++;
            }
        }
        if (check == 0) {
            return 0;
        }
        printf("%s\n", txt);
        check = 0;
    }
}
