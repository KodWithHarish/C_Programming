#include <stdio.h>

int main()
{
    FILE *file;
    char data[] = "\nAppended data";

    file = fopen("open.txt", "a"); // Open file in write mode

    if (file != NULL)
    {
        fputs(data, file); // Write data to the file
        printf("Data appended to the file successfully.\n");
        fclose(file); // Close the file
    }
    else
    {
        printf("Failed to open the file.\n");
    }

    return 0;
}
