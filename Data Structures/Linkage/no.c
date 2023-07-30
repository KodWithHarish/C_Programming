#include <stdio.h>

void someFunction()
{
    int localVariable = 100; // No linkage, local to this function
    printf("Local variable: %d\n", localVariable);
}

int main()
{
    someFunction();
    // printf("Local variable: %d\n", localVariable); // Error! localVariable is not visible here
    return 0;
}
