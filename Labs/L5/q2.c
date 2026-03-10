#include <stdio.h>

int main() {

    int lines = 10;

    while (lines > 0) (lines-- % 2 == 0) ? puts("****") : puts("++++++++"); // <-- notice the trick?

    return 0;
}