#include <stdio.h>

void displayPattern(int numOfLines) {

    for (int row = 0; row < numOfLines; row++) {

        // spaces
        for (int space = row; space < numOfLines - 1; space++) printf("  ");

        // stars
        for (int star = 0; star < (2 * row + 1); star++) printf("* ");

        putchar('\n');
    }
}

int main() {

    puts("===Test 1===");
    displayPattern(1);

    putchar('\n');

    puts("===Test 2===");
    displayPattern(4);

    putchar('\n');

    puts("===Test 3===");
    displayPattern(7);

    return 0;
}
