#include <stdio.h>

int main(void) {
    int value;

    printf("Enter an integer: ");
    scanf("%d", &value);

    float value_as_float = (float)value;
    double value_as_double = (double)value;

    printf("You entered: %d\n", value);
    printf("As a float: %f\n", value_as_float);
    printf("As a double: %lf\n", value_as_double);
    return 0;
}
