#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new element to the end of the listint_t list
 * @head: list listint_t
 * @n: integer to be added
 *
 * Return: address of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));
	listint_t *h;

	if (temp == NULL)
		return (*head);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		h = temp;
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = h;
		temp = h;
	}
	return (*head);
}
