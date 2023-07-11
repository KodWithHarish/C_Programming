#include <stdio.h>
#include <stdlib.h>
int fun(int x);
int main()
{
    int r = fun(16);
    printf("%d\n", r);
    return 0;
}
int fun(int x)
{
    if ((x / 2) != 0)
        return (fun(x / 2) + 10 + x % 2);
    else
        return 1;
}