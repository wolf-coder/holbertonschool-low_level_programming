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
	listint_t *l = *head;

	while (l)
	{
		*head = l->next;
		free(l);
		l = *head;
	}
}
