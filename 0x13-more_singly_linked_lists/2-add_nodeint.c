#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds an element to the beginning of list
 * @head: list listint_t
 * @n: integer to be in element to be added
 *
 * Return: address to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h, *temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
		return (*head);
	h = *head;
	temp->n = n;
	temp->next = h;
	*head = temp;
	return (temp);
}
