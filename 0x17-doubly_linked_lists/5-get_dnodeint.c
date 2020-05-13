#include "lists.h"

/**
 **get_dnodeint_at_index- Afunction that returns the nth node of
 *a dlistint_t linked list.
 *
 *@head:Pointer to the head of list.
 *@index:index of wanted element in the list.
 *Return:address of the wanted element.Null if index non-existance.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *tmp;

	if (!(head))
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (counter == index)
			return (tmp);
		tmp = tmp->next;
		counter++;
	}
	return (NULL);
}
