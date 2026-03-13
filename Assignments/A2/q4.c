#include <stdio.h>

int main() {

    char vehicle_type;
    printf("Type of vehicle? ");
    if (scanf("%c", &vehicle_type) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    if (vehicle_type != 'C' && vehicle_type != 'T' && vehicle_type != 'B') {
        puts("ERROR: invalid vehicle type.");
        return -1;
    }

    int hour_entered;
    printf("Hour vehicle entered lot (0 - 23)? ");
    if (scanf("%d", &hour_entered) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    if (hour_entered < 0 || hour_entered > 23) {
        puts("ERROR: invalid hour.");
        return -1;
    }

    int minute_entered;
    printf("Minute vehicle entered lot (0 - 59)? ");
    if (scanf("%d", &minute_entered) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    if (minute_entered < 0 || minute_entered > 59) {
        puts("ERROR: invalid minute.");
        return -1;
    }

    int hour_left;
    printf("Hour vehicle left lot (0 - 23)? ");
    if (scanf("%d", &hour_left) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    if (hour_left < 0 || hour_left > 23) {
        puts("ERROR: invalid hour.");
        return -1;
    }

    int minute_left;
    printf("Minute vehicle left lot (0 - 59)? ");
    if (scanf("%d", &minute_left) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    if (minute_left < 0 || minute_left > 59) {
        puts("ERROR: invalid minute.");
        return -1;
    }

    putchar('\n');

    int total_minutes = minute_left - minute_entered;
    int total_hours = hour_left - hour_entered;

    if (total_minutes < 0) {
        total_minutes += 60;
        total_hours -= 1;
    }

    if (total_hours < 0) total_hours += 24;

    int rounded_hours = (total_minutes > 0) ? total_hours + 1 : total_hours;

    char* vehicle_name;
    double total_charges = 0.0;

    switch (vehicle_type) {

        case 'C':
            vehicle_name = "Car";
            if (rounded_hours <= 3) total_charges = 0.0;
            else total_charges = (rounded_hours - 3) * 1.5;
            break;

        case 'T':
            vehicle_name = "Truck";
            if (rounded_hours <= 2) total_charges = rounded_hours * 1.0;
            else total_charges = 2 * 1.0 + (rounded_hours - 2) * 2.3;
            break;

        case 'B':
            vehicle_name = "Bus";
            if (rounded_hours <= 1) total_charges = rounded_hours * 2.0;
            else total_charges = 1 * 2.0 + (rounded_hours - 1) * 3.7;
            break;
    }

    puts("PARKING LOT CHARGES");
    puts("===================");
    printf("Vehicle Type: %s\n", vehicle_name);
    printf("TIME-IN:  %02d:%02d\n", hour_entered, minute_entered);
    printf("TIME-OUT: %02d:%02d\n", hour_left, minute_left);
    puts("===================");
    printf("Parking Time: %02d:%02d\n", total_hours, total_minutes);
    printf("Rounded Time:    %02d\n", rounded_hours);
    puts("===================");
    printf("TOTAL COST: $%.2lf\n", total_charges);

    return 0;
}
