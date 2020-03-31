#include "holberton.h"

/**
 *print_binary- A function that prints the binary representation of a number.
 *
 *@n:Number to present its binary version.
 *
 *Return: Void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = n ; i > 0; i = i >> 1)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
	}
}
