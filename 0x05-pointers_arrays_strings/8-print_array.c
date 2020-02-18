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

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", *(a + n -1 ));
		else
			printf("%d, ", *(a + i));
	}
	printf("\n");
}
