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
	unsigned long int a, b, c;
	unsigned int i = 1, j = 1, k;
	int x, arr[50];
	a = n >> 1;
	arr[0] = (int)(n - (a << 1));
	while (a != 0)
	{
		c = a;
		a = a >> 1;
		b = a << 1;
		arr[i] = (int)(c - b);
		j++;
		i++;
	}
	k = index;
	x = arr[k];
	return (x);
}
