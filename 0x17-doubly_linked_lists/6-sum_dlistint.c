#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * @head: Pointer to the head of the linked list
 * Return: Sum of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* Iterate through the linked list */
	while (head != NULL)
	{
		/* Add the current node's data to sum */
		sum += head->n;
		/* Move to the next node */
		head = head->next;
	}

	return (sum);
}

