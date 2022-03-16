#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @k: integer to bring out last digit from
 *
 * Return: last digit
 */
int print_last_digit(int k)
{
	int i;

	if (k > 0)
	{
		i = k % 10;
		_putchar(i);
	}
	else if (k < 0)
	{
		k *= -1;
		i = k % 10;
		_putchar(i);
	}
	else
	{
		i = k;
		_putchar(i);
	}
	return (i);
}
