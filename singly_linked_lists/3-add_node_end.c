#include "lists.h"

/**
 * add_node_end - Adds a last node at the last of a singly linked list.
 * @head: Pointer to the pointer of the first node in the list.
 * @str: The string to be added to the last node.
 *
 * Return: Address of the last element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *last, *curr;
    unsigned int count = 0;

    last = malloc(sizeof(list_t));
    if (!last)
    {
        return (NULL);
    }
    if ((*head)->next == NULL)
        last = *head;

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

    while (curr->next != NULL)
        curr = curr->next;

    last = curr->next;
    return (0);
}
