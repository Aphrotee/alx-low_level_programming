#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning of the list
 * @head: doubly linked list
 * @n: integer data for new node
 *
 * Return: pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
	{
		temp = *head;
		new->prev = NULL;
		new->n = n;
		new->next = *head;
		temp->prev = new;
		*head = new;
	}
	return (new);
}
