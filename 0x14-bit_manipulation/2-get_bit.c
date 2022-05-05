
#include "main.h"

/**
 * get_bit - prints the binary of an integer
 * @n: int to be convertsed to binary
 * @index: index of bit wanted
 *
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a, b, c, d, e;
	unsigned int i, j = 0, k;

	a = n >> 1;
	while (a != 0)
	{
		a = a >> 1;
		j++;
	}
	i = j - index;
	k = 0;
	while (k < i)
	{
		e = c;
		c = c >> 1;
		d = c << 1;
		k++;
	}
	x = (int)(e - d);
	return (x);
}
