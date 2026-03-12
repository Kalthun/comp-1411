#include <stdio.h>

int main() {

    double length;
    printf("Input picture length (in inches): ");
    if (scanf("%lf", &length) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    double width;
    printf("Input picture width (in inches): ");
    if (scanf("%lf", &width) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    int frame;
    printf("Input frame type (0 = Regular, 1 = Fancy): ");
    if (scanf("%d", &frame) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    int color;
    printf("Input color (0 = White, 1 = Custom): ");
    if (scanf("%d", &color) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    int crown_count;
    printf("Input # of crowns: ");
    if (scanf("%d", &crown_count) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    putchar('\n');

    double perimeter = 2 * (length + width);
    double area = length * width;
    double frame_cost = (frame == 0) ? perimeter * 0.15 : perimeter * 0.25;
    double color_cost = perimeter * 0.10;;
    double glass_cost = area * 0.07;
    double backing_cost = area * 0.02;
    double crown_cost = crown_count * 0.35;
    double total = frame_cost + color_cost + glass_cost + backing_cost + crown_cost;

    printf("Total framing cost: $%.2f\n", total);

    return 0;
}