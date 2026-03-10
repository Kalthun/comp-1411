#include <stdio.h>

#define PI 3.14159

int main() {

    double radius;
    printf("Input radius: ");
    scanf("%lf", &radius);

    putchar('\n'); // vertical padding

    printf("Diameter = 2r = %lf\n", 2 * radius);
    printf("Circumference = 2πr = %lf\n", 2 * PI * radius);
    printf("Area = πr² = %lf\n", PI * radius * radius);

    return 0;
}