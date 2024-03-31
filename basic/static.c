#include <stdio.h>

int static_func() {
    static int x = 0;

    return x++;
}

int main() {

    for (int i = 0; i < 10; i++) {
        int t = static_func();
        printf("%d\n", t);
    }
    return 0;
}
