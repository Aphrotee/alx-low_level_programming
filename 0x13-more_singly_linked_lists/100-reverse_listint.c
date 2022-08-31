#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - This is a function that reverses a listint_t linked list.
 * @head: address of pointer to the head node of the linked list.
 *
 * Return: head node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	if (!head || !(*head))
		return (NULL);
	temp = *head;
	if (!(temp->next))
		return (*head);
	temp = temp->next;
	temp2 = temp->next;
	(*head)->next = NULL;
	while (temp2)
	{
		temp->next = *head;
		*head = temp;
		temp = temp2;
		temp2 = temp2->next;
	}
	temp->next = *head;
	*head = temp;
	return (*head);
}
