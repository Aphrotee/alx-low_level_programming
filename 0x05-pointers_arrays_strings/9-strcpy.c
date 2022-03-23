#include "main.h"

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
	int a, b;

	for (a = 0; a < 1; a++)
	{
		if (src = "")
			break;
		d = dest;
		b = 0;
		while (b < 1)
		{
			*dest = *src;
			src++;
			if (*src == '\0')
				break;
			dest++;
		}
	}
	return (d);
}
