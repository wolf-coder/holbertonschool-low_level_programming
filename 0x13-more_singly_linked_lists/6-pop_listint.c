#include "lists.h"

/**
 *pop_listint - A function that deletes the head node of a
 *listint_t linked list, and returns the head node’s data (n).
 *
 *@head: Pointer to the head node of a given list.
 *
 *Return: The n's data head of the updated list.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp_node = NULL;
	int n;

	tmp_node=*head;
	if (!tmp_node)
		return (0);
	*head = tmp_node->next;
	n = tmp_node->n;
	free(tmp_node);
	return (n);
}
