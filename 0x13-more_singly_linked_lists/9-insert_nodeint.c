#include <stddef.h>
#include <stdlib.h>
#include "lists.h"


/**
 * insert_node - inserts a node at particular index
 * @new: node listint_t
 * @idx: index
 * @j: pointer
 * @head: pointer to pointer
 *
 * Return: pointer
 */
listint_t *insert_node(listint_t *new, listint_t *j, listint_t **head,
		       unsigned int idx)
{
	unsigned int i = 0;
	listint_t *h = *head;

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
	listint_t *d, *j, *c, *new;
	unsigned int x = 0;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (head == NULL || new == NULL)
		return (NULL);
	if (*head == NULL && idx == 0)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	else if (*head == NULL && idx != 0)
		return (NULL);
	c = *head;
	j = *head;
	while (c != NULL)
	{
		c = c->next;
		x++;
	}
	if (idx > x)
		return (NULL);
	d = insert_node(new, j, head, idx);
	return (d);
}
