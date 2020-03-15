#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - A function that executes a function given as a parameter
 *on each element of an array.
 *
 *@array: String.
 *@size: size of the array.
 *@action: Pointer to function.
 *
 *Return: Void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action)
	{
		while (i != size)
		{
			action(array[i]);
			i++;
		}
	}
}
