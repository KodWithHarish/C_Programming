#include <stdio.h>

#define SQUARE(x) ((x) * (x)) // Defines a macro to compute the square of a number.

int main()
{
    int n;
    printf("Enter A Number\n");
    scanf("%d", &n);
    printf("The Square of %d is --> %d", n, SQUARE(n)); // Expands to ((5) * (5))

    return 0;
}
