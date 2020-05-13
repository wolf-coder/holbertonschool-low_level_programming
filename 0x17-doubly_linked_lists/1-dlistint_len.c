#include "lists.h"

/**
 *dlistint_len- a function that returns the number of elements in a
 *linked dlistint_t list.
 *
 *@h:Pointer to the head of the list.
 *Return:sum of the elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
