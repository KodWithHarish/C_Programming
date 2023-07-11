#include <stdio.h>
#include <stdlib.h>
int fun();
int main()
{
    fun();
    fun();
    fun();
    fun();
    return 0;
}
int fun()
{
    int n = 0;
    // static int n = 0;
    n++;
    printf("%d\n", n);
}