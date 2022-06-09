#include "stdio.h"
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - prints the elements of a doubly linked lists
 * and returns number of elements
 * @h: head of linked list
 *
 * Return: number of elements in list
 */
size_t print_dlistint(const dlistint_t *h)
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
			printf("%d\n", current->n);
			current = current->next;			
		}
	}
	return d;
}
