#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int originalArr[] = {1, 2, 3, 4, 5};
    int shallowCopy[5];
    int *deepCopy;

    // Shallow copy
    memcpy(shallowCopy, originalArr, sizeof(originalArr));

    // Deep copy
    deepCopy = (int *)malloc(sizeof(originalArr));
    memcpy(deepCopy, originalArr, sizeof(originalArr));

    // Modify the original array
    originalArr[0] = 10;

    // Print the arrays
    printf("Original: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", originalArr[i]);
    }
    printf("\n");

    printf("Shallow Copy: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", shallowCopy[i]);
    }
    printf("\n");

    printf("Deep Copy: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", deepCopy[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory for deep copy
    free(deepCopy);

    return 0;
}
