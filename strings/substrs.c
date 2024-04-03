#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a sample string";
    char to_find[] = "sample";

    char *r = strstr(str, to_find);
    if (r != NULL) {
        printf("%s\n", r);
        printf("'%s' found in '%s'\n", to_find, str);
    } else {
        printf("'%s' not found in '%s'\n", to_find, str);
    }

    return 0;
}
