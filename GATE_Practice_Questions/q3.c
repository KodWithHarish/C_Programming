#include <stdio.h>
#include <stdlib.h>
#define sqr(a) a *a
int main()
{
    int i;
    i = 64 / sqr(4);
    printf("%d\n", i);
    return 0;
}