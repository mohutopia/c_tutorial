#include <stdio.h>
#include <stdlib.h>

int main() {
    // variables
    char characterName[] = "Moh";
    int characterAge = 23;
    printf("My name is %s, and I'm %d years old.\n", characterName, characterAge);

    // data types (primitive)
    int number = 25;
    double average = 33.33;
    char caractere = 'C';

    // built in functions
    printf("Result: %f\n\n", ceil(33.5));
    // there's also ceil() floor() sqrt() pow()...etc

    //constants
    const int JUST_A_NUM = 5;

    return 0;
}
