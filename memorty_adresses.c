#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    age = 0;
    
    // %p stands for 'pointer'
    // prints a hexadecimal number
    // it's the memory location that C needs to know what's stored
    printf("%p", &age);
    return 0;
}
