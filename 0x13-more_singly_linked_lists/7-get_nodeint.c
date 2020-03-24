#include "lists.h"

/**
 *listint_len - A function that returns the number of elements in a
 *linked listint_t list.
 *
 *@h: Pointer to the head of a given list.
 *
 *Return: Number of 'h' nodes elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}

/**
 *get_nodeint_at_index- a function that returns the nth node of a
 *listint_t linked list.
 *
 *@head: Pointer to the head of a given list.
 *
 *@index: Number referring to the Index of searched Node.
 *
 *Return: The  nth node of a listint_t linked list,Or NULL if non-existence.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp_node = head;
	unsigned int i = 0, j = 0;

	if (!tmp_node)
		return (NULL);

	i = listint_len(head) - 1;
	if (index > i)
		return (NULL);

	tmp_node = head;
	for (j = 0; j < index; j++)
		tmp_node = tmp_node->next;

	return (tmp_node);
}
