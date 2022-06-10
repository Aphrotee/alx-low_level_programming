#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in a doubly linked list
 * @head: linked list
 * @index: index whose node is to be deleted
 * Return: -1 on failure or 1 on successs
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp  = *head;
	if (index == 0)
	{
		if (temp->next != NULL)
		{
			(temp->next)->prev = NULL;
			*head = temp->next;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	while (temp->next != NULL)
	{
		if (i == index)
		{
			(temp->prev)->next = temp->next;
			(temp->next)->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL && i == index)
	{
		(temp->prev)->next = NULL;
		free(temp);
		return (1);
	}
	return (-1);
}
