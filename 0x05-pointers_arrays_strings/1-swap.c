#include "main.h"

/**
 * swap_int - swaps values of a and b
 * @a: input
 * @b: input
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
