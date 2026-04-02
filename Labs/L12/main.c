#include <stdio.h>

#define SIZE 10

void extend(double* prices, double* quantities, double* amounts) {
    for (int i = 0; i < SIZE; i++) amounts[i] = prices[i] * quantities[i];
}

void display(double* prices, double* quantities, double* amounts) {
    printf("%-10s %-12s %-12s\n", "Price", "Quantity", "Amount");
    printf("------------------------------------\n");
    for (int i = 0; i < SIZE; i++) printf("%-10.2f %-12.2f %-12.2f\n", prices[i], quantities[i], amounts[i]);
    printf("------------------------------------\n");
}

int main() {

    double prices[SIZE]     = { 10.62, 14.89, 13.21, 16.55, 18.62,  9.47, 6.58, 18.32, 12.15, 3.98 };
    double quantities[SIZE] = {  4.00,  8.50,  6.00,  7.35,  9.00, 15.00, 3.00,  5.40,  2.90, 4.80 };
    double amounts[SIZE];

    extend(prices,quantities,amounts);

    display(prices,quantities,amounts);

    return 0;

}
