#include <stdio.h>
#include <stdlib.h>

/*
This is part of the Youtube tutorial about the C programming language.
It's for beginners like me, made by freeCodeCamp.org
*/

int main()
{
    printf("   ______________\n");
    printf("  |              |\n");
    printf("  | Hello world! |\n");
    printf("  |______________|\n");

    // create file

    // to write in a file: "w" flag
    FILE * fpointer = fopen("employees.txt", "w");
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");

    // to append: "a" flag
    // FILE * fpointer = fopen("employees.txt", "w");
    // fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");

    // to read a file: "r" flag
    // FILE * fpointer = fopen("employees.txt", "r");

    // int line[255];
    // fgets(line, 255, fpointer);
    // printf("%s", line);

    fclose(fpointer);
    return 0;
}
