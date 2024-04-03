#include <stdio.h>
#include <string.h>

int main() {

    char str1[] = "ha";
    char str2[] = "1e";

    printf("%d\n", *str1);
    printf("%d\n", *str2);
    printf("%d\n", strcmp(str2, str1));
    return 0;
}
