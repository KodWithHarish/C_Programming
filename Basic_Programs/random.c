#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int rand_num;
srand(2);
printf("The randomly generated number is");
rand_num = rand();
printf("%d\n", rand_num);
}