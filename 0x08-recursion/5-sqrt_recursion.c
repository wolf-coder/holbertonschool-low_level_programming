#include "holberton.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *power of y.
 *
 *@n: Number to calculate its natural square root.
 *
 * Return: square root result or (-1) if n does not have a square root.
 */
int _sqrt_recursion(int n)
{

	return (check(n, 1));
}
/**
 * check - function that returns the natural square root of a number.
 *power of y.
 *
 *@n: Number to calculate its natural square root.
 *@c: possible square root number.
 * Return: square root result or (-1) if n does not have a square root.
 */
int check(int n, int c)
{
	if (c * c > n)
		return (-1);
	else if (c * c == n)
		return (c);
	else
		return (check(n, c + 1));
}
