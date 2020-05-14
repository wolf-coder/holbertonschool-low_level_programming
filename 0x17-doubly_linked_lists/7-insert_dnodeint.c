#include "lists.h"

/**
 *insert_dnodeint_at_index- A function that inserts a new node at a
 *given position.
 *@h:index of wanted element in the list.
 *@idx:the index of the list where the new node should be added.
 *Index starts at 0.
 *@n:DATA value of the added element.
 *Return:the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp;
	unsigned int counter = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp = *h;

	if (!tmp && idx == 0)
		return (add_dnodeint(h, n));
	while (tmp)
	{
		if (counter == idx)
		{
			if (idx == 0)
			{
				return (add_dnodeint(h, n));
			}
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
			return (new);
		}
		counter++;
		tmp = tmp->next;
	}
	if (counter == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
