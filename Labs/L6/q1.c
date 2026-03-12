#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main() {

    int largest = INT_MIN; // <-- initialize with "-∞"
    int input;
    int temp; // <-- int because getchar() returns int

    puts("Input a sequence of integers:");

    while (1) { // <-- ∞ loop

        if (scanf("%d", &input) != 1) {
            puts("ERROR: invalid input.");
            return -1;
        }

        if (input > largest) largest = input;

        // Loop until we hit a non-space character
        do { temp = getchar(); } while (temp == ' ' || temp == '\t');

        // Break loop if we hit newline
        if (temp == '\n') break;

        // Otherwise undo changes to input stream
        ungetc(temp, stdin);
    }

    putchar('\n');

    printf("The largest integer is: %d\n", largest);

    return 0;
}