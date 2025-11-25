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
	int count = 0;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL) 
	{
		free(new);
		return (NULL);
	}
        while(str[count])
                ++count;

        new->len = count;
	new->next = *head;
	*head = new;
	return (new);
}
