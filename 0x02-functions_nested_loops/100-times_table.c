#include "main.h"

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
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
