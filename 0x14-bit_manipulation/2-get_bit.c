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
	unsigned long int a, b, c, x, y, z;
	unsigned int i = 1, j = 1;
	

	a = n >> 1;
	x = n >> 1;
	while (a != 0)
	{
		c = a;
		a = a >> 1;
		b = a << 1;
		j++;
	}
	if (index > j)
		return (-1);
	while (i < (index + 1))
	{
		z = x;
		x = x >> 1;
		y = x << 1;
		i++;
	}
	k = (int)(z - y)
	return (k);
}
