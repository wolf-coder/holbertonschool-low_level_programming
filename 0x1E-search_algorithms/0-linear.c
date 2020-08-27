#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers
 *using the Linear search algorithm
 * @array: a pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index value  on success, -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
