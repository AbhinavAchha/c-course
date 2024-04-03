#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

int main() {
    char str[] = "Name;18;Location;0";

    char name[10];
    unsigned short age;
    char location[10];
    unsigned short has_degree;

    // char *token = strtok(str, ";");
    // strcpy(name, token);
    //
    // token = strtok(NULL, ";");
    // age = atoi(token);
    //
    // token = strtok(NULL, ";");
    // strcpy(location, token);
    //
    // token = strtok(NULL, ";");
    // has_degree = atoi(token);
    //

    sscanf(str, "%[^;];%hu;%[^;];%hu", name, &age, location, &has_degree);

    printf("Name is %s, age is %d, location is %s, has degree is %d\n", name, age, location, has_degree);
    return 0;
}
