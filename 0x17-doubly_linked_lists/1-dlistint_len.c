#include "stdio.h"
#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a doubly linked list
 * @h: head of linked list
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t d = 0;
	const dlistint_t *current;

	if (h == NULL)
		;
	else
	{
		current = h;
		while (current != NULL)
		{
			d++;
			current = current->next;
		}
	}
	return (d);
}
