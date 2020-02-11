#include "holberton.h"
/**
 * print_sign - A  function tthat prints the sign of a number.
 *in lowercase, followed by a new line
 *@n: The number to check its sign.
 * Return: If alpha 1 ,otherwise 0
 **/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
