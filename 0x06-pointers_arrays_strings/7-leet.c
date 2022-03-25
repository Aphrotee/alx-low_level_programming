#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string input
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	char *d;

	d = s;
	while (*s != '\0')
	{
		if ((*s == 'A') || (*s == 'a'))
			*s = '4';
		else if ((*s == 'E') || (*s == 'e'))
			*s = '3';
		else if ((*s == 'O') || (*s == 'o'))
			*s = '0';
		else if ((*s == 'T') || (*s == 't'))
			*s = '7';
		else if ((*s == 'L') || (*s == 'l'))
			*s = '1';
		s++;
	}
	return (d);
}
