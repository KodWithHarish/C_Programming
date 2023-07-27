#include <stdio.h>
#include <setjmp.h>

jmp_buf jump_buffer;

void do_something_critical()
{
    // Simulate an error condition
    int error = 1;

    if (error)
    {
        printf("An error occurred. Jumping back to the main function.\n");
        longjmp(jump_buffer, 1);
    }

    // Continue normal processing if no error
    printf("Critical operation completed successfully.\n");
}

int main()
{
    int ret = setjmp(jump_buffer);

    if (ret == 0)
    {
        printf("Calling the critical function...\n");
        do_something_critical();
    }
    else
    {
        printf("Back in the main function due to an error.\n");
    }

    return 0;
}
