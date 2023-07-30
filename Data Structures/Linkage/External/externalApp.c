#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Replace "your_program.exe" with the actual name of the executable you want to run.
    // Make sure the executable file is in the same directory as the C program, or provide the full path.
    const char *exeFileName = "extern.exe";

    // Command to run the .exe file (using Windows syntax, replace with appropriate syntax for other OS).
    char command[100];
    sprintf(command, "%s", exeFileName);

    int result = system(command);

    // The system() function returns the exit status of the executed command.
    if (result == 0)
    {
        printf("The command ran successfully.\n");
    }
    else
    {
        printf("There was an error running the command.\n");
    }

    return 0;
}
