// Given snippet
/*
 1 | #include <stdio.h>
 2 | {
 3 |     int sum,
 4 |     void main(void)
 5 |     sum = 0
 6 |     printf("\nThe value of sum is initially set to %d", sum);
 7 |     sum = sum + 90;
 8 |     printf("\n  sum is now %c ", sum);
 9 |     sum = sum + 70   printf("\n  sum is now %d ", sum);
10 |     sum = sum + 80;   printf("\n  sum is now %d ", sum)
11 |     sum = sum + 60;   sum = sum + sum ;
12 |     printf("\n  The final sum is %d ", sum);
13 | }
*/

// Errors
/*
    1.  [2] | move `main` above | `{...}` should be `main`'s scope
    2.  [4] |           replace | `void main(void)` -> `int main(void)`
    3.  [3] |           replace | `int sum,` -> `int sum;`
    4.  [5] | missing semicolon | `sum = 0` -> `sum = 0;`
    5.  [8] |           replace | `%c` -> `%d`
    6.  [9] | missing semicolon | `sum = sum + 70` -> `sum = sum + 70;`
    7. [10] | missing semicolon | `printf(...)` -> `printf(...);`
    8. [11] |            remove | `sum = sum + sum;` is doubling sum
    9.      |    missing return | end main function with `return 0;`
*/

// Corrected Version
#include <stdio.h>
int main(void)
{
    int sum;
    sum = 0;
    printf("\nThe value of sum is initially set to %d", sum);
    sum = sum + 90;
    printf("\n  sum is now %d ", sum);
    sum = sum + 70;   printf("\n  sum is now %d ", sum);
    sum = sum + 80;   printf("\n  sum is now %d ", sum);
    sum = sum + 60;
    printf("\n  The final sum is %d ", sum);
}

// Output
/*
```
The value of sum is initially set to 0
  sum is now 90
  sum is now 160
  sum is now 240
  The final sum is 300
```
*/
