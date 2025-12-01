#include "lists.h"
/**
 *	get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *	@head: pointer to the first node
 *	@index: is the index of the node
 *
 * Return: Null of the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}

		head = head->next;
		i++;
	}

	return (NULL);
}
