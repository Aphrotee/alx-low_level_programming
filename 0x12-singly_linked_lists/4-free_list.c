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
	list_t *temp, *tem;

	temp = head;
	if (!head)
		return;
	if (!(temp->next))
	{
		free(temp->str);
		free(temp);
		return;
	}
	while (temp->next)
	{
		tem = temp->next;
		if (temp->str)
			free(temp->str);
		free(temp);
		temp = tem;
	}
	if (tem->str)
		free(tem->str);
	free(tem);
}
