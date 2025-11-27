#include "lists.h"
/**
 *  free_list - free the list from the memory
 * @head: the current node
 * 
 *
 */
void free_list(list_t *head)
{
    list_t *current, *next_node;
    
    current = head;
    while (current != NULL)
    {
        next_node = current->next;
        free(current->str);
        free(current);
        current = next_node;
    }
    
}