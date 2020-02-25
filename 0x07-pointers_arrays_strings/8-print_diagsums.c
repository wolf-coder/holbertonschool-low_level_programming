#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums -prints the sum of the two diagonals of
*a square matrix of integers.
* @a : pointer to a multi-dimensional array.
* @size : size of the matrix
*Return: Void
*/

void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0, i = 0;
	int len = size * size;

	while (i < len)
	{
		d1 += a[i];
		i += size + 1;
	}
	i = size - 1;
	while (i < len - 1)
	{
		d2 += a[i];
		i += size - 1;
	}
	printf("%d, %d\n", d1, d2);
}
