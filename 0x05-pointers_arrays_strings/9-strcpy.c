#include "main.h"

/**
 * _strcpy - copies string src into dest
 * @src: source string
 * @dest: destination to paste string
 *
 * Return: pointer of dest
 */
char *_strcpy(char *src, char *dest)
{
	int b, i, j, k;
	char *d, a;
	
	i = 0;
	j = 0;
	while (i < 1)
	{
		if (*src == '\0')
		{
			k = j;
			break;
		}
		src++;
		j++;
	}
	b = 0;
	while (b < k)
	{
		a = *src;
		*dest = a;
		src++;
		dest++;
		b++;
	}
	d = dest;
	return (d);
}
