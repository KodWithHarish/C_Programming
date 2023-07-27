#include <stdio.h>
#include <time.h>

int main()
{
    // Get the current time
    time_t current_time;
    time(&current_time);

    printf("Current time in seconds since the epoch: %ld\n", current_time);

    // Convert time_t to a string representation
    char *time_str = ctime(&current_time);
    printf("Current time as a string: %s", time_str);

    // Convert time_t to a struct tm for local time and extract individual components
    struct tm *local_time = localtime(&current_time);
    printf("Current local time: %02d:%02d:%02d\n", local_time->tm_hour, local_time->tm_min, local_time->tm_sec);

    // Format the time using strftime
    char formatted_time[50];
    strftime(formatted_time, sizeof(formatted_time), "%Y-%m-%d %H:%M:%S", local_time);
    printf("Formatted time: %s\n", formatted_time);

    return 0;
}
