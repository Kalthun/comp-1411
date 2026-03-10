#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main() {

    // Track valid input
    bool found = false;

    // Initialize largest with "-∞"
    int largest = INT_MIN;

    // Load the input stream
    puts("Input a sequence of integers:");

    int input;

    while (1) { // <-- ∞ loop

        if (scanf("%d", &input) != 1) {
            puts("ERROR: invalid input.");
            puts("Exiting...");
            break;
        }

        found = true;

        if (input > largest) largest = input;

        int temp; // <-- int because getchar() returns int

        // Loop until we hit a non-space character
        do { temp = getchar(); } while (temp == ' ' || temp == '\t');

        // Break loop if we hit newline or End Of File
        if (temp == '\n' || temp == EOF) break;

        // Otherwise undo changes to input stream
        ungetc(temp, stdin);
    }

    if (found) printf("The largest integer is: %d\n", largest);
    else puts("ERROR: no valid integers were entered.");

    return 0;
}