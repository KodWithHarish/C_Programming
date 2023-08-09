#include <stdio.h>
#include <string.h>

int main()
{
    char input[] = "apple,banana,orange,grape";
    const char delimiters[] = ",";

    // Make a copy of the input string since strtok modifies the original string
    char inputCopy[sizeof(input)];
    strcpy(inputCopy, input);

    char *token = strtok(inputCopy, delimiters);

    while (token != NULL)
    {
        printf("Token: %s\n", token);
        token = strtok(NULL, delimiters);
    }

    return 0;
}
