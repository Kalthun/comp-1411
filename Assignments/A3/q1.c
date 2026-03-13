#include <stdio.h>

int main() {

    int locker_count;
    printf("Enter the number of lockers: ");
    if (scanf("%d", &locker_count) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    putchar('\n');

    int lockers[locker_count]; // <-- can't put `= {}` because of variable size

    for (int i = 0; i < locker_count; i++) lockers[i] = 0; // <-- 0 => "closed"

    for (int student = 1; student <= locker_count; student++)
        for (int locker = student - 1; locker < locker_count; locker += student)
            lockers[locker] ^= 1; // <-- flip between 0 and 1

    puts("Lockers that are opened:");

    int count = 0;

    for (int i = 0; i < locker_count; i++)
        if (lockers[i] == 1) {
            printf("%d ", i + 1);
            count++;
        }

    putchar('\n');

    printf("Number of opened lockers: %d\n", count);

    return 0;
}
