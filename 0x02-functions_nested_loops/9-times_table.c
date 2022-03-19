#include "main.h"

/**
 * print_number - prints input integer
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
 * times_table - prints times table up to 9 times
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			k = i * j;
			if ((k > 9) && (k < 100))
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
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
