#include "lists.h"
/**
 *	sum_dlistint - summation of all data in the linkedlist
 *	@head: pointer to the first node
 *
 *	Return: the total of the summation
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
