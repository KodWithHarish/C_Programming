#include <stdio.h>
#define ADD(x, y) x + y

int main()
{
    int n, m;
    printf("Enter A and B Value\n");
    scanf("%d %d", &n, &m);
    printf("Sum of %d and %d is --> %d", n, m, ADD(n, m));
    return 0;
}