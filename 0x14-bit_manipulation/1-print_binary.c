#include "main.h"

/**
 * print_binary - prints the binary of an integer
 * @n: int to be convertsed to binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int a, b;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	a = n >> 1;
	b = a << 1;
	if (a != 0)
		print_binary(a);
	if (n - b == 1)
		_putchar('1');
	else if (n - b == 0)
		_putchar('0');
}
