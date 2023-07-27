#include <stdio.h>
#include <signal.h>

// Signal handler function
void handle_signal(int signal_num)
{
    printf("Received signal %d (Ctrl+C)\n", signal_num);
}

int main()
{
    // Set up the signal handler for SIGINT (Ctrl+C)
    signal(SIGINT, handle_signal);

    printf("Press Ctrl+C to generate the SIGINT signal.\n");

    // Infinite loop to keep the program running
    while (1)
    {
        // Your program's main logic goes here
    }

    return 0;
}
