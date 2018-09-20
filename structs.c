#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main() {
    struct Student student1;
    strcpy(student1.name, "Moh");
    strcpy(student1.major, "Geology");
    student1.age = 23;
    student1.gpa = 3.2;

    printf("%s is a %s student, who is %d years old and has a gpa score of %f.", student1.name,student1.major,student1.age, student1.gpa);

    return 0;
}
