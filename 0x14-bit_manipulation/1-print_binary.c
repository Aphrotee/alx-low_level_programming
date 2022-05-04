#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary of an integer
 * @n: int to be convertsed to binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int a , b, c;

	if (n == 0)
	{
		printf("%lu", n);
		return;
	}
	a = n >> 1;
	b = a << 1;
	if (n - b == 1)
		c = 1;
	else if (n - b == 0)
		c = 0;
	if (a != 0)
		print_binary(a);
	printf("%lu", c);
	return;
}
