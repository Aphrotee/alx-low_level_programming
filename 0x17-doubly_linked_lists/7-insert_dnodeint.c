#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node in the linked list at index idx
 * @h: doubly linked list
 * @idx: index where new node is to be added
 * @n: integer data
 *
 * Return: pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new, *d;
	unsigned int i = 0;

	if (h == NULL || *h == NULL)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	temp = *h;
	new->n = n;
	if (idx == 0)
	{
		d = add_dnodeint(h, n);
		return (d);
	}
	while (temp->next != NULL)
	{
		if (i == idx)
		{
			new->prev = temp->prev;
			new->next = temp;
			(temp->prev)->next = new;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL && i == idx)
	{
		d = add_dnodeint_end(h, n);
		return (d);
	}
	return (NULL);
}
