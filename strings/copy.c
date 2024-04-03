#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[10];

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    // strcpy(str2, str1);
    strncpy(str2, str1, strlen(str1));

    // int i = 0;
    // while (str1[i] != '\0') {
    //     str2[i] = str1[i];
    //     i++;
    // }
    //
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}
