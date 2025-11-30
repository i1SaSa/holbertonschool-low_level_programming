#include "lists.h"
/**
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;

	end = malloc(sizeof(dlistint_t));
	if (!end)
	{
		return (0);
	}
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while ((*head)->next != NULL)
	{
		(*head) = (*head)->next;
	}
	(*head)->next = end;
	return (end);
}
