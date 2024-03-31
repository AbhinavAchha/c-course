#include <stdio.h>
#include <stdlib.h>

int main() {
    long int *p = malloc(3 * sizeof(long));

    if (p == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    printf("Value of p: %ld\n", *p);
    return 0;
}
