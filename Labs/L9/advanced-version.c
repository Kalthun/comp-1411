#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
#include "library.h" // <-- custom functions

#define MAX_ARRAY_SIZE 20

int load(int array[MAX_ARRAY_SIZE]) {

    int temp_array[MAX_ARRAY_SIZE]; // <-- don't copy unless load is successful
    int index = 0;
    int input;

    puts("Input a sequence of non-negative integers followed by \"-1\":");

    while (1) { // <-- ∞ loop

        if (scanf("%9d", &input) != 1) { // <-- at most 9 digits
            puts("ERROR: invalid input.");
            return -1;
        }

        if (digit_next()) { // <-- too many digits
            puts("ERROR: input is longer than 9 digits.");
            return -1;
        }

        if (input < 0 && input != -1) {
            puts("ERROR: input must be non-negative or -1.");
            return -1;
        }

        if (input == -1) {
            memcpy(array, temp_array, index * sizeof(int)); // <-- now we copy
            if (index == MAX_ARRAY_SIZE) puts("WARNING: MAX_ARRAY_SIZE reached.");
            return index;
        }

        if (index < MAX_ARRAY_SIZE) {
            temp_array[index] = input;
            index++;
        }

        if (newline_next()) break; // <-- hit '\n' before finding a -1
    }

    puts("ERROR: sequence does not contain -1.");
    return -1;
}

int fill(int x_array[MAX_ARRAY_SIZE], int y_array[MAX_ARRAY_SIZE]) {

    puts("Loading x...");
    int x_length = load(x_array);

    if (x_length == -1) {
        puts("ERROR: x array wasn't loaded.");
        return -1;
    }
    puts("x has been loaded.");

    putchar('\n');

    puts("Loading y...");
    int y_length = load(y_array);

    if (y_length == -1) {
        puts("ERROR: y array wasn't loaded.");
        return -1;
    }
    puts("y has been loaded.");

    if (x_length == y_length) return x_length;

    putchar('\n');

    puts("ERROR: arrays were not initialized to the same size.");
    return -1;
}

void display(const int* x_array, const int* y_array, const int* z_array, const int length) {

    const int x_padding = max_padding(x_array, length);
    const int y_padding = max_padding(y_array, length);
    const int z_padding = max_padding(z_array, length);

    // Top of table
    display_helper("┌", "┬", "┐", x_padding, y_padding, z_padding);
    printf("│ %*c │ %*c │ %*c │\n", x_padding, 'x', y_padding, 'y', z_padding, 'z');
    display_helper("├", "┼", "┤", x_padding, y_padding, z_padding);

    for (int i = 0; i < length; i++) {

        // Value row
        printf("│ %*d │ %*d │ %*d │\n", x_padding, x_array[i], y_padding, y_array[i], z_padding, z_array[i]);

        if (i < length - 1) { // <-- not last row

            // Middle of table
            display_helper("├", "┼", "┤", x_padding, y_padding, z_padding);
        }
    }

    // Bottom of table
    display_helper("└", "┴", "┘", x_padding, y_padding, z_padding);

    putchar('\n');

    int sum = 0;

    for (int i = 0; i < length; i++) {

        if (z_array[i] > INT_MAX - sum) {
            puts("ERROR: summation overflow.");
            return;
        }

        sum += z_array[i];
    }

    printf("√∑z = √%d ≃ %lf\n", sum, sqrt(sum));
}

int main() {

    int x[MAX_ARRAY_SIZE] = {0};
    int y[MAX_ARRAY_SIZE] = {0};
    int z[MAX_ARRAY_SIZE] = {0};

    int length = fill(x,y);

    if (length == -1) {
        puts("ERROR: invalid length.");
        return 1;
    }

    putchar('\n');

    for (int i = 0; i < length; i++) {

        if (x[i] != 0 && y[i] > INT_MAX / x[i]) {
            puts("ERROR: multiplication overflow.");
            return 1;
        }

        z[i] = x[i] * y[i];
    }

    display(x,y,z,length);

    return 0;
}