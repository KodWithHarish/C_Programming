#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "3.142";
    double num = atof(str); // convert to string to float
    printf("Float: %lf\n", num);
    return 0;
}
