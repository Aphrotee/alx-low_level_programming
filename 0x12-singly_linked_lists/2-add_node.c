#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: address of pointer to linked list
 * @str: string to be added
 *
 * Return: pointer to list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;

	ptr = (list_t *)malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->next = *head;
	ptr->len = strlen(str);
	*head = ptr;
	return (ptr);
}
