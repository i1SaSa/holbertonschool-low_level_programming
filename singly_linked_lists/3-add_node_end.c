#include "lists.h"
/**
 * add_node_end - adds a node at the end of a list_t list
 * @head: pointer to pointer to the first node
 * @str: string to duplicate into the node
 *
 * Return: address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *curr;
	unsigned int len = 0;

	end = malloc(sizeof(list_t));
	if (!end)
		return (NULL);
	end->str = strdup(str);
	if (!end->str)
	{
		free(end);
		return (NULL);
	}
	while (str[len])
		len++;
	end->len = len;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	curr = *head;
	while (curr->next)
		curr = curr->next;

	curr->next = end;
	return (end);
}
