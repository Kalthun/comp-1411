#include <stdio.h>

void sum() {

    puts("Enter Numbers to add to the sum.");
    puts("Enter 0 to quit.");

    double sum = 0.0;
    double input;

    while (1) { // <-- ∞ loop

        printf("Current Sum: %lf\n", sum);
        printf("Number? ");

        if (scanf("%lf", &input) != 1) {
            puts("ERROR: invalid input.");
            break;
        }

        if (input == 0) {
            printf("Total sum = %lf\n", sum);
            break;
        }

        sum += input;
    }
}

int main() {

    sum();

    return 0;
}