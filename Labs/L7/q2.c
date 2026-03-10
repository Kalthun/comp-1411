#include <stdio.h>
#include <stdbool.h>

bool isVowel(char c) {

    switch (c) {

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;

        default:
            return false;
    }
}

int main() {

    // Load the input stream
    puts("Input a sequence of characters:");

    int count = 0;
    char input;

    while (1) { // <-- ∞ loop

        if (scanf("%c", &input) != 1) {
            puts("ERROR: invalid input.");
            puts("Exiting...");
            break;
        }

        if (input == '\n') break;

        if (isVowel(input)) count++;
    }

    printf("# of vowels = %d\n", count);

    return 0;
}