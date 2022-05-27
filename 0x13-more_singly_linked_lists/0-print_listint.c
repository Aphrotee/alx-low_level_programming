#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @head: listint_t list
 *
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *head)
{
	const listint_t *temp;
	size_t d = 0;

	temp = head;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		d++;
	}
	return (d);
}
