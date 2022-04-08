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
	int *b, *d, a;

	if (min > max)
		d = NULL;
	else
	{
		a = max - min;
		b = malloc((sizeof(int) * a) + 1);
		d = b;
		while (min <= max)
		{
			*b = min;
			min++;
			b++;
		}
	}
	return (d);
}
