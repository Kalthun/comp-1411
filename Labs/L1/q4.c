// Given Snippet
/*
1 | #include <stdio.h>
2 | void (main) void
3 | Printf(‘As you program more, you will’);
4 | printf {“realize that you are spending a\n
5 | “considerable amount of time
6 | debugging programs.\n”);
7 | printf(“You will be able to do it”
8 | “more quickly as you”
9 | “get more experience.”);
*/

// Corrected Version
#include <stdio.h>

int main() {

    printf("As you program more, you will\n");
    printf("realize that you are spending a\n"
        "considerable amount of time\ndebugging programs.\n");
    printf("You will be able to do it\n"
        "more quickly as you\n"
        "get more experienced.\n");

    return 0;
}

// Output
/*
```
As you program more, you will
realize that you are spending a
considerable amount of time
debugging programs.
You will be able to do it
more quickly as you
get more experienced.
```
*/
