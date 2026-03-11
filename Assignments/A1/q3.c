#include <stdio.h>

#define GRAVITY 32.0

int main() {

    double seconds;
    printf("Input # of seconds: ");
    if (scanf("%lf", &seconds) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    if (seconds < 0) {
        puts("ERROR: # of seconds must be >= 0.");
        return 1;
    }

    putchar('\n');

    printf("distance ≈ %.2lf\n", 0.5 * GRAVITY * seconds * seconds);

    return 0;
}