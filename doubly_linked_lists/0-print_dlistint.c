#include "lists.h"
/**
 * print_dlistint - print every element in doubly linkedlist
 * @h: pointer to node
 * 
 * Return: count of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	if (!h) {
		return (0);
	}

	/* Move backward to the head */
	while (current->prev != NULL)
		current = current->prev;

	/* Print list forward */
	while (current != NULL) {
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}