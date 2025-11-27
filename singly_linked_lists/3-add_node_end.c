#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list_t list
 * @head: pointer to the pointer of the first node in the list
 * @str: string to be stored in the new node
 *
 * Return: address of the new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *last;
    list_t *curr;
    unsigned int count = 0;

    last = malloc(sizeof(list_t));
    if (!last)
    {
        return (NULL);
    }

    last->str = strdup(str);
    if (last->str == NULL)
    {
        free(last);
        return (NULL);
    }

    while (str[count])
    {
        count++;
    }
    last->len = count;

    last->next = NULL;

    if (*head == NULL)
    {
        *head = last;
        return (last);
    }

    curr = *head;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = last;

    return (last);
}
