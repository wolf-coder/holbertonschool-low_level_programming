#include "holberton.h"
#include <stdio.h>
/**
*print_array -  function that  prints n elements
*of an array of integers, followed by a new line.
*@a : Pointer of an array
*@n : length of the array
*/
void print_array(int *a, int n)
{
	int i = 0;

	if (n != 0)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d\n", a[i]);
	} else
	{
		printf("\n");
	}
}
