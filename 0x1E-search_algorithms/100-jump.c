#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: return the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t Start = 0, Jump, End = 0;

	if (!array || size == 0)
		return (-1);
	Jump = sqrt(size);
	while (End < size && array[End] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", End, array[End]);
		End += Jump;
	}
	Start = End - Jump;
	printf("Value found between indexes [%lu] and [%lu]\n", Start, End);

	End = End >= size ? size - 1 : End;

	while  (Start <= End)
	{
		printf("Value checked array[%lu] = [%d]\n", Start, array[Start]);
		if (array[Start] == value)
			return (Start);
		Start++;
	}
	return (-1);
}
