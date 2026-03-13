#include <stdio.h>

int main() {

    int coupon_count;
    printf("Input # of tickets: ");
    if (scanf("%d", &coupon_count) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    if (coupon_count < 0) {
        puts("ERROR: # of coupons must be >= 0.");
        return 1;
    }

    putchar('\n');

    printf("# of candy bars = %d\n", coupon_count / 10);
    printf("# of gumballs = %d\n", coupon_count % 10 / 3);

    return 0;
}
