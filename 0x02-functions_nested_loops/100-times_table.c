#include "holberton.h"
/**
*print_times_table - prints print_times_table
*
*@n: int type number
*
*/
void print_times_table(int n)
{
int x = 0, u, l;

if (n > 15 || n < 0)
return;
while (x <= n)
{
for (u = 0; u <= n; u++)
{
l = x * u;
if (l > 99)
{
_putchar(l / 100 + '0');
_putchar((l / 10 % 10) + '0');
_putchar(l % 10 + '0');
}
else if (l > 9)
{
_putchar(' ');
_putchar(l / 10 + '0');
_putchar(l % 10 + '0');
}
else if (u != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(l + '0');
}
else
_putchar(l + '0');

if (u != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
x++;
}
}
