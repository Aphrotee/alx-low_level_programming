#include "main.h"

/**
 * _memset - fills the first n bytes of a memory area with a character
 * @s: memory area
 * @b: character used to fill memory area
 * @n: number of bytes to fill
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *d;

	d = s;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (d);
}
