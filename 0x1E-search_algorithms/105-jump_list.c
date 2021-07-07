#include "search_algos.h"
#include <math.h>

/**
 * next_element - deplacement
 *
 * @list: list pointer
 * @index: index to move
 *
 * Return: pointer to the specified node
 */
listint_t *next_element(listint_t *list, size_t index)
{
	while (list->next != NULL && list->index < index)
		list = list->next;
	return (list);
}

/**
 * jump_list - searches for a value in a sorted list
 *
 * @list: pointer to the list head.
 * @size: number of nodes.
 * @value: searched value
 *
 * Return: pointer to the first desired node
 * NULL if node does not  exist.
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump;
	listint_t *l_pointer, *r_pointer;

	if (list != NULL && size > 0)
	{
		jump = sqrt(size);
		l_pointer = list;
		r_pointer = next_element(l_pointer, jump);
		printf("Value checked at index [%ld] = [%d]\n"
				, r_pointer->index, r_pointer->n);
		while (r_pointer->index < (size - 1) && r_pointer->n < value)
		{
			l_pointer = r_pointer;
			r_pointer = next_element(l_pointer, r_pointer->index + jump);
			printf("Value checked at index [%ld] = [%d]\n"
					, r_pointer->index, r_pointer->n);
		}
		printf("Value found between indexes [%ld] and [%ld]\n"
		       , l_pointer->index, r_pointer->index);
		printf("Value checked at index [%ld] = [%d]\n"
				, l_pointer->index, l_pointer->n);
		while (l_pointer->index < size - 1 && l_pointer->n < value)
		{
			l_pointer = l_pointer->next;
			if (l_pointer == NULL)
				return (NULL);
			printf("Value checked at index [%ld] = [%d]\n"
					, l_pointer->index, l_pointer->n);
		}
		if (l_pointer->n == value)
			return (l_pointer);
	}
	return (NULL);
}
