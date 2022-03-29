#include "main.h"

/**
 * _strchr - checks for a particular character in a string
 * @s: string to be checked
 * @c: character to look for
 *
 * Return: pointer to charcter if found
 */
char *_strchr(char *s, char c)
{
	char *d, a;

	while (*s != '\0')
	{
		if (*s == c)
		{
			d = s;
			break;
		}
		s++;
	}
	if (*s == '\0')
	{
		a[] = "nil";
		d = a;
	}
	return (d);
}
