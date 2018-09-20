#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age) {
    printf("Hello %s, you are %d\n", name, age);
}

int main() {
    // arrays and functions
    int numbers[] = {0,1,2,3,4,5,6};
    printf("%d\n", numbers[1]);
    sayHi("Moh", 23);

    return 0;
}
