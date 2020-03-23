#include "lists.h"
#include <stdio.h>

/**
 *print_listint- A function that prints all the elements of a listint_t list.
 *
 *@h: Pointer to the head of a given list.
 *
 *Return: number of the elements to be counted.
 */
size_t print_listint(const listint_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		sum++;
		h = h->next;
	}
	return (sum);
}
