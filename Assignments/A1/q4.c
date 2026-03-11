#include <stdio.h>

int main() {

    int seconds;
    printf("Input # of seconds: ");
    if (scanf("%d", &seconds) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    if (seconds < 0) {
        puts("ERROR: # of seconds must be >= 0.");
        return 1;
    }

    putchar('\n'); // vertical padding

    printf("%d => %dh:%dm:%ds\n", seconds, seconds / 3600, seconds % 3600 / 60, seconds % 60);

    return 0;
}