#include <stdio.h>
#include <stdlib.h>
int main()
{
    static int var = 9;
    printf("%d\n", var--);
    if (var)
        main();
    return 0;
}