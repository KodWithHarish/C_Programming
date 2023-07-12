#include <stdio.h>
int binToDec(int n);
int main()
{
    int n,dec;
    printf("Enter a binary number\n");
    scanf("%d",&n);
    dec = binToDec(n);
    printf("%d\n",dec);
    return 0;
}
int binToDec(int n){
    if (n==0)
        return n;
    else
        return n % 10 + 2 * binToDec(n / 10);
}