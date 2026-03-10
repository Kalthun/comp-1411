#include <stdio.h>

int main() {

    int a;
    printf("Input a number: ");
    scanf("%d", &a);

    int b;
    printf("Input another number: ");
    scanf("%d", &b);

    putchar('\n'); // vertical padding

    printf("SUM: %d + %d = %d\n", a, b, a + b);
    printf("PRODUCT: %d * %d = %d\n", a, b, a * b);
    printf("DIFFERENCE: %d - %d = %d\n", a, b, a - b);
    printf("QUOTIENT: %d / %d = %d\n", a, b, a / b);
    printf("REMAINDER: %d %% %d = %d\n", a, b, a % b);

    return 0;
}