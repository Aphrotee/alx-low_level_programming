#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees all memory allocated to listint_t
 * @head: list listint_t
 *
 * Return: nothing
 */
void free_listint2(listint_t *head)
{
	listint_t *temp, *h = head;

	if (h == NULL)
		return;
	while (h->next != NULL)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
	free(h);
	head = NULL;
}
