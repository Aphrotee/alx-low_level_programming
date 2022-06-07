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
	listint_t *h, *j, *c, *new = (listint_t *)malloc(sizeof(listint_t));
	unsigned int i = 0, x = 0;

	new->n = n;
	if (head == NULL)
		return (NULL);
	if (*head == NULL && idx == 0)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	else if (*head == NULL && idx != 0)
		return (NULL);
	h = *head;
	c = *head;
	j = h;
	while (c != NULL)
	{
		c = c->next;
		x++;
	}
	if (idx > x)
		return (NULL);
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
		else if (h->next == NULL)
		{
			h->next = new;
			new->next = NULL;
			return (new);
		}
		i++;
		j = h;
		h = h->next;
	}
	return (NULL);
}
