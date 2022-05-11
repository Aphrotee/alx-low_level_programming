#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit - sets a bit of binary of an integer to 1
 * @n: pointer to int whose bit is to be set to 1
 * @index: index of bit wanted
 *
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a, b, x, y, z, p = *n;
	unsigned int i = 1, j = 1, m, l;
	int *arr, k = 0;

	if (index > 100)
		return (-1);
	a = p >> 1;
	x = p >> 1;
	b = x << 1;
	while (a != 0)
	{
		a = a >> 1;
		j++;
	}
	if (index > j)
		arr = malloc(sizeof(int) * (1 + index));
	else
		arr = malloc(sizeof(int) * j);
	arr[0] = (int)(p - b);
	while (x != 0)
	{
		z = x;
		x = x >> 1;
		y = x << 1;
		arr[i] = (int)(z - y);
		i++;
	}
	if (index > j)
	{
		for (l = i; l < index; l++)
			arr[l] = 0;
		l++;
	}
	else
		l = i;
	arr[index] = 1;
	for (m = 0; m < l; m++)
		k += arr[m] << m;
	*n = k;
	return (1);
}
