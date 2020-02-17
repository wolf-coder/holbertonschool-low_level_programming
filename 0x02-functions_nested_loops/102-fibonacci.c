#include <stdio.h>

/**
* main - computes and prints the
*sum of all the multiples of 3 or 5 below 1024
* Return: 0
*/
int main(void)
{
long int m = 1, k = 2, i = 0;
long int sum = 0;
printf("%ld\n, %ld\n, ", m, k);
for (i = 0; i < 47; ++i)
{
sum = m + k;
printf("%ld\n, ", sum);
m = k;
k = sum;
}
sum = m + k;
printf("%ld\n", sum);
return (0);
}
