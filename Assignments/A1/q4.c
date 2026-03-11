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

    int hours = seconds / 3600;
    int minutes = seconds % 3600 / 60;
    int leftover_seconds = seconds % 60;

    putchar('\n');

    printf("%d => %dh:%dm:%ds\n", seconds, hours, minutes, leftover_seconds);

    return 0;
}