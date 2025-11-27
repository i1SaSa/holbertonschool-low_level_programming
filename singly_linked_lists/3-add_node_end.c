#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Adds a last node at the last of a singly linked list.
 * @head: Pointer to the pointer of the first node in the list.
 * @str: The string to be added to the last node.
 *
 * Return: Address of the last element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *last;
    list_t *curr;
    unsigned int count = 0;

    last = malloc(sizeof(list_t));
    if (!last)
        return (NULL);

    last->str = strdup(str);
    if (last->str == NULL)
    {
        free(last);
        return (NULL);
    }

    while (str[count])
    {
        ++count;
    }
    last->len = count;

    last->len = strlen(str);
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