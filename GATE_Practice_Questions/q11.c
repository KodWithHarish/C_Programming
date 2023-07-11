#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, j = 0;
    if (i && j++)
        printf("%d..%d", i++, j);
    printf("%d..%d\n", i, j);
    return 0;
}