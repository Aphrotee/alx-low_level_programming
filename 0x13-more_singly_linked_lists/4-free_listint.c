#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees all memory allocated to listint_t
 * @head: list listint_t
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
