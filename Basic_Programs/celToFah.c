#include <stdio.h>
int main()
{
    float cel,fah,kel;
    printf("Enter temp in celsius\n");
    scanf("%f",&cel);

    fah = (1.8*cel)+32;
    printf("%.2f\n",fah);

    kel = cel+273.15;
    printf("%.2f\n",kel);
    return 0;
}
