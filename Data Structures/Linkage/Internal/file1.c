#include <stdio.h>

extern int localVar; // Error! The internal localVar is not visible in file2.c

int main()
{
    printf("Local variable from file1.c: %d\n", localVar); // Error! localVar is not visible here
    return 0;
}

// gcc -o intern file1.c file2.c