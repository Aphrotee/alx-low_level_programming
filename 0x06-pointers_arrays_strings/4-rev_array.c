#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: numbers of integers to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, k, *b;
	int bb[] = { 0 };

	b = bb;
	i = 0;
	while (i < n)
	{
		*b = *a;
		i++;
		a++;
		b++;
	}
	k = 0;
	while (k < n)
	{
		a--;
		k++;
	}
	j = n - 1;
	while (j >= 0)
	{
		*a = *b;
		b--;
		a++;
		j--;
	}
}
