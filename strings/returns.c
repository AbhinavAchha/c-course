#include <stdio.h>
#include <string.h>

char *get_string_literal() {
    //
    return "Hello";
}

char *get_string_array() {
    char str[] = "Hello";
    return str;
}

char *get_string_heap() {
    char *str = "Hello";
    return str;
}

void get_char(char *str) { strcpy(str, "Hello"); }

int main() {
    // char *str1 = get_string_literal();
    // char *str1 = get_string_heap();
    char str1[1];
    get_char(str1);
    str1[0] = 'h';

    printf("%s\n", str1);
    return 0;
}
