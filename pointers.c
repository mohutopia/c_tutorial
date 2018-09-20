#include <stdio.h>
#include <stdlib.h>

// a pointer is a type of data
// a pointer is a memory adress
// we create a pointer variable using the data type of the variable whose adress we're storing

int main(){
    int age = 23;
    int * pAge = &age;

    double gpa = 3.1;
    double * pGpa = &gpa;

    char grade = 'A';
    char * pGrade = &grade;

    printf("%p", pAge);

    // derefencing pointers
    // it's like going to the memory location of the pointer and getting the value stored
    printf("%d", *pAge);

    return 0;
}
