#include "lists.h"

#include <stdlib.h>
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
	if (idx > len - 1)
		return (NULL);
	tmp_node = *head;
	while (i++ < idx - 1)
		tmp_node = tmp_node->next;
	New_node->next = tmp_node->next;
	tmp_node->next = New_node;
	return (New_node);
}
