#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("open.txt", "w"); // Opens file in write mode
    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }
    else
    {
        printf("successful opened the file.\n");
    }
    // Perform file operations
    fclose(file); // Close the file
    return 0;
}
