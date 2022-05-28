#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets node at a particular index
 * @head: list listint_t
 * @index: index of node needed
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	h = head;
	while (h != NULL)
	{
		if (i == index)
			return (h);
		h = h->next;
		i++;
	}
	return (NULL);
}
