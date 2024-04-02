#include <stdarg.h>
#include <stdio.h>

// the first argument is the number of arguments to be passed in the variadic
// function.
void print_vals(int count, ...) {
    va_list args;

    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int v = va_arg(args, int);
        printf("%d\n", v);
    }

    va_end(args);
}

void print_chars(const char *p, ...) {
    va_list args;

    va_start(args, p);

    while (*p) {
        if (*p == 'd') {
            int v = va_arg(args, int);
            printf("%d\n", v);
        } else if (*p == 'f') {
            double d = va_arg(args, double);
            printf("%f\n", d);
        }

        p++;
    }

    va_end(args);
}

int main() {
    print_vals(10, 2, 3, 4, 5);
    print_chars("d", 1, 2, 3, "f", 1.22, 3.12, 4.44);
    return 0;
}
