#include <stdio.h>

int main()
{
    FILE *file;
    char data[] = "Hello, this is some content written to a file.";

    file = fopen("open.txt", "w"); // Open file in write mode

    if (file != NULL)
    {
        fputs(data, file); // Write data to the file
        printf("Data written to the file successfully.\n");
        fclose(file); // Close the file
    }
    else
    {
        printf("Failed to open the file.\n");
    }

    return 0;
}
