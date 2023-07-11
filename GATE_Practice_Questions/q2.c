#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    char a[] = "\0";
    // \n
    if (printf("%s\n", a))
        printf("ok");
    else
        printf("error");
    return 0;
}