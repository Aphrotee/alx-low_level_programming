#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - counts the number of elements in listint_t
 * @h: list listint_t
 *
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = (listint_t *)malloc(sizeof(listint_t));
	size_t d = 0;

	temp = h;
	while (temp != NULL)
	{
		d++;
		temp = temp->next;
	}
	return (d);
}
