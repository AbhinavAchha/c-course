#include <stdio.h>

int main() {
    long value;
    printf("Enter an integer: ");
    scanf("%ld", &value);
    printf("You entered: %ld\n", value);

    switch (value) { // value must be an integer or a character
    case 1:
        printf("You entered 1\n");
        break;
    case 2:
        printf("You entered 2\n");
        break;
    case 3:
        printf("You entered 3\n");
        break;
    default:
        printf("You entered something else\n");
        break;
    }

    return 0;
}
