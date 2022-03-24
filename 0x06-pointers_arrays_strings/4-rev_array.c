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
		bb[i] = a[i];
		i++;
	}
	k = 0;
	j = n - 1;
	while (j >= 0)
	{
		a[k] = bb[j];
		j--;
	}
}
