#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main() {

    // Initialize largest with "-∞"
    int largest = INT_MIN;

    int input;

    // Load the input stream
    puts("Input a sequence of integers:");

    while (1) { // <-- ∞ loop

        if (scanf("%d", &input) != 1) {
            puts("ERROR: invalid input.");
            return -1;
        }

        if (input > largest) largest = input;

        int temp; // <-- int because getchar() returns int

        // Loop until we hit a non-space character
        do { temp = getchar(); } while (temp == ' ' || temp == '\t');

        // Break loop if we hit newline or End Of File
        if (temp == '\n' || temp == EOF) break;

        // Otherwise undo changes to input stream
        ungetc(temp, stdin);
    }

    printf("The largest integer is: %d\n", largest);

    return 0;
}