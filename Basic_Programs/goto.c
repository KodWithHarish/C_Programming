#include <stdio.h>

int main()
{
    int choice;
menu:
    printf("Choose an option:\n");
    printf("1. Print 'Hello'\n");
    printf("2. Print 'World'\n");
    printf("3. Quit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        goto print_hello;
    case 2:
        goto print_world;
    case 3:
        goto quit;
    default:
        printf("Invalid choice\n");
        goto menu;
    }

print_hello:
    printf("Hello\n");
    goto menu;

print_world:
    printf("World\n");
    goto menu;

quit:
    printf("Quitting the program\n");

end:
    return 0;
}
