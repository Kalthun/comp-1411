#include <stdio.h>

int main() {

    char ID[11]; // extra space for `\0` (10 + 1)
    double total_hours_worked;
    double hourly_wage;

    printf("Input Employee's ID (MAX 10 characters): ");
    fgets(ID, 11, stdin); // same as above (10 + 1)
    while (getchar() != '\n'); // clear remaining input buffer

    printf("Input Total Hours Worked: ");
    if (scanf("%lf", &total_hours_worked); != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    printf("Input Hourly Wage: ");
    if (scanf("%lf", &hourly_wage)) {
        puts("ERROR: invalid input.");
        return 1;
    }

    printf("Employee ID = %s\n", ID);
    printf("Salary = $%.2lf\n", total_hours_worked * hourly_wage);

    return 0;
}