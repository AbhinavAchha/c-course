
#include <string.h>
struct student {
    char name[30];
    int age;
} student1;

int main() {
    struct student student2;
    strcpy(student1.name, "John");
}
