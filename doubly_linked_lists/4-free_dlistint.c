#include "lists.h"
/**
 * free_dlistint - free the double list form the memory
 * @head: pointer to the current node
 * 
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next_node;

	current = head;
	while (current->next == NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
