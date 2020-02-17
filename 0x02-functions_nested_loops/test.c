#include <stdio.h>

/**
* main - print fibonacci numbers
* Return: 0
*/

int main(void)
{
long int n = 0, b = 1, c = 1, a = 2;
while (n < 52)
{
++n;
if (n > 3)
{
printf("%ld, ", b);
a = c;
c = b;
b = a + c;
}
}
printf("%ld", b);
printf("\n");
return (0);
}