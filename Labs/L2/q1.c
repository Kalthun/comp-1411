#include <stdio.h>

int main() {

    printf("%s\n", "1 2 3 4");

    putchar('\n'); // vertical padding

    printf("%d %d %d %d\n", 1, 2, 3, 4);

    putchar('\n'); // vertical padding

    printf("1 ");
    printf("2 ");
    printf("3 ");
    printf("4\n");

    return 0;
}