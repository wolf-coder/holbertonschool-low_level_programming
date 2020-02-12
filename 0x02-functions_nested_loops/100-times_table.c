#include "holberton.h"
/**
*print_times_table - prints print_times_table
*
*@n: int type number
*
*/
void print_times_table(int n)
{
int o = 0, i, k;
if (n > 0 && n < 15)
{
while (o <= n)
{
for (i = 0; i <= n; i++)
{
k = o * i;
if (k > 9)
{
_putchar(' ');
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
}
else if (k > 99)
{
_putchar(k / 100 + '0');
_putchar((k / 10 % 10) + '0');
_putchar(k % 10 + '0');

}
else if (i != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else
_putchar(k + '0');

if (i != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
o++;
}
}
}
