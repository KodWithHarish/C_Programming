#include <stdio.h>
#include <stdlib.h>
int ret(int ret);
int main()
{
    // printf("%d\n", sizeof(double));
    int k = ret(sizeof(int));
    printf("%d\n", ++k);
}
int ret(int ret)
{
    ret += 2.5;
    return ret;
}