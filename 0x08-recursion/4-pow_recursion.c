#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x raised to the
 *power of y.
 *
 *@x:pow operators.
 *@y:pow operators.
 * Return: result of the multiplication.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
