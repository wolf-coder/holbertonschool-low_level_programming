#include "search_algos.h"
/**
 * interpolation_search - searches for a value in an array
 *
 * @array: a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return:  return the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	/**
	 *Defining variables
	 **/
	size_t High = size - 1, i = 0, Low = 0;


	/**
	 *Get the result
	**/
	if (array)
	{
		while ((value >= array[Low]))
		{
			i = Low + (((double)(High - Low) /
						(array[High] - array[Low])) * (value - array[Low]));

			if (i > size)
			{
				printf("Value checked array[%lu] is out of range\n", i);
				break;
			}

			printf("Value checked array[%lu] = [%d]\n", i, array[i]);

			if (array[i] < value)
				Low = i + 1;
			else if (array[i] > value)
				High = i - 1;
			else
				return (i);
		}
	}

	return (-1);
}
