#include "lists.h"
/**
 * list_len - count the elemnt in the linkedlist
 * @h: pointer that will count the element
 *
 *Return: count of elemnt in the list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
	++count;
	h = h->next;
	}


	return (count);
}
