#include <stdio.h>

int main() {

    int coupons;
    printf("Input # of tickets: ");
    if (scanf("%d", &coupons) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    if (coupons < 1) {
        puts("ERROR: # of coupons must be > 0.");
        return 1;
    }

    putchar('\n'); // vertical padding

    printf("# of candy bars = %d\n", coupons / 10);
    printf("# of gumballs = %d\n", coupons % 10 / 3);

    return 0;
}