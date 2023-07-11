#include <stdio.h>
#include <stdlib.h>
int fun(int x);
int main()
{
    int r = fun(7);
    printf("%d\n", r);
}
int fun(int x)
{
    static int i = 0;
    if (x <= 0)
        return 1;
    else if (x > 5)
    {
        i = x;
        return fun(x - 3) + 2;
    }
    return fun(x - 2) + i;
}