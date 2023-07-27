#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("open.txt", "r");
    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    // Reading individual characters
    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }

    // Reading a line
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
    }

    // Reading formatted data
    int num;
    while (fscanf(file, "Number: %d", &num) == 1)
    {
        printf("Number: %d\n", num);
    }

    fclose(file);
    return 0;
}
