// SEE `advanced-version.c` BEFORE LOOKING AT THIS

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// Calculate number of digits in a number
int digits(int number) {

    if (number == 0) return 1;

    int counter = 0;

    while (number > 0) {
        number /= 10;
        counter++;
    }

    return counter;
}

// Calculate the amount of padding needed in a given array
int max_padding(const int* array, int length) {

    int max_digits = -1;

    for (int i = 0; i < length; i++) if (max_digits < digits(array[i])) max_digits = digits(array[i]);

    return max_digits;
}

// Checks the input stream to see if the next character is a digit
bool digit_next() {
    char next = getchar();
    ungetc(next, stdin);
    return isdigit(next);
}

// Checks the input stream to see if the next non-space character is '\n'
bool newline_next() {

    int temp;

    // Loop until we hit a non-space character
    do { temp = getchar(); } while (temp == ' ' || temp == '\t');

    // Break loop if we hit newline
    if (temp == '\n') return true;

    // Otherwise undo changes to input stream
    ungetc(temp, stdin);

    return false;
}

// Helps print the fancy characters
void display_helper(const char *left, const char *middle, const char *right, int x_padding, int y_padding, int z_padding) {

    printf("%s─", left);
    for (int i = 0; i < x_padding; i++) printf("─");
    printf("─%s─", middle);
    for (int i = 0; i < y_padding; i++) printf("─");
    printf("─%s─", middle);
    for (int i = 0; i < z_padding; i++) printf("─");
    printf("─%s\n", right);
}