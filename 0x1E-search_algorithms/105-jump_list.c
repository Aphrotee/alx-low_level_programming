#include "search_algos.h"

/**
 * jump_list - This is a function that searches for a value in a sorted
 * list of integers using the Jump search algorithm
 * @list: is a pointer to the head of the list to search in
 * @size:  is the number of nodes in list
 * @value: is the value to search for
 *
 * Return: index where the value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, j;
	size_t sq, nextt;
	listint_t *tem, *temp, *start;

	if (!list)
		return (NULL);
	tem = list;
	sq = sqrt(size);
	i = 0;
	for (i = 0; i < size; i += sq)
	{
		nextt = tem->index + sq;
		if (nextt < size)
		{
			j = 0;
			temp = tem;
			while (j < sq && temp->next)
			{
				temp = temp->next;
				j++;
			}
			if (tem->n <= value && value <= temp->n)
				break;
		}
		else
			break;
		j = 0;
		while (j < sq && tem->next)
		{
			tem = tem->next;
			j++;
		}
		printf("Value checked at index ");
		printf("[%ld] = [%d]\n", tem->index, tem->n);
	}
	start = tem;
	j = 0;
	while (j < sq && tem->next)
	{
		tem = tem->next;
		j++;
	}
	printf("Value checked at index ");
	printf("[%ld] = [%d]\n", tem->index, tem->n);
	printf("Value found between indexes ");
	printf("[%ld] and [%ld]\n", tem->index - j, tem->index);
	while (start != tem)
	{
		printf("Value checked at index ");
		printf("[%ld] = [%d]\n", start->index, start->n);
		if (start->n == value)
			return (start);
		start = start->next;
	}
	printf("Value checked at index ");
	printf("[%ld] = [%d]\n", start->index, start->n);
	if (start->n == value)
		return (start);
	return (NULL);
}
