#include <stdio.h>

// int main(void) {
//     int value;
//     printf("Enter an integer: ");
//     scanf("%d", &value);
//     printf("You entered: %d\n", value);
//
//     return 0;
// }
//

int main(void) {
    char name[20];
    printf("Enter your name: ");

    // note that we don't need the & operator here because name is already a
    // pointer another issue is that scanf will only read up to the first
    // whitespace character
    scanf("%s", name);

    // but we can use fgets to read the entire line
    // here the issue is that fgets will also read the newline character
    fgets(name, 20, stdin);
    printf("Hello, %s!\n", name);

    return 0;
}
