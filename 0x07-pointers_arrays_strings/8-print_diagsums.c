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
	int n, i, c, b, *strt;

	strt  = a;
	n = size;
	c = *(a + (n - 1));
	b = *a;
	for (i = 0; i < n - 1; i++)
	{
		b += *(a + (n + 1));
		a += (n + 1);
	}
	a = strt + (n - 1);
	for (i = 0; i < n - 1; i++)
	{
		c += *(a + (n - 1));
		a += (n - 1);
	}
	printf("%d, %d\n", b, c);
}
