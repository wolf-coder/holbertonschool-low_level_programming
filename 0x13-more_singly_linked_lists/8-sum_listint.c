#include "lists.h"


/**
 *sum_listint- A function that returns the sum of all the data (n)
 *of a listint_t linked list.
 *
 *@head: Pointer to the head of a given list
 *
 *Return: sum of n's data.
 */

int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum = 0;

	if (!p)
		return (0);
	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
