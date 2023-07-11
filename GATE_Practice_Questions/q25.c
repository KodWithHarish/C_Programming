#include <stdio.h>
#include <stdlib.h>
int incr(int i);
int main()
{
    int i, j;

    // for (i = 0; i <= 4; i++)
    // {
    //     j = incr(i);
    //     printf("%d\n", j);
    // }

    for (i = 0; i <= 4; i++)
        j = incr(i);
    printf("%d\n", j);
    return 0;
}
int incr(int i)
{
    static int c = 0;
    c = c + i;
    return c;
}