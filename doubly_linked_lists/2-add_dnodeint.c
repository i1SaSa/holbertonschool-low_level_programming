#include "lists.h"
/**
*
*
*
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = head;
	if (!new)
		return (NULL);

	while (new->prev != NULL)
	{
		new = new->prev;
	}

	return (new);
}