#include <stdio.h>
#include <string.h>

int main()
{
    int array[5];

    // Initialize the array with zeros using memset
    memset(array, 0, sizeof(array)); // 0 or -1

    for (int i = 0; i < 5; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
