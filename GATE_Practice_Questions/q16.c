#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a = 9.4862984629842;
    printf("%f\n", a);   // 9.486399
    printf("%.f\n", a);  // 9
    printf("%.2f\n", a); // 9.49
    printf("%.3f\n", a); // 9.486
    return 0;
}