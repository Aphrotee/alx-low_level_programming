#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees all allocated memory
 * @head: linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = (list_t *)malloc(sizeof(list_t));
	list_t *tem = (list_t *)malloc(sizeof(list_t));

	temp = head;
	if (!head)
		return;
	while (temp->next != NULL)
	{
		tem = temp->next;
		free(temp->str);
		free(temp);
		temp = tem;
	}
	free(tem);
}
