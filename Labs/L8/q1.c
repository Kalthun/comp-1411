#include <stdio.h>

void wreBaW() {

    char input;

    // BREAK CASE
    if (scanf("%c", &input) != 1) return;

    // BASE CASE
    if (input == '\n') return;

    // RECURSIVE CASE
    wreBaW();
    printf("%c", input); // <-- print AFTER recursive call
}

int main() {

    // Load the input stream
    puts("Input a sequence of characters:");

    wreBaW();
    putchar('\n'); // fix newline issue

    return 0;
}