#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the elements along both diagonals
 * @a: two-dimensional array
 * @size: aray size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int n, i, j, c, b;

	n = size;
	c = *(a + (n - 1));
	b = *a;
	for (i = 0; i < n - 1; i++)
	{
		b += *(b + (n + 1));
	}
	for (j = n - 1; i = 0; j >= 0; j--; i++)
	{
		c += a[i][j];
	}
	printf("%d, %d", b, c);
}
