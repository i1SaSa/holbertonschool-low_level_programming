#include "lists.h"
/**
 *	add_dnodeint_end - add node at the end of the doubly list
 *	@head: pointer to the currnet node
 *	@n: the element of the node
 *
 *	Return: the end of the doubly list
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
	end->prev = (*head);
	(*head)->next = end;
	return (end);
}
