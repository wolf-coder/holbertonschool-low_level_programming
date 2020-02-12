#include <stdio.h>

/**
* main - Fibonacci
* Return: 0
*/
int main(void)
{
long int m = 1, k = 2, i = 0;
long int sum = 0, S = 2;
for (i = 0; i < 31; ++i)
{
sum = m + k;
if (sum % 2 == 0)
{
S = S + sum;
}
m = k;
k = sum;
}
sum = m + k;
if (sum % 2 == 0)
{
S = S + sum;
}
printf("%ld\n", S);
return (0);
}
