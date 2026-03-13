#include <stdio.h>

void print_stars(int rows) {

    for (int i = 0; i < rows; i++) {

        for (int s = 0; s < rows - i - 1; s++) putchar(' ');

        for (int j = 0; j < 2*i + 1; j++) putchar((j == 0 || j == 2*i || i == rows - 1) ? '*' : ' ');

        putchar('\n');
    }
}

void print_letters(int rows) {

    for (int i = 0; i < rows; i++) {

        for (int s = 0; s < rows - i - 1; s++) putchar(' ');

        for (int j = 0; j < 2*i + 1; j++) putchar('A' + j);

        putchar('\n');
    }
}

int main() {

    print_stars(5);

    putchar('\n');

    print_letters(5);

    return 0;
}
