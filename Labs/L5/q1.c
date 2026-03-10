#include <stdio.h>

int main() {

    int counter = 1;
    double miles_driven;
    double gas_used;
    double total_miles_driven = 0;
    double total_gas_used = 0;
    char choice;

    while (1) { // <-- ∞ loop

        puts("===");
        printf("TRIP %d\n", counter);

        printf("Miles Driven: ");

        if (scanf("%lf", &miles_driven) != 1) {
            puts("ERROR: invalid input.");
            puts("Exiting...");
            return 0;
        }

        if (miles_driven <= 0) {
            puts("ERROR: input must be > 0");
            puts("Exiting...");
            return 0;
        }

        total_miles_driven += miles_driven;

        printf("Gas Used: ");

        if (scanf("%lf", &gas_used) != 1) {
            puts("ERROR: invalid input.");
            puts("Exiting...");
            return 0;
        }

        if (gas_used <= 0) {
            puts("ERROR: input must be > 0");
            puts("Exiting...");
            return 0;
        }

        total_gas_used += gas_used;

        putchar('\n'); // vertical padding
        printf("TRIP %d MPG ≈ %.2lf\n", counter, miles_driven/gas_used);
        putchar('\n'); // vertical padding

        do {

            printf("Add another trip? (y/n): ");

            if (scanf(" %c", &choice) != 1) { // <-- notice the ' ' before %c
                puts("ERROR: invalid input.");
                putchar('\n'); // vertical padding
                continue;
            }

            if (choice == 'y' || choice == 'Y') break;

            if (choice == 'n' || choice == 'N') {
                puts("===");
                goto done; // <-- escape inner and outer loop
            }

            puts("ERROR: invalid input.");

        } while (1); // <-- ∞ loop

        counter++;
        puts("===");
        putchar('\n'); // vertical padding
    }

done: // <-- jump here from `goto done`

    printf("TOTAL MPG ≈ %.2lf\n", total_miles_driven/total_gas_used);

    return 0;
}