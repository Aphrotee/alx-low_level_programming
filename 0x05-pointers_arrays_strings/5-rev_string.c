#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char a = *s;
	int i, j, k;

	
	for (k = 0; k < 1; k++)
	{
		if (*s == '\0')
			break;
		i = 0;
		while (i < 1)
		{
			if (*s == '\0')
				break;
			s++;
		}
		s--;
		j = 0;
		while (j < 1)
		{
			_putchar(*s);
			if (*s == a)
				break;
			s--;
		}
	}
	_putchar('\n');
}
