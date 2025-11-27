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
	list_t *new, *curr;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		len++;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr->next)
		curr = curr->next;

	curr->next = new;
	return (new);
}
