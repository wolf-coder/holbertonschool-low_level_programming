#include "lists.h"

/**
 *free_listint - A function that frees a listint_t list.
 *
 *@head: Pointer to the head node of a given list
 *
 *Return: Void.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp_node = head;

	while (tmp_node != NULL)
	{
		head = head->next;
		free(tmp_node);
		tmp_node = head;
	}
}
