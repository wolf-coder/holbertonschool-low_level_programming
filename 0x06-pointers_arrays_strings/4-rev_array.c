#include "holberton.h"
/**
*reverse_array - a reverses the content of an array of integers.
*
*@a: Pointer to the array.
*@n: size of the array.
*
*Return: int.
*/

void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	for (i = 0; i < n / 2; ++i)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i] = tmp;
	}
}
