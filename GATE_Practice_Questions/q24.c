#include <stdio.h>
#include <stdlib.h>
int fun(int n);
int main()
{
    fun(1);
    return 0;
}
int fun(int n)
{
    static int i = 1;
    if (n >= 5)
        return n;
    n = n + 1;
    i++;
    return f(n);
}