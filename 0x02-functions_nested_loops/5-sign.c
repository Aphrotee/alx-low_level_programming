#include "main.h"

/**
 * print_sign - checks polarity of input
 * @n: input to be checked
 *
 * Return: 1 if positive, 0 if input us zero, -1 if negative
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		i = -1;
		_putchar('-');
	}
	else
	{
		i = 0;
		_putchar('0');
	}
	return (i);
}
