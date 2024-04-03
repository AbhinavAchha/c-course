#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int x = atoi(argv[1]); // this is a vulnerable function
                           // it does not check for errors
                           // it will return 0 if the string is not a number
                           // it may return 0 if the number is too large

    char *endptr;
    long y = strtoull(argv[1], &endptr, 10); // this is a safer function
                                             // it will return 0 if the string is not a number
                                             // it will return LONG_MIN or LONG_MAX if the number is too large

    if (errno == ERANGE) {
        printf("The number is too large\n");
        return 1;
    }

    if (endptr == argv[1]) {
        printf("The string is not a number\n");
        return 1;
    }

    if (*endptr != '\0') {
        printf("The string contains extra characters\n");
        return 1;
    }

    printf("The integer is %ld\n", y);
    return 0;
}
