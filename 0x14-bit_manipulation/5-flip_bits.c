#include <stdlib.h>
#include <stdio.h>

/**
 * len_bit - counts the number of bits of the binary of an int
 * @n: input
 *
 * Return: number of bits
 */
int len_bit(unsigned long int n)
{
	unsigned long int a;
	int d = 1;

	a = n >> 1;
	while (a != 0)
	{
		a = a >> 1;
		d++;
	}
	return (d);
}
/**
 * flip_bits - checks the number of bits needed
 * to be flipped for both inputs to be equal
 * @n: input integer
 * @m: input integer
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, b, s = 1, r, *aa;
	unsigned int d = 0;
	unsigned long int i, w, y;

	a = n ^ m;
	b = len_bit(a);
	aa = malloc(sizeof(int) * b);
	i = a >> 1;
	aa[0] = (int)(a - (i << 1));
	while (i != 0)
	{
		w = i;
		i = i >> 1;
		y = i << 1;
		aa[s] = (int)(w - y);
		s++;
	}
	for (r = 0; r < b; r++)
	{
		if (aa[r] == 1)
			d++;
	}
	return (d);
}
