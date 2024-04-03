#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char buf[10];

    for (int i = 0; i < 10; i++) {
        buf[i] = rand() % ('z' - 'a') + 'a';
    }

    printf("The random string is: %s\n", buf);
    return 0;
}
