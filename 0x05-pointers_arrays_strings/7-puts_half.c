#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, a, i, j, k, l, m, n;

	for (a = 0; a < 1; a++)
	{
		if (*str == '\0')
			break;
		l = 0;
		m = 0;
		while (l < 1)
		{
			if (*str == '\0')
			{
				k = m;
				break;
			}
			str++;
			m++;
		}
		len = k;
		if (len % 2 == 0)
			n = len / 2;
		else
			n = (len - 1) / 2;
		i = 0;
		while (i < n)
		{
			str--;
			i++;
		}
		j = 0;
		while (j < n)
		{
			_putchar(*str);
			str++;
			j++;
		}
	}
	_putchar('\n');
}
