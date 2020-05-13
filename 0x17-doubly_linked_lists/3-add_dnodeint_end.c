#include "lists.h"


/**
 **add_dnodeint_end-Function that adds a new node at the end of
 *a dlistint_t list.
 *
 *@head:Pointer to the head of the linked list.
 *@n:new element data value.
 *
 *Return: address of the added element, NULL if Failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
	} else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
