#include "lists.h"

/**
 *sum_dlistint- A function that returns the sum of all the
 *data (n) of a dlistint_t linked list.
 *
 *@head:index of wanted element in the list.
 *Return: Sum of all the data ,otherwise Zero.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
