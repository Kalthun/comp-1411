#include <stdio.h>
#include <math.h>

#define MAX_ARRAY_SIZE 20

int fill(int x[MAX_ARRAY_SIZE], int y[MAX_ARRAY_SIZE]) {

    int input;

    int x_length;
    puts("Input a sequence of non-negative integers followed by \"-1\":");

    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {

        scanf("%d", &input);

        x_length = i;

        if (input == -1) break;

        x[i] = input;
    }


    int y_length;
    puts("Input a sequence of non-negative integers followed by \"-1\":");

    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {

        scanf("%d", &input);

        y_length = i;

        if (input == -1) break;

        y[i] = input;
    }

    if (x_length == y_length) return x_length;

    return -1;
}

void display(const int* x_array, const int* y_array, const int* z_array, int length) {

    printf("│ %7s │ %7s │ %7s │\n", "x", "y", "z");

    for (int i = 0; i < length; i++) printf("│ %7d │ %7d │ %7d │\n", x_array[i], y_array[i], z_array[i]);

    putchar('\n');

    int sum = 0;

    for (int i = 0; i < length; i++) sum += z_array[i];

    printf("√∑z = √%d ≃ %lf\n", sum, sqrt(sum));
}

int main() {

    int x[MAX_ARRAY_SIZE] = {0};
    int y[MAX_ARRAY_SIZE] = {0};
    int z[MAX_ARRAY_SIZE] = {0};

    int length = fill(x,y);

    if (length == -1) return 1;

    for (int i = 0; i < length; i++) z[i] = x[i] * y[i];

    printf("len = %d\n", length);

    display(x,y,z,length);

    return 0;
}
