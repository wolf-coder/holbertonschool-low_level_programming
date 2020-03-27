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

	tmp_node = *head;
	if (!tmp_node)
		return (0);
	*head = tmp_node->next;
	n = tmp_node->n;
	free(tmp_node);
	return (n);
}

/**
 *delete_nodeint_at_index- a function that deletes the node at index
 *index of a listint_t linked list.
 *
 *@index: The index of the node that should be deleted. Index starts at 0
 *@head: Double Pointer to the head's node of a given list.
 *
 *Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len = listint_len(*head), i = 0;
	listint_t *Tmp_node = *head, *Node_del = NULL;

	if (!Tmp_node || index > len - 1)
		return (-1);
	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}
	if (index == len - 1)
	{
		while (Tmp_node->next->next)
			Tmp_node = Tmp_node->next;
		Node_del = Tmp_node->next;
		Tmp_node->next = NULL;
		free(Node_del);
		return (1);
	}
	while (i++ < index - 1)
		Tmp_node = Tmp_node->next;
	Node_del = Tmp_node->next;
	Tmp_node->next = Node_del->next;
	free(Node_del);
	return (1);
}
