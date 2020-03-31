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
	unsigned long int i = 0, Quotiont = 1, UntilZero = 0, Num, Rest, j;

	while (Quotiont != 0)
	{
		UntilZero++;
		Quotiont = n >> UntilZero;
	}
	for (i = UntilZero; i > 0; i--)
	{
		Num = n;
		for (j = i; j > 0 ; j--)
		{
			Quotiont = Num >> 1;
			Rest = Num - (Quotiont << 1);
			Num = Quotiont;
		}
		_putchar(Rest + '0');
	}
}
