#include <stddef.h>
#include <stdlib.h>
#include "lists.h"


/**
 * insert_node - inserts a node at particular index
 * @new: node listint_t
 * @idx: index
 * @j: pointer
 * @h: pointer
 *
 * Return: pointer
 */
listint_t *insert_node(listint_t *new, listint_t *j, listint_t *h, unsigned int idx)
{
	unsigned int i = 0;
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
/**
 * insert_nodeint_at_index - inserts a node at particular index
 * @head: list listint_t
 * @idx: index
 * @n: data n
 *
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *d, *j, *c, *new = (listint_t *)malloc(sizeof(listint_t));
	unsigned int x = 0;

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
	d = insert_node(new, j, h, idx);
	return (d);
}
