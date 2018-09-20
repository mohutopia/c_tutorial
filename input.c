#include <stdio.h>
#include <stdlib.h>

int main(){
    // getting user input
    int age;
    double gpa;
    char grade;
    char name[20];

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gpa: ");

    scanf("%lf", &gpa);
    printf("You are %d years old.\n", age);
    printf("Your gpa is %f.\n", gpa);

    printf("Now enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c.", grade);

    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    return 0;
}
