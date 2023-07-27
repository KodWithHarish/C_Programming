#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int n, m;
    printf("Enter A and B value\n");
    scanf("%d %d", &n, &m);
    printf("Max Number is --> %d", MAX(n, m));
    return 0;
}