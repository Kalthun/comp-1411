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

    int count = 0;
    char input;

    puts("Input a sequence of characters:");

    while (1) { // <-- ∞ loop

        if (scanf("%c", &input) != 1) {
            puts("ERROR: invalid input.");
            return 1;
        }

        if (input == '\n') break;

        if (isVowel(input)) count++;
    }

    putchar('\n');

    printf("# of vowels = %d\n", count);

    return 0;
}
