#include "lists.h"
/**
 * dlistint_len - count the elemnt in the doubly linkedlist
 * @h: pointer that will count the element
 * 
 * Return: count of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count;

	if (!h)
	return (0);

	while (h->prev != NULL)
	h = h->prev;

	while (h)
	{
		++count;
		h = h->next;
	}

	return (count);
}