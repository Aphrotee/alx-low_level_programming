#include "main.h"
#include <string.h>

/**
 * _strcpy - copies string src into dest
 * @src: source string
 * @dest: destination to paste string
 *
 * Return: pointer of dest
 */
char *_strcpy(char *dest, char *src)
{
	char *d;
	int a;

	for (a = 0; a < 1; a++)
	{
		if (*src == '\0')
			break;
		d = dest;
		while (*src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
		}
	}
	return (d);
}
