#include <stdio.h>
#include <stdlib.h>
int main()
{
    static int i = 0;
    printf("%d\n", ++i);
    if (i != 10)
    {
        main();
    }

    return 0;
}