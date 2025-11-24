#include "lists.h"
/**
 * print_list - print the content of the linkedlist
 * @h: pointer to struct
 *
 * Retrun: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}
	return (count);
}
