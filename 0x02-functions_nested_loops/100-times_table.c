#include "main.h"

/**
 * times_table - prints times table up to n times
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			_putchar(k + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
