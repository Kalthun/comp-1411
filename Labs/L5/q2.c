#include <stdio.h>

int main() {

    int line_count = 10;

    while (line_count > 0) (line_count-- % 2 == 0) ? puts("****") : puts("++++++++"); // <-- notice the trick?

    return 0;
}
