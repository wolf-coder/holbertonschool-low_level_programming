#include "lists.h"


/**
 *free_dlistint-A function that free a dlistint_t list.
 *
 *@head: A pointer to the head of the linked list.
 *Return:Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
