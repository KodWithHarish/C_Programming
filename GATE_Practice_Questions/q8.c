#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 2;
    {
        int i = 4, j = 5;
        printf("%d%d\n", i, j);
    }
    printf("%d%d\n", i);
    return 0;
}