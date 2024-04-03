#include <string.h>

typedef struct student {
    char name[30];
    int age;
} student1;

int main() {
    // struct student student2;
    student1 student2;
    strcpy(student2.name, "John");

    student1 s = {.name = "John", .age = 20};
}
