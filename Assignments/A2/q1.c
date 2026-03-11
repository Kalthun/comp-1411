#include <stdio.h>

int main() {

    int cookie_count;
    printf("Input # of cookies: ");
    if (scanf("%d", &cookie_count) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    if (cookie_count < 0) {
        puts("ERROR: # of cookies must be >= 0.");
        return 1;
    }

    int box_capacity;
    printf("Input # of cookies per box: ");
    if (scanf("%d", &box_capacity) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    if (box_capacity < 1) {
        puts("ERROR: box capacity must be > 0.");
        return 1;
    }

    int container_capacity;
    printf("Input # of boxes per container: ");
    if (scanf("%d", &container_capacity) != 1) {
        puts("ERROR: invalid input.");
        return 1;
    }

    if (container_capacity < 1) {
        puts("ERROR: container capacity must be > 0.");
        return 1;
    }

    putchar('\n');

    printf("# of containers = %d\n", cookie_count / box_capacity / container_capacity);
    printf("# of boxes = %d\n", cookie_count / box_capacity);
    printf("# of leftover boxes = %d\n", cookie_count / box_capacity % container_capacity);
    printf("# of leftover cookies = %d\n", cookie_count % box_capacity);

    return 0;
}