#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *  delete_nodeint_at_index - This is  a function that deletes the
 * node at index index of a listint_t linked list.
 * @head: head node of linked list.
 * @index: index of node to be deleted.
 *
 * Return: 1 or -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);
	temp = *head;
	temp2 = temp->next;
	if (index == 0)
	{
		free(*head);
		*head = temp2;
		return (1);
	}
	while (temp2)
	{
		i++;
		if (i == index)
		{
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp = temp2;
		temp2 = temp2->next;
	}
	return (-1);
}
