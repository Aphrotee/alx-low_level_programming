#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - sums the integer data in a doubly linked list
 * @head: linked list
 *
 * Return: sum of integer data
 */
int sum_dlistint(dlistint_t *head)
{
	int d = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		d += temp->n;
		temp = temp->next;
	}
	return (d);
}
