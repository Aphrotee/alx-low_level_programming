#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - sums all the data (n) of the list
 * @head: list
 *
 * Return: sum of all data n's
 */
int sum_listint(listint_t *head)
{
	listint_t *h;
	int d = 0;

	if (head == NULL)
		return (0);
	h = head;
	while (h != NULL)
	{
		d += h->n;
		h = h->next;
	}
	return (d);
}
