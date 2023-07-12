#include <stdio.h>
int main()
{
    int n, rev = 0, temp;
    printf("Enter a number\n");
    scanf("%d",&n);

    temp = n;
    while (n){
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if (temp==rev){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
}