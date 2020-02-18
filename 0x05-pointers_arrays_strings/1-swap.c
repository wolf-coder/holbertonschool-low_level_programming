#include "holberton.h"
/**
*swap_int -  function that swaps the values of two integers.
*
*@a : pointer of variable to be swapped.
*@b : pointer of variable to be swapped.
*/
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
