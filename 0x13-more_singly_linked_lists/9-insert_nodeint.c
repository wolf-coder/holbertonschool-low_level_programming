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
 *insert_nodeint_at_index- A function that inserts a new node
 *at a given position.
 *
 *@head: Double Pointer to the head of a given list.
 *@idx: Index Number where the node should be added.
 *@n: Data's number of the added node.
 *
 *Return: The address of the new node, or NULL if it failed.
 *NULL if Node can't be Added.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len = listint_len(*head), i = 0;
	listint_t *New_node = malloc(sizeof(listint_t));
	listint_t *tmp_node = NULL;

	if (!New_node)
		return (NULL);
	New_node->n = n;
	if (len == 0 && idx == 0)
	{
		*head = New_node;
		return (*head);
	}
	if (idx > len)
		return (NULL);
	tmp_node = *head;
	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}
	if (idx == len)
		return (add_nodeint_end(head, n));
	while (i++ < idx - 1)
		tmp_node = tmp_node->next;
	New_node->next = tmp_node->next;
	tmp_node->next = New_node;
	return (New_node);
}
