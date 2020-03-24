#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head : A Pointer to the head element of a  given list.
 *
 * Return : Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp_node;

	if (!*head)
		return;
	while (*head)
	{
		tmp_node = *head;
		*head = tmp_node->next;
		free(tmp_node);
	}
	*head = NULL;
}
