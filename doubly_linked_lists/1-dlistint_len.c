#include "lists.h"
/**
* dlistint_len - count the elemnt in the doubly linkedlist
* @h: pointer that will count the element
* 
* Return: count of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	if (!h)
	return (0);

	while (h->prev != NULL)
	h = h->prev;

	while (h)
	{
		++count;
		if (h->next == NULL)
			break;
		else
			h = h->next;
	}

	return (count);
}
