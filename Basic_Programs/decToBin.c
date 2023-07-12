#include <stdio.h>
int decToBin(int n);
int main()
{
    int n,bin;
    printf("Enter a binary number\n");
    scanf("%d",&n);
    bin = decToBin(n);
    printf("%d\n",bin);
    return 0;
}
int decToBin(int n){
    if (n==0)
        return n;
    else
        return n % 2 + 10 * decToBin(n / 2);
}