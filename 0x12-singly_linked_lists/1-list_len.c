#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - counts the number of nodes of list
 * @h: pointer to struct node
 *
 * Return: number of nodes or length of list
 */
size_t list_len(const list_t *h)
{
	size_t d = 0;
	const list_t *ptr = NULL;

	ptr = h;
	if (ptr == NULL)
	{
		return (d);
	}
	while (ptr != NULL)
	{
		ptr = ptr->next;
		d++;
	}
	return (d);
}
