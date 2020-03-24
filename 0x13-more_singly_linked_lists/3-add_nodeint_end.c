#include "lists.h"

/**
 *add_nodeint_end - Function that adds a new node at the beginning of a
 *listint_t list.
 *
 *@head: Pointer to the head node of a given list.
 *
 *@n: Number to be affected to the added node's n.
 *
 *Return: Pointer of the updated list,Or NULL if malloc fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New_node = NULL;
	listint_t *p = *head;

	New_node = malloc(sizeof(listint_t));
	if (!New_node)
		return (NULL);
	if (!*head)
	{
		*head = New_node;
		return (*head);
	}
	while (p->next)
		p = p->next;
	New_node->n = n;
	p->next = New_node;
	return (*head);
}
