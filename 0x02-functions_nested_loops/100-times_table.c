#include "main.h"

/**
 * print_number - prints number up to n times
 * @n: integer to print
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

/**
 * print_times_table - prints times table up to n times
 * @n: times table to print
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				if ((k > 9) && (k < 100))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					print_number(k);
				}
				else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					print_number(k);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
			}
			_putchar('\n');
		}
	}
}
