#include <stdio.h>
#include <stdlib.h>
int fun(int x, int y);
int main()
{
    int a = fun(525, 25);
    printf("%d\n", a);
}
int fun(int x, int y)
{
    if (x > 0)
        return ((x % y) + fun(x / y, y));
    else
        return 0;
}