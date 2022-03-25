#include "main.h"

/**
 * rot13 - encodes a string into rot 13
 * @s: input 13
 *
 * Return: pointer to s
 */
char *rot13(char *s)
{
	char *d;
	int j;

	d = s;
	j = 0;
	while (*s != '\0')
	{
		if (((*s >= 'A') && (*s <= 'M')) || ((*s >= 'a') && (*s <= 'm')))
		{
			_putchar(*s);
			*s += 13;
			_putchar(*s);
		}
		s++;
		j++;
	}
	while (j >= 0)
	{
		if (((*s >= 'N') && (*s <= 'Z')) || ((*s >= 'n') && (*s <= 'z')))
		{
			*s -= 13;
		}
		s--;
		j--;
	}
	return (d);
}
