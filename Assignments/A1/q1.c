#include <stdio.h>

int main() {

    char input_char;
    printf("Input a character: ");
    if (scanf("%c", &input_char) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    int input_int;
    printf("Input an integer: ");
    if (scanf("%d", &input_int) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    float input_float;
    printf("Input a float: ");
    if (scanf("%f", &input_float) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    putchar('\n'); // vertical padding

    printf("char (%%c): %c\n", input_char);
    printf("char (%%d): %d\n", input_char);
    printf("int: %d\n", input_int);
    printf("float: %f\n", input_float);

    return 0;
}