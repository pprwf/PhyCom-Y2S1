#include <stdio.h>
#include <ctype.h>

int main () {
    int len, size = 0;
    scanf("%d", &len);
    char str[len], ary[len], letter;
    for (int i = 0; i < len; i ++) {
        if (i == len) {
            break;
        }
        scanf(" %c", &letter);
        str[i] = tolower(letter);
    }
    for (int i = 0; i < len; i ++) {
        int dup = 0;
        for (int j = 0; j < size; j ++) {
            if (str[i] == ary[j]) {
                dup = 1;
                break;
            }
        }
        if (!dup) {
            ary[size ++] = str[i];
        }
    }
    for (int i = 0; i < size; i ++) {
        int sum = 0;
        for (int j = 0; j < len; j ++) {
            if (str[j] == ary[i]) {
                sum ++;
            }
        }
        printf("%c: %d\n", ary[i], sum);
    }
}
