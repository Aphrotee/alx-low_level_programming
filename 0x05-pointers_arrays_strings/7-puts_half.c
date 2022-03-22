#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, n, i, j, k;

	for (k = 0; k < 1; k++)
	{
		if (*str == '\0')
			break;
		len = _strlen(char *str);
		if (len % 2 == 0)
			n = len / 2;
		else
			n = (len - 1) / 2;
		i = 0;
		while (i <= n)
		{
			str++;
			i++;
		}
		j = 0;
		while (j < 1)
		{
			if (*str == '\0')
				break;
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
