#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *current = h;
    size_t count = 0;

    if (!h)
    {
        return (0);
    }
    while (current->prev != NULL)
    current = current->prev;


    while (current != NULL)
    {
        printf("[%u]\n", current->n);
        current = current->next;
        ++count;
    }
    return (count);
}