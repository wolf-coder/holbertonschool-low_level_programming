#include "holberton.h"
/**
 * print_last_digit - A  function that  prints the last digit of a number.
 *in lowercase, followed by a new line
 *@n: The number to compute ist absolute value.
 * Return: The value of the last digit.
 **/
int print_last_digit(int n)
{
int k = n;
if (k < 0)
{
k = -k;
}
_putchar((k % 10) + '0');
return (k % 10);
}
