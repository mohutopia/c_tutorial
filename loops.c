#include <stdio.h>
#include <stdlib.h>

int main() {
    int index = 1;

    //====================================================================

    printf("While loop's result: ");
    while(index <= 5) {
        printf("%d ", index);
        index++;
    }
    printf("\n");

    //====================================================================

    printf("Do/While loop's result: ");
    do {
        printf("%d ", index);
        index++;
    } while (index <= 5);
    printf("\n");

    //====================================================================

    printf("For loop's result: ");
    for (int i = 0; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    //====================================================================

    return 0;
}
