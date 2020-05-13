#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 *print_dlistint- A function that prints all the elements of a dlistint_t list.
 *
 *@h: A pointer to the head of the linked list.
 *
 *Return: number of elements in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
