#include <stdio.h>

int main () {
    int round, num, insert, insert_num;
    scanf("%d", &round);
    struct linked {
        int value;
        struct linked *pos;
    } list[round];
    for (int i = 0; i < round; i ++) {
        scanf("%d", &num);
        list[i].value = num;
        if (i == round - 1) {
            list[i].pos = 0;
            break;
        }
        list[i].pos = & list[i + 1];
    }
    scanf("%d %d", &insert, &insert_num);
    struct linked new = {insert_num, 0}, *temp = & list[0];
    int i = 0;
    while (temp != 0) {
        if (i + 1 == insert) {
            new.pos = & list[insert];
            list[i].pos = & new;
        }
        printf("%d ", temp -> value);
        temp = temp -> pos;
        i ++;
    }
}
