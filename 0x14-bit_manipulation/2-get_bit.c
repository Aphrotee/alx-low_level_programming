#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - prints the binary of an integer
 * @n: int to be convertsed to binary
 * @index: index of bit wanted
 *
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a, b, x, y, z;
	unsigned int i = 1, j = 1;
	int *arr, k;

	a = n >> 1;
	x = n >> 1;
	b = x << 1;
	while (a != 0)
	{
		a = a >> 1;
		j++;
	}
	if (index > j)
		return (-1);
	arr = malloc(sizeof(int) * j);
	arr[0] = (int)(n - b);
	while (x != 0)
	{
		z = x;
		x = x >> 1;
		y = x << 1;
		arr[i] = (int)(z - y);
		i++;
	}
	k = arr[index];
	return (k);
}
