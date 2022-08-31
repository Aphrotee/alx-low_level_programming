#include "main.h"
#include <stdlib.h>

/**
 * array_range - prints an array of integers from min to max
 * @min: lower boundary
 * @max: upper boundary
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int sizee;
	int *arr;
	void *d;
	int a = 0, i;

	if (min > max)
		return (NULL);
	sizee = max - min;
	arr = malloc(sizeof(int) * (sizee + 1));
	if (!arr)
		return (NULL);
	d = arr;
	i = min;
	for (a = 0; a <= sizee; a++)
	{
		arr[a] = i;
		i++;
	}
	return (d);
}
