#include "holberton.h"
/**
 * jack_bauer - A  function that  prints every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59.
 * Return: void.
 **/
void jack_bauer(void)
{
	int n = 1;
	int i = 0, j = 0, k = 0, m = 0;
while (n != 1441)
{_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(m + '0');
_putchar('\n');
m++;
if (m == 10)
{
m = 0;
k++;
if (k == 6)
{
k = 0;
j++;
if (j == 10)
{
j = 0;
i++;
}
}
}
n++;
}
}
