#include <stdio.h>

int main() {

    int marks[] = {100,80,60,40,20};

    int *ip1, *ip2, *ip3;

    // ip1 takes address marks [0]
    ip1 = marks ;
    printf(" %d \n",*ip1);

    // ip2 takes address marks[1]
    ip2 = ip1+1;
    printf(" %d\n",*ip2);

    // ip3 takes address marks[2]
    ip3 = ip2+1;
    printf(" %d\n",*ip3);

    // ip2 takes address marks[3]
    ip2 = ip3+1;
    printf(" %d\n",*ip2);

    // ip3 takes address marks[4]
    ip3 = ip2+1;
    printf(" %d\n",*ip3);

    // ip3 takes address marks[1]
    ip3 = ip1+1;
    printf(" %d\n",*ip3);

    return 0;
}
