#include <stdio.h>
#include <string.h>

int main() {
    char txt[100];
    scanf("%s", txt);
    int num = strlen(txt);

    // A flag to keep track of whether consecutive duplicates were found
    int foundConsecutive = 0;

    do {
        int i = 0;
        foundConsecutive = 0;

        while (i < num) {
            int j = i + 1;

            // Find the length of consecutive duplicates
            while (j < num && txt[j] == txt[i]) {
                j++;
            }

            // If consecutive duplicates were found, remove them
            if (j - i > 1) {
                memmove(&txt[i], &txt[j], num - j + 1);
                num -= (j - i);
                foundConsecutive = 1;
            } else {
                i++;
            }
        }

        if (foundConsecutive) {
            printf("%s\n", txt);
        }

    } while (foundConsecutive);

    return 0;
}
