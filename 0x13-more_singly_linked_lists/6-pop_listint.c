#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - adds an element to the beginning of list
 * @head: list listint_t
 *
 * Return: int at deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int d;

	if (head == NULL || *head == NULL)
		return (0);
	h = *head;
	d = h->n;
	*head = h->next;
	free(h);
	return (d);
}
