#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node in selected index
 * @head: pointer to first node
 * @index: the node that we want to delete
 *
 * Return: 1 upone success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current, *next_node;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = current->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	current = *head;

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);

	return (1);
}
