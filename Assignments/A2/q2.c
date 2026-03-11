#include <stdio.h>

int main() {

    int x;
    printf("Input x coordinate: ");
    if (scanf("%d", &x) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    int y;
    printf("Input y coordinate: ");
    if (scanf("%d", &y) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    putchar('\n');

    if (x == 0 && y == 0) printf("(0,0) is the origin.\n");
    else if (x == 0) printf("(0,%d) is on the y-axis.\n", y);
    else if (y == 0) printf("(%d,0) is on the x-axis.\n", x);
    else if (x > 0 && y > 0) printf("(%d,%d) is in the first quadrant\n", x, y);
    else if (x < 0 && y > 0) printf("(%d,%d) is in the second quadrant\n", x, y);
    else if (x > 0 && y < 0) printf("(%d,%d) is in the fourth quadrant\n", x, y);
    else printf("(%d,%d) is in the third quadrant\n", x, y);

    return 0;
}