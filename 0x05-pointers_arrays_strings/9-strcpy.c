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
	int d, i;

	i = 0;
	while (i < 1)
	{
		*dest = *src;
		if (*src == '\0')
			break;
		src++;
		dest++;
	}
	d = dest;
	return (d);
}
