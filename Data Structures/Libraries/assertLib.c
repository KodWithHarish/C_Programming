#include <stdio.h>
#include <assert.h>

int divide(int a, int b)
{
    assert(b != 0);
    return a / b;
}

int main()
{
    int result = divide(10, 2);
    printf("Result: %d\n", result);
    result = divide(10, 0); // This will trigger an assertion failure and terminate the program.
    printf("This line will not be executed.\n");
    return 0;
}
