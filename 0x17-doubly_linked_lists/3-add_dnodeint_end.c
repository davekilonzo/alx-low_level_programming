#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: integer value to be stored in the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *temp, *current;

    if (head == NULL)
        return NULL;

    temp = malloc(sizeof(dlistint_t));
    if (temp == NULL)
        return NULL;

    temp->n = n;
    temp->next = NULL;

    if (*head == NULL)
    {
        temp->prev = NULL;
        *head = temp;
        return temp;
    }

    current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = temp;
    temp->prev = current;

    return temp;
}

