#include <stdio.h>

void displayPattern(int numOfLines) {

    for (int row = 0; row < numOfLines; row++) {

        // spaces
        for (int space = row; space < numOfLines - 1; space++)
            printf("  ");

        // stars
        for (int star = 0; star < (2 * row + 1); star++)
            printf("* ");

        putchar('\n'); // vertical padding
    }
}

int main() {

    puts("===Test 1===");
    displayPattern(1);

    putchar('\n'); // vertical padding

    puts("===Test 2===");
    displayPattern(4);

    putchar('\n'); // vertical padding

    puts("===Test 3===");
    displayPattern(7);

    putchar('\n'); // vertical padding

    return 0;
}