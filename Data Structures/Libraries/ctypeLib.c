#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%s", &ch);

    if (isalpha(ch))
    {
        printf("%c is an alphabetic character.\n", ch);
        if (isupper(ch))
            printf("It is an uppercase letter.\n");
        else if (islower(ch))
            printf("It is a lowercase letter.\n");
    }

    if (isdigit(ch))
        printf("%c is a digit.\n", ch);

    if (isspace(ch))
        printf("%c is a whitespace character.\n", ch);

    ch = tolower(ch);
    printf("After converting to lowercase: %c\n", ch);

    ch = '5';
    int num = isxdigit(ch);
    printf("%c is a hexadecimal digit: %d\n", ch, num);

    return 0;
}
