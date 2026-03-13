#include <stdio.h>
#include <string.h>

int main() {

    char ID[11]; // extra space for `\0` (10 + 1)
    printf("Input Employee's ID (MAX 10 characters): ");

    if (fgets(ID, 11, stdin) == NULL) { // same as above (10 + 1)
        puts("ERROR: unable to read sequence from stdin.");
        return -1;
    }

    if (strlen(ID) == 10) while (getchar() != '\n'); // clear remaining input buffer
    else ID[strcspn(ID, "\n")] = '\0';

    double total_hours_worked;
    printf("Input Total Hours Worked: ");
    if (scanf("%lf", &total_hours_worked) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    double hourly_wage;
    printf("Input Hourly Wage: ");
    if (scanf("%lf", &hourly_wage) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    putchar('\n');

    printf("Employee ID = %s\n", ID);
    printf("Salary = $%.2lf\n", total_hours_worked * hourly_wage);

    return 0;
}
