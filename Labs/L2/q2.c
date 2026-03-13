#include <stdio.h>

int main() {

    int a;
    printf("Input a number: ");
    if (scanf("%d", &a) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    int b;
    printf("Input another number: ");
    if (scanf("%d", &b) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    putchar('\n');

    printf("SUM: %d + %d = %d\n", a, b, a + b);
    printf("PRODUCT: %d * %d = %d\n", a, b, a * b);
    printf("DIFFERENCE: %d - %d = %d\n", a, b, a - b);
    printf("QUOTIENT: %d / %d = %d\n", a, b, a / b);
    printf("REMAINDER: %d %% %d = %d\n", a, b, a % b);

    return 0;
}
