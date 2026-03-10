#include <stdio.h>

int main() {

    char ID[11]; // extra space for `\0`
    double total_hours_worked;
    double hourly_wage;

    printf("Input Employee's ID (MAX 10 characters): ");
    fgets(ID, 11, stdin); // same as above
    while (getchar() != '\n'); // clear remaining input buffer

    printf("Input Total Hours Worked: ");
    scanf("%lf", &total_hours_worked);

    printf("Input Hourly Wage: ");
    scanf("%lf", &hourly_wage);

    printf("Employee ID = %s\n", ID);
    printf("Salary = $%.2lf\n", total_hours_worked * hourly_wage);

    return 0;
}