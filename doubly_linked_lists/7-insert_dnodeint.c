#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given index in a doubly linked list
 * @h: pointer to the first node
 * @idx: is the index of the list where the new node should be added
 * @n: the element of the node
 *
 * Return: idx abone success, if faild NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	current = *h;
	while (current != NULL && idx > 1)
	{
		current = current->next;
		--idx;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	new->prev = current;
	new->next = current->next;
	current->next = new;
	if (new->next != NULL)
	{
		(new->next)->prev = new;
	}
	return (new);
}
