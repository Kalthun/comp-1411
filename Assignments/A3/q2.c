#include <stdio.h>

int main() {

    double balance;
    printf("Loan Amount: ");
    if (scanf("%lf", &balance) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    if (balance <= 0) {
        puts("ERROR: invalid loan amount.");
        return -1;
    }

    double annual_rate;
    printf("Annual Interest Rate (%%): ");
    if (scanf("%lf", &annual_rate) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    if (annual_rate < 0) {
        puts("ERROR: invalid annual interest rate.");
        return -1;
    }

    double monthly_payment;
    printf("Monthly Payment Amount: ");
    if (scanf("%lf", &monthly_payment) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    if (monthly_payment <= 0) {
        puts("ERROR: invalid monthly payment amount.");
        return -1;
    }

    putchar('\n');

    double monthly_rate = annual_rate / 100 / 12;
    int months = 0;

    while (balance > 0) {

        double interest = balance * monthly_rate;
        double principal_payment = monthly_payment - interest;

        if (principal_payment <= 0) {
            printf("WARNING: Monthly payment of $%g is insufficient.\n", monthly_payment);
            return 0;
        }

        balance = balance - principal_payment;
        months++;
    }

    printf("# of months = %d\n", months);

    return 0;
}
