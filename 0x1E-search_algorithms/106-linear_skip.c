#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a list.
 *
 * @list: a pointer to the list head.
 * @value: searched value.
 *
 * Return: a pointer to the first node where value is located or NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *Current, *Previous;

	if (!list)
		return (NULL);

	Current = list;
	while (Current->next && Current->n < value)
	{
		Previous = Current;
		if (Current->express)
			Current = Current->express;
		else
		{
			while (Current->next)
				Current = Current->next;
		}
		if (Current->next)
			printf("Value checked at index [%lu] = [%i]\n", Current->index, Current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", Previous->index,
	       Current->index);

	Current = Previous;
	while (Current && Current->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n", Current->index, Current->n);
		if (Current->next)
			Current = Current->next;
		else
			return (NULL);
	}

	if (Current && Current->n == value)
	{
		printf("Value checked at index [%lu] = [%i]\n", Current->index, Current->n);
		return (Current);
	}

	return (NULL);
}
