#include "lists.h"
/**
 *delete_dnodeint_at_index- A function that deletes the
 *node at index index of a dlistint_t linked list.
 *
 *@head:Poiner to the head of linked list.
 *@index:Index number of the elment to be deleted.
 *
 *Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *tmp = NULL;

	tmp = *head;
	
	while (tmp)
	{
		if (counter == index)
		{
			if (index == 0)
			{
				if (tmp->next)
				{
					*head = tmp->next;
					(*head)->prev = NULL;
				} else
			        {
					free(*head);
					*head = NULL;
					return (1);
				}
			} else
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
			}
			free(tmp);
			return (1);
		}
		counter++;
		tmp = tmp->next;
	}
	return (-1);
}
