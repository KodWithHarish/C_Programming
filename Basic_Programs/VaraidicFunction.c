#include <stdio.h>
#include <stdarg.h>

void printValues(int num, ...)
{
    va_list args;
    va_start(args, num);

    for (int i = 0; i < num; i++)
    {
        int val = va_arg(args, int);
        printf("Value %d: %d\n", i + 1, val);
    }

    va_end(args);
}

int main()
{
    // length of arguments, than pass the elements/arguments
    printValues(2, 42, 3, 7);
    return 0;
}
