#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 1, m = 1;
    printf("%d\n", n++);
    printf("%d\n\n", ++n); // 3 for both printf statements

    printf("%d\n", m--);
    printf("%d\n", --m); //-1 for both printf statements
    return 0;
}