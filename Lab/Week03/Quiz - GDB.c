#include <stdio.h>

int main() {
    int a = 17, b = 25, c = 50, d = 10;

    b += a++;	
    b  += ++a;

    return 0;
}
