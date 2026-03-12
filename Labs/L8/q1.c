#include <stdio.h>

void wreBaW() {

    char input;

    // BREAK CASE
    if (scanf("%c", &input) != 1) {
        puts("ERROR: invalid input.");
        return;
    }

    // BASE CASE
    if (input == '\n') return;

    // RECURSIVE CASE
    wreBaW();
    printf("%c", input); // <-- print AFTER recursive call
}

int main() {

    puts("Input a sequence of characters:");

    wreBaW();

    putchar('\n');

    return 0;
}
