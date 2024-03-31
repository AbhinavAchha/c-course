int main() {
    typedef struct {
        char name[30];
        int age;
    } student;

    struct Student {
        char name[30];
        int age;
    } student1;

    typedef struct Student student2;

    typedef struct SS {
        char name[30];
        int age;
    } student3;

    struct SS studentByStruct;

    student studentByTypedef;
}
