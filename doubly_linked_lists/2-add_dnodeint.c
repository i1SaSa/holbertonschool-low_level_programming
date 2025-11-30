#include "lists.h"
/**
 * add_dnodeint - add node at the start of the doubly linkedlist
 * @head: pointer to the first node
 * @n: the elemnt of the pointer
 *
 * Return: in succes first node address,
 *	if failed NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->next = (*head);
	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	(*head) = new;
	new->n = n;
	new->prev = NULL;

	return (new);
}
