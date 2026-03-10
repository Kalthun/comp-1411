#include <stdio.h>

int main() {

    int a;
    int b;
    int c;

    // Load the input stream
    puts("Input a sequence of 3 positive integers:");
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c) {
        puts("equilateral");
    } else if (a != b && a != c && b != c) {
        puts("scalene");
    } else {
        puts("isosceles");
    }

    return 0;
}