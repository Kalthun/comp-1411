#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    int b;
    int c;

    puts("Input a sequence of 3 integers:");

    if (scanf("%d%d%d", &a, &b, &c) != 3) {
        puts("ERROR: invalid input.");
        return 1;
    }

    int max_ab = ((a + b) + abs(a - b)) / 2;

    int max_abc = ((max_ab + c) + abs(max_ab - c))/2;

    putchar('\n');

    printf("max(%d,%d,%d) = %d\n", a, b, c, max_abc);

    return 0;
}