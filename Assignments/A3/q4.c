#include <stdio.h>
#include <math.h>

double compute_bmr(double weight) {
    return 70 * pow((weight / 2.2), 0.756);
}

double compute_pa(double intensity, double weight, double minutes) {
    return 0.0385 * intensity * weight * minutes;
}

int main() {

    double weight;
    printf("Weight (lbs): ");
    if (scanf("%lf", &weight) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    if (weight <= 0) {
        puts("ERROR: invalid weight.");
        return -1;
    }

    double intensity;
    printf("Intensity: ");
    if (scanf("%lf", &intensity) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    if (intensity < 0) {
        puts("ERROR: invalid intensity.");
        return -1;
    }

    double minutes;
    printf("Minutes: ");
    if (scanf("%lf", &minutes) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    if (minutes < 0) {
        puts("ERROR: invalid minutes.");
        return -1;
    }

    double calories_per_serving;
    printf("Calories/Serving: ");
    if (scanf("%lf", &calories_per_serving) != 1) {
        puts("ERROR: invalid input.");
        return -1;
    }

    if (calories_per_serving <= 0) {
        puts("ERROR: invalid calories per serving.");
        return -1;
    }

    putchar('\n');

    double bmr = compute_bmr(weight);
    double pa = compute_pa(intensity, weight, minutes);
    double calories_consumed = (bmr + pa) / 0.9;
    double servings = calories_consumed / calories_per_serving;

    printf("# of servings = %.2lf\n", servings);

    return 0;
}
