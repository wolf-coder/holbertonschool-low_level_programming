#include "holberton.h"
/**
 * times_table - A  function that  prints the 9 times table, starting with 0.
 *
 * Return: void.
 **/
void times_table(void)
{
int i = 0, j = 0, res = 0;
for (i = 0; i <= 9; ++i)
{
for (j = 0 ; j <= 9; ++j)
{
res = i * j;
if (j == 0)
{
_putchar('0');
_putchar(',');
}
else
{
_putchar(' ');
if (res < 10)
{
_putchar(' ');
_putchar(res + '0');
}
if (res >= 10)
{
_putchar(res / 10 + '0');
_putchar(res % 10 + '0');
}
if (j != 9)
{
_putchar(',');
}
}
}
_putchar('\n');
}
}
