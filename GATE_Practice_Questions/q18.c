#include <stdio.h>
#include <stdlib.h>
int main()
{
    static int i = 5;
    if (--i)
    {
        main();
        printf("%d\n", i);
    }
}