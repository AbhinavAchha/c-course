#include <stdio.h>

int main() {
    FILE *new_file = fopen("file.txt", "rw");

    if (new_file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(new_file, "Hello, world!\n");

    char data[1024];

    fgets(data, 1024, new_file);

    printf("Data: %s\n", data);

    fclose(new_file);

    return 0;
}
