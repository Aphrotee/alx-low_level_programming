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
	char *d;
	
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
		if (*src == '\0')
			break;
	}
	d = dest;
	return (d);
}
