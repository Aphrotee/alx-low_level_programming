#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at a particular index
 * @head: doubly linked list
 * @index: index of required node
 *
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
