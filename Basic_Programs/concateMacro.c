#include <stdio.h>
#define CONCAT(x, y) x##y
int main()
{
    int concat_result = CONCAT(10, 20); // Expands to: int concat_result = 1020;
    printf("%d\n", concat_result);

    return 0;
}