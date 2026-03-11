#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {

    // Handle negative values
    a = abs(a);
    b = abs(b);

    // BASE CASE
    if (b == 0) return a;

    // RECURSIVE CASE
    return gcd(b, a % b);
}

int main() {

    puts("===Test 1===");
    printf("gcd(%d,%d) => %d\n", 6, 15, gcd(6,15));

    putchar('\n');

    puts("===Test 2===");
    printf("gcd(%d,%d) => %d\n", 15, 22, gcd(15,22));

    return 0;
}