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
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));
	listint_t *tem = (listint_t *)malloc(sizeof(listint_t));

	temp = head;
	while (temp->next != NULL)
	{
		tem = temp->next;
		free(temp);
		temp = tem;
	}
	free(tem);
}
