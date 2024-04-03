#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a sample string";

    // Split string by space strtok() returns a pointer to the next token or NULL if there are no more tokens The first
    // call to strtok() should have the string as the first argument and the delimiter as the second argument Subsequent
    // calls should have NULL as the first argument and the delimiter as the second argument strtok() modifies the
    // original string so make a copy of the string if you need to keep the original

    char *token = strtok(str, " ");
    char splits[10][10];

    int i = 0;
    while (token != NULL) {
        strcpy(splits[i], token);
        token = strtok(NULL, " ");
        i++;
    }

    for (int j = 0; j < i; j++) {
        printf("%s\n", splits[j]);
    }
    return 0;
}
