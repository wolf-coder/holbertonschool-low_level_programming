#include <stdio.h>

/**
* main - Fibonacci
* Return: 0
*/
int main(void)
{
long int m = 1, k = 2, i = 0;
long int sum = 0;
printf("%ld, %ld, ", m, k);
for (i = 0; i < 26; ++i)
{
sum = m + k;
if (sum % 2 == 0)
{
printf("%ld, ", sum);
}

m = k;
k = sum;
}
sum = m + k;
if (sum % 2 == 0)
{
printf("%ld\n", sum);
}

return (0);
}
