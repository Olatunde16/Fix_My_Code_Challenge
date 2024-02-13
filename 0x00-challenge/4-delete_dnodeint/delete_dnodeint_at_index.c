#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *prev;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    current = *head;

    /* If index is 0, delete the head node */
    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    /* Traverse the list to find the node to delete */
    for (i = 0; current != NULL && i < index; i++)
    {
        prev = current;
        current = current->next;
    }

    /* If current is NULL, index is out of range */
    if (current == NULL)
        return (-1);

    /* Update pointers to remove the node from the list */
    prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = prev;

    free(current);
    return (1);
}
