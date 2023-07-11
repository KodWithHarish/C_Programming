#include <stdio.h>
#include <stdlib.h>
int main()
{
    extern int a;
    a = 30;
    printf("%d\n", a);
    return 0;
}