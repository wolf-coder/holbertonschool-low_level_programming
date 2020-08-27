#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in a
 *sorted array of integers using the Binary search algorithm.
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of value on success, -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, Midl;
	size_t R = size - 1;

	if (!array)
		return (-1);
	while (L <= R)
	{
		printf("Searching in array: ");
		for (Midl = L; Midl < R; Midl++)
			printf("%d, ", array[Midl]);
		printf("%d\n", array[Midl]);
		Midl = (L + R) / 2;
		if (array[Midl] < value)
			L = Midl + 1;
		else if (array[Midl] > value)
			R = Midl - 1;
		else
			return (Midl);
	}
	return (-1);
}
