#include "lists.h"
/**
 * add_node - add node in the beginnig of the list
 * @head: head of the first node
 * @str:content of the node
 *
 * Return: if succes addres of the new node,
 *	if faild return Null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->next = *head;

	return (*head);
}
