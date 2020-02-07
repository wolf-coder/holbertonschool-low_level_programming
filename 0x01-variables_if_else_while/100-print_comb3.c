#include <stdio.h>
/**
 *main- A program that prints all possible
 *different combinations of two digits.
 * Return: 0
 **/
int main(void)
{
int i = 48, j;
int k = 49;
for (i = 48; i <= 56; ++i)
{
j = k;
for (j = k; j <= 57; ++j)
{
putchar(i);
putchar(j);
if (i <= 56 && j <= 57)
{
putchar(',');
putchar(' ');
}
}
k++;
putchar('\n');
}
putchar('\n');

return (0);
}
