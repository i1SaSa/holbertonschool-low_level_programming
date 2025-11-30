#include "lists.h"
/**
 * add_dnodeint - add node at the start of the doubly linkedlist
 * @head: pointer to the first node
 * @n:	
 *
 * Return: in succes first node address,
 * 	if failed NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->next = *head;
	*head = new;
	new->n = n;

	return (new);
}