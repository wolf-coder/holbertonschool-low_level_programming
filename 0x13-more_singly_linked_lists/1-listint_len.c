#include <stdlib.h>
#include "lists.h"


/**
 *listint_len - A function that returns the number of elements in a
 *linked listint_t list.
 *
 *@h: Pointer to the head of a given list.
 *
 *Return: Number of 'h' nodes elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
