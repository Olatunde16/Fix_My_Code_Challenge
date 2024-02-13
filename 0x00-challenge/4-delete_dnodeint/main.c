#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

int main(void)
{
    dlistint_t *head = NULL;
    int i;

    /* Add nodes to the list */
    for (i = 0; i < 10; i++)
        add_dnodeint_end(&head, i);

    /* Print the initial list */
    printf("Initial list:\n");
    print_dlistint(head);
    printf("-----------------\n");

    /* Delete nodes at various indices */
    for (i = 0; i < 5; i++)
    {
        printf("Deleting node at index %d:\n", i);
        delete_dnodeint_at_index(&head, i);
        print_dlistint(head);
        printf("-----------------\n");
    }

    /* Free memory */
    free_dlistint(head);

    return (EXIT_SUCCESS);
}
