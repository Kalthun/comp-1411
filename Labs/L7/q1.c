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

    puts("===Test 1===");
    printf("Is 'a' a vowel? %s\n", (isVowel('a')) ? "Yes!" : "No!");

    putchar('\n'); // vertical padding

    puts("===Test 2===");
    printf("Is 'b' a vowel? %s\n", (isVowel('b')) ? "Yes!" : "No!");

    putchar('\n'); // vertical padding

    puts("===Test 3===");
    printf("Is 'c' a vowel? %s\n", (isVowel('c')) ? "Yes!" : "No!");

    return 0;
}