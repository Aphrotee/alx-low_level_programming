#include "main.h"
void print_number(int n);

/**
 * print_to_98 - prints all integers from n to 98
 * @n: input integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			print_number(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			print_number(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n == 98)
	{
		_putchar('9');
		_putchar('8');
	}
	_putchar('\n');
}
/**
 * print_number - prints out input
 * @n: input
 * Return: void
 */
void print_number(int n)
{
	int a, b;

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		a = n / 10;
		b = n % 10;
		if (a != 0)
		{
			print_number(a);
			_putchar(b + '0');
		}
		else
			_putchar(b + '0');

	}
	else
		_putchar('0');
}
