#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: address of pointer to linked list
 * @str: string to be added
 *
 * Return: pointer to list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL, *temp;

	temp = *head;
	ptr = (list_t *)malloc(sizeof(list_t));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	ptr->str = strdup(str);
	if (!(ptr->str))
	{
		free(ptr);
		return (NULL);
	}
	ptr->next = NULL;
	ptr->len = strlen(str);
	if (*head == NULL)
		*head = ptr;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	return (ptr);
}
