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
	int Activated = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 1UL << 32; i > 0; i = i >> 1)
	{
		if (n & i)
		{
			_putchar('1');
			Activated = 1;
		}
		else
		{
			if (Activated)
				_putchar('0');
		}
	}
}
