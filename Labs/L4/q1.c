#include <stdio.h>

int main() {

    int a;
    int b;
    int c;

    // Load the input stream
    puts("Input a sequence of 3 integers:");
    if (scanf("%d%d%d", &a, &b, &c) != 3) {
        printf("ERROR: invalid input.");
        return 1;
    }

    if (a == b && b == c) {
        puts("There is 1 unique integer.");
    } else if (a != b && a != c && b != c) {
        puts("There are 3 unique integers.");
    } else {
        puts("There are 2 unique integers.");
    }

    return 0;
}