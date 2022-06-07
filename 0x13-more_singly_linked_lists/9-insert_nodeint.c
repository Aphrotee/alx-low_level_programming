#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at particular index
 * @head: list listint_t
 * @idx: index
 * @n: data n
 *
 * Return: inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *j, *new = (listint_t *)malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	h = *head;
	new->n = n;
	j = h;
	while (h != NULL)
	{
		if (idx == 0)
		{
			new->next = h;
			*head = new;
			return (new);
		}
		else if (i == idx)
		{
			j->next = new;
			new->next = h;
			return (new);
		}
		i++;
		j = h;
		h = h->next;
	}
	return (NULL);
}
