#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // realloc
    int newSize;
    printf("Enter new size\n");
    scanf("%d", &newSize);

    arr = (int *)realloc(arr, newSize * sizeof(int));

    if (arr == NULL)
    {
        printf("New Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", newSize - n);
    for (int i = n; i < newSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr); // Free the allocated memory

    return 0;
}
