#include "lists.h"

/**
 *add_nodeint- A function that adds a new node at the beginning of a
 *listint_t list.
 *
 *@head: Pointer to the head of a given list.
 *
 *@n: Number to be affected to the Newly allocated node's n.
 *
 *Return: Pointer to the updated list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New_node = NULL;

	New_node = malloc(sizeof(listint_t));
	if (!New_node)
		return (NULL);
	New_node->n = n;
	New_node->next = *head;
	*head = New_node;
	return (*head);
}
