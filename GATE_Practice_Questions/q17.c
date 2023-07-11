#include <stdio.h>
#include <stdlib.h>
int main()
{
    pt();
    pt();
    pt();
    return 0;
}
int pt()
{
    static int a;
    printf("%d\n", ++a);
}