#include "lists.h"

/**
 **add_dnodeint-Function that adds a new node at the beginning
 *of a dlistint_t list.
 *
 *@head: Pointer to the head of the linked list.
 *@n:The data of the new element.
 *
 *Return: the address of the new element,NULL if Failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;

	if (!(*head))
		new->next = NULL;
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	new->prev = NULL;
	*head = new;
	return (*head);
}
