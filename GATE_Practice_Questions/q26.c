#include <stdio.h>
#include <stdlib.h>
int fun(int a);
int main()
{
    int r = fun(435);
    printf("%d\n", r);
    return 0;
}
int fun(int a)
{
    int c = 0;
    while (a)
    {
        c++;
        a >>= 1;
    }
    return c;
}